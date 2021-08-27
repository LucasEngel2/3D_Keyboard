#include "38key_3D_Fuckery.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _MOD1,
    _MOD2
};

// Defines your layered keymaps
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_QUOT,    KC_COMM,    KC_DOT,     KC_P,       KC_Y,       KC_F,       KC_G,       KC_C,       KC_R,       KC_L,
        KC_A,       KC_O,       KC_E,       KC_U,       KC_I,       KC_D,       KC_H,       KC_T,       KC_N,       KC_S,
        KC_SCLN,    KC_Q,       KC_J,       KC_K,       KC_X,       KC_B,       KC_M,       KC_W,       KC_V,       KC_Z,
                    MO(_MOD1),  KC_BSPC     KC_ENT,     KC_LSFT,    KC_LCTL,    KC_TAB,     KC_SPC,     MO(_MOD2)
    ),

    [_MOD1] = LAYOUT(

    ),

    [_MOD2] = LAYOUT(

    )
};