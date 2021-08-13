#pragma once
#include "config_common.h"

#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
#define MANUFACTURER One_Sleeve
#define PRODUCT      38key_3D_Fuckery

#define MATRIX_ROWS 8
#define MATRIX_COLS 5
#define MATRIX_ROW_PINS { D0, D5 }
#define MATRIX_COL_PINS { F1, F0, B0 }

#define DIODE_DIRECTION COL2ROW

#define USE_I2C
#define SOFT_SERIAL_PIN D2
#define SELECT_SOFT_SERIAL_SPEED 1
#define SPLIT_USB_DETECT

#define DEBOUNCE 5
#define FORCE_NKRO
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION