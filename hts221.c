/**
 * @file hts221.c       
 * @author Jason Berger
 * @brief Implementation of hts221 sensor
 * 
 */

#include "hts221.h"
#include "hts221_regs.h"


static mrt_status_t hts_load_calibration( hts221_t* dev);

mrt_status_t hts_init_i2c(hts221_t* dev, mrt_i2c_handle_t i2c_handle )
{
    mrt_status_t status;
    status = init_i2c_register_device(&dev->mRegDev, i2c_handle, HTS221_I2C_ADDRESS, 1 );
    hts_init_common(dev);

    return status;
}

mrt_status_t hts_init_spi(hts221_t* dev, mrt_spi_handle_t spi_handle, mrt_gpio_t chipselect )
{
    mrt_status_t status;
    status = init_spi_register_device(&dev->mRegDev, spi_handle,chipselect, 1 );
    hts_init_common(dev);
    return status;
}

mrt_status_t hts_init_common(hts221_t* dev)
{
    dev->mWhoAmI = 0;
    regdev_read_reg(&dev->mRegDev, HTS_WHO_AM_I, &dev->mWhoAmI );

    hts_load_calibration(dev);

    uint8_t odr = 0x80 |  HTS_CTRL_ODR_1HZ;
    uint8_t shot = 1;
    regdev_write_reg(&dev->mRegDev, HTS_CTRL_REG1, &odr);
    //regdev_write_reg(&dev->mRegDev, HTS_CTRL_REG2, &shot);


}

/**
 * @brief Loads  the calibration data from NVM
 * @link https://www.st.com/content/ccc/resource/technical/document/technical_note/group0/82/97/c8/ab/c6/da/41/ed/DM00208001/files/DM00208001.pdf/jcr:content/translations/en.DM00208001.pdf
 * @param dev 
 * @return mrt_status_t 
 */
mrt_status_t hts_load_calibration( hts221_t* dev)
{
    uint8_t H0_rh_x2, H1_rh_x2, T0_degC_x8, T1_degC_x8, T1T0_msb;

    //These registers can be read directly into the cal values
    regdev_read_reg(&dev->mRegDev, HTS_H0_T0_OUT, &dev->mCalData.H0_T0_OUT);
    regdev_read_reg(&dev->mRegDev, HTS_H1_T0_OUT, &dev->mCalData.H1_T0_OUT);
    regdev_read_reg(&dev->mRegDev, HTS_T0_OUT, &dev->mCalData.T0_out);
    regdev_read_reg(&dev->mRegDev, HTS_T1_OUT, &dev->mCalData.T1_out);


    //These registers need to be processed to get the values we need
    regdev_read_reg(&dev->mRegDev, HTS_H0_rH_x2, &H0_rh_x2);
    regdev_read_reg(&dev->mRegDev, HTS_H1_rH_x2, &H1_rh_x2);
    regdev_read_reg(&dev->mRegDev, HTS_T0_DEGC_x8, &T0_degC_x8);
    regdev_read_reg(&dev->mRegDev, HTS_T1_DEGC_x8, &T1_degC_x8);
    regdev_read_reg(&dev->mRegDev, HTS_T1T0_MSB, &T1T0_msb);


    // These values just need to be divided down (for some reason they are stored with a multiplier of 2..)
    dev->mCalData.H0_rH = H0_rh_x2 >> 1;
    dev->mCalData.H1_rH = H1_rh_x2 >> 1;

    //T0 and T1 are 10 bits, the MSBs are stored together in the T1T0_MSB Register. They have to be put together, and then divided by 8.. (see link to application note)
    dev->mCalData.T0_degC = ((uint16_t) T0_degC_x8 | (((uint16_t)(T1T0_msb & 0x03)) << 8)) >> 3;
    dev->mCalData.T1_degC = ((uint16_t) T1_degC_x8 | (((uint16_t)(T1T0_msb & 0x0C)) << 6)) >> 3;

    //unpack data
    

    return MRT_STATUS_OK;
}

mrt_status_t hts_test(hts221_t* dev)
{
    uint8_t tmp;
    regdev_read_reg(&dev->mRegDev, HTS_WHO_AM_I, &tmp);

    if(tmp == HTS221_ID)
        return MRT_STATUS_OK;
    else 
        return MRT_STATUS_ERROR;
}

// For conversion info: https://www.st.com/content/ccc/resource/technical/document/technical_note/group0/82/97/c8/ab/c6/da/41/ed/DM00208001/files/DM00208001.pdf/jcr:content/translations/en.DM00208001.pdf
mrt_status_t hts_read_humidity(hts221_t* dev, int* hum)
{
    int16_t raw_adc;
    uint8_t dev_status;
    float tmp_f;

    //check to make sure data is ready
    regdev_read_reg(&dev->mRegDev, HTS_STATUS_REG, &dev_status);
    if(!(dev_status & HTS_STATUS_HUM_READY))
    {
        return MRT_STATUS_ERROR;
    }

    //get raw adc value
    regdev_read_reg(&dev->mRegDev, HTS_HUMIDITY_OUT, &raw_adc );

    //Use calibration coefs to interpolate data to RH%
    tmp_f = ((float)(raw_adc - dev->mCalData.H0_T0_OUT) * (float)(dev->mCalData.H1_rH - dev->mCalData.H0_rH) / (float)(dev->mCalData.H0_T0_OUT - dev->mCalData.H1_T0_OUT))  +  dev->mCalData.H0_rH;

    *hum = tmp_f * 100;
    return MRT_STATUS_OK;
}

mrt_status_t hts_read_temp(hts221_t* dev, int* temp)
{   
    int16_t raw_adc;
    uint8_t dev_status;
    float tmp_f;

    //check to make sure data is ready
    regdev_read_reg(&dev->mRegDev, HTS_STATUS_REG, &dev_status);
    if(!(dev_status & HTS_STATUS_TEMP_READY))
    {
        return MRT_STATUS_ERROR;
    }

    //get raw adc value
    regdev_read_reg(&dev->mRegDev, HTS_TEMP_OUT, &raw_adc );

    //Use calibration coefs to interpolate data to deg C
    tmp_f = ((float)(raw_adc - dev->mCalData.T0_out) * (float)(dev->mCalData.T1_degC - dev->mCalData.T0_degC) / (float)(dev->mCalData.T1_out - dev->mCalData.T0_out))  +  dev->mCalData.T0_degC;
    
    
    *temp = tmp_f * 100;
    return MRT_STATUS_OK;
}
