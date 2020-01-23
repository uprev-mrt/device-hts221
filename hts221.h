/**
 * @file hts221.h
 * @author Jason Berger
 * @brief Header for implementation of HTS221 humidity and temperature sensor
 * @date 2020-01-23
 * 
 * 
 */

#include <stdint.h>
#include <stdbool.h>
#include "Devices/RegDevice/register_device.h"

#define HTS221_I2C_ADDRESS 0xBE


REG_DEF( HTS_WHO_AM_I,      0x0F,   uint8_t,     REG_PERM_R,     " Id Register, default: 0xBC"  );
REG_DEF( HTS_AV_CONF,       0x10,   uint8_t,     REG_PERM_RW,    "Humidity and temperature resolution mode"  );
REG_DEF( HTS_CTRL_REG1,     0x20,   uint8_t,     REG_PERM_RW,    "Control register 1"  );
REG_DEF( HTS_CTRL_REG2,     0x21,   uint8_t,     REG_PERM_RW,    "Control register 2"  );
REG_DEF( HTS_CTRL_REG3,     0x22,   uint8_t,     REG_PERM_RW,    "Control register 3"  );
REG_DEF( HTS_STATUS_REG,    0x27,   uint8_t,     REG_PERM_R,     "Status register"  );
REG_DEF( HTS_HUMIDITY_OUT,  0x28,   uint16_t,     REG_PERM_R,     "Relative humidity data "  );
REG_DEF( HTS_TEMP_OUT,      0x2A,   uint16_t,     REG_PERM_R,     "Temperature data"  );


typedef mrt_regdev_t hts221_t;

mrt_status_t hts221_init_i2c(hts221_t* dev, mrt_i2c_handle_t i2c_handle );
mrt_status_t hts221_init_spi(hts221_t* dev, mrt_spi_handle_t spit_handle, mrt_gpio_t chipselect );
