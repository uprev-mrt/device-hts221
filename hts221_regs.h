/**
 * @file hts221_regs.h
 * @author Jason Berger
 * @brief 
 * 
 */

//for reading multple bytes the MSb bust be set to auto increment
#define HTS_AUTO_INCREMENT 0x80

REG_DEF( HTS_WHO_AM_I,      0x0F | HTS_AUTO_INCREMENT,   uint8_t,     REG_PERM_R,     " Id Register, default: 0xBC"  );
REG_DEF( HTS_AV_CONF,       0x10 | HTS_AUTO_INCREMENT,   uint8_t,     REG_PERM_RW,    "Humidity and temperature resolution mode"  );
REG_DEF( HTS_CTRL_REG1,     0x20 | HTS_AUTO_INCREMENT,   uint8_t,     REG_PERM_RW,    "Control register 1"  );
REG_DEF( HTS_CTRL_REG2,     0x21 | HTS_AUTO_INCREMENT,   uint8_t,     REG_PERM_RW,    "Control register 2"  );
REG_DEF( HTS_CTRL_REG3,     0x22 | HTS_AUTO_INCREMENT,   uint8_t,     REG_PERM_RW,    "Control register 3"  );
REG_DEF( HTS_STATUS_REG,    0x27 | HTS_AUTO_INCREMENT,   uint8_t,     REG_PERM_R,     "Status register"  );
REG_DEF( HTS_HUMIDITY_OUT,  0x28 | HTS_AUTO_INCREMENT,   int16_t,     REG_PERM_R,     "Relative humidity data "  );
REG_DEF( HTS_TEMP_OUT,      0x2A | HTS_AUTO_INCREMENT,   int16_t,     REG_PERM_R,     "Temperature data"  );

//Calibration data
REG_DEF( HTS_H0_rH_x2,      0x30 | HTS_AUTO_INCREMENT,   uint8_t,     REG_PERM_R,     ""  );
REG_DEF( HTS_H1_rH_x2,      0x31 | HTS_AUTO_INCREMENT,   uint8_t,     REG_PERM_R,     ""  );
REG_DEF( HTS_T0_DEGC_x8,    0x32 | HTS_AUTO_INCREMENT,   uint8_t,     REG_PERM_R,     ""  );
REG_DEF( HTS_T1_DEGC_x8,    0x33 | HTS_AUTO_INCREMENT,   uint8_t,     REG_PERM_R,     ""  );
REG_DEF( HTS_T1T0_MSB,      0x35 | HTS_AUTO_INCREMENT,   uint8_t,     REG_PERM_R,     ""  );
REG_DEF( HTS_H0_T0_OUT,     0x36 | HTS_AUTO_INCREMENT,   int16_t,     REG_PERM_R,     ""  );
REG_DEF( HTS_H1_T0_OUT,     0x3A | HTS_AUTO_INCREMENT,   int16_t,     REG_PERM_R,     ""  );
REG_DEF( HTS_T0_OUT,        0x3C | HTS_AUTO_INCREMENT,   int16_t,     REG_PERM_R,     ""  );
REG_DEF( HTS_T1_OUT,        0x3E | HTS_AUTO_INCREMENT,   int16_t,     REG_PERM_R,     ""  );

//Values and Flags 
#define HTS_STATUS_TEMP_READY   0x01
#define HTS_STATUS_HUM_READY    0x02

#define HTS_CTRL_ODR_1HZ        0x01
#define HTS_CTRL_ODR_7HZ        0x02
#define HTS_CTRL_ODR_12_5HZ     0x03