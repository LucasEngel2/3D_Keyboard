#include "38key_3D_Fuckery.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
    _MOD1,
    _MOD2
};

// Defines your layered keymaps
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_A,    KC_1,    MO(_FN),
            KC_TAB,   KC_SPC
    ),

    [_FN] = LAYOUT(
        QMKBEST, QMKURL,  _______,
            RESET,    XXXXXXX
    ),

    [_MOD1] = LAYOUT(

    ),

    [_MOD2] = LAYOUT(

    )
};