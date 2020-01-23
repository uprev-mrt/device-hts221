/**
 * @file hts221.c       
 * @author Jason Berger
 * @brief Implementation of hts221 sensor
 * 
 */

#include "hts221.h"

mrt_status_t hts221_init_i2c(hts221_t* dev, mrt_i2c_handle_t i2c_handle )
{
    return new_i2c_register_device(dev, i2c_handle, HTS221_I2C_ADDRESS, 1 );
}

mrt_status_t hts221_init_spi(hts221_t* dev, mrt_spi_handle_t spi_handle, mrt_gpio_t chipselect )
{
    init_spi_register_device(dev, spi_handle,chipselect, 1 );
}