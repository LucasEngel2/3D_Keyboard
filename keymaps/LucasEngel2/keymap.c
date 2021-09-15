#include "3D_Keyboard.h"

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
                    MO(_MOD2),  KC_BSPC,    KC_LSFT,    KC_ENT,		KC_TAB,		KC_LCTL,    KC_SPC,     MO(_MOD1)
    ),

    [_MOD1] = LAYOUT(
		KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,
		KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,
        _______,	KC_F6,      KC_DOWN,    KC_UP,		_______,    _______,	KC_LEFT,    KC_RGHT,    KC_F12,     _______,
					KC_LSFT,	KC_DEL,		KC_LGUI,	KC_ESC,		_______,	_______,	_______,    _______
    ),

    [_MOD2] = LAYOUT(
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
        KC_GRV,     KC_LBRC,    KC_RBRC,    KC_SLSH,    KC_LSFT,    KC_RSFT,    KC_BSLS,    KC_EQL,     KC_MINS,    KC_LSFT,
        _______,    _______,    KC_LALT,		KC_TAB,		_______,    _______,    _______,    _______,    _______,    _______,
                    _______,    _______,    _______,    _______,    KC_PSLS,    KC_PAST,    KC_PPLS,    KC_PMNS
    )
};
