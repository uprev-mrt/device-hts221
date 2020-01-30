/**
 * @file hts221.h
 * @author Jason Berger
 * @brief Header for implementation of HTS221 humidity and temperature sensor
 * @date 2020-01-23
 * 
 * 
 */

#ifdef __cplusplus
extern "C"
{
#endif
#include <stdint.h>
#include <stdbool.h>
#include "Devices/RegDevice/register_device.h"


#define HTS221_I2C_ADDRESS 0xBE
#define HTS221_ID 0xBC





typedef struct{
    int16_t T0_out;
    int16_t T1_out;
    int16_t T0_degC;
    int16_t T1_degC;
    uint8_t H0_rH;
    uint8_t H1_rH;
    int16_t H0_T0_OUT;
    int16_t H1_T0_OUT;
}hts221_calibration_t;

typedef struct{
    mrt_regdev_t mRegDev; //pointer to register device base 
    hts221_calibration_t mCalData;
    uint8_t mWhoAmI;
}hts221_t;

mrt_status_t hts_init_i2c(hts221_t* dev, mrt_i2c_handle_t i2c_handle );
mrt_status_t hts_init_spi(hts221_t* dev, mrt_spi_handle_t spit_handle, mrt_gpio_t chipselect );
mrt_status_t hts_init_common(hts221_t* dev);
mrt_status_t hts_test(hts221_t* dev);
mrt_status_t hts_read_humidity(hts221_t* dev, int* hum);
mrt_status_t hts_read_temp(hts221_t* dev, int* temp);

#ifdef __cplusplus
}
#endif
