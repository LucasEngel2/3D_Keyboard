#include "3D_Keyboard.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _MOD1,
    _MOD2,
    _MOD3,
    _MOD4
};

// Defines your layered keymaps
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
<<<<<<< HEAD
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
        _______,    _______,    KC_LALT,	KC_TAB,		_______,    _______,    _______,    _______,    _______,    _______,
                    _______,    _______,    _______,    _______,    KC_PSLS,    KC_PAST,    KC_PPLS,    KC_PMNS
    )
=======
	KC_QUOT,	KC_COMM, 	KC_DOT, 	KC_P, 		KC_Y, 		KC_F, 		KC_G, 		KC_C, 		KC_R, 		KC_L,
	KC_A,		KC_O,		KC_E, 		KC_U, 		KC_I, 		KC_D, 		KC_H, 		KC_T, 		KC_N, 		KC_S,
	KC_SCLN, 	KC_Q, 		KC_J, 		KC_K, 		KC_X, 		KC_B, 		KC_M, 		KC_W, 		KC_V, 		KC_Z,
				MO(_MOD2), 	KC_BSPC, 	KC_LSFT,	KC_ENT,     LCTL_T(KC_TAB),MO(_MOD1),KC_SPC,    TG(_MOD3)
),

    [_MOD1] = LAYOUT(
	KC_NLCK, 	KC_P7, 		KC_P8, 		KC_P9, 		KC_EXLM, 	KC_NO, 		KC_NO, 		KC_UP, 		KC_NO, 		KC_NO,
	KC_P0, 		KC_P4, 		KC_P5, 		KC_P6, 		KC_CIRC, 	KC_NO, 		KC_LEFT,	KC_DOWN,	KC_RGHT,	KC_LSFT,
	KC_QUES, 	KC_P1, 		KC_P2, 		KC_P3, 		KC_PERC, 	LCTL(KC_V), LCTL(KC_C), MO(_MOD4), 	LCTL(KC_Z), KC_LCTL,
				KC_PPLS,	KC_PMNS,	KC_PAST,	KC_PSLS, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO
),

    [_MOD2] = LAYOUT(
	KC_NO, 	    KC_NO, 		KC_GRV, 	KC_AT, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,
	KC_NO, 		KC_HASH, 	KC_LPRN, 	KC_RPRN, 	KC_NO, 		KC_NO, 		KC_UNDS, 	KC_EQL, 	KC_BSLS,	KC_NO,
	KC_LSFT,	KC_DLR, 	KC_LBRC, 	KC_RBRC, 	KC_NO, 		KC_NO, 		KC_TAB, 	KC_LALT, 	KC_AMPR, 	KC_NO,
				KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		LALT(KC_F4),KC_LGUI, 	KC_DEL, 	KC_ESC
),

    [_MOD3] = LAYOUT(
	KC_TAB, 	KC_Q, 		KC_W, 		KC_E, 		KC_R, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,
	KC_LSFT, 	KC_A, 		KC_S, 		KC_D, 		KC_F, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,
	KC_LCTL, 	KC_Z, 		KC_X, 		KC_C, 		KC_V, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,
				TG(_MOD3), 	KC_SPC,     KC_ESC, 	KC_ENT, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO
),

    [_MOD4] = LAYOUT(
    KC_F1, 	    KC_F2, 		KC_F3, 		KC_F4, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,
    KC_F5,  	KC_F6, 		KC_F7, 		KC_F8, 		KC_NO,   	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,
    KC_F9, 	    KC_F10, 	KC_F11, 	KC_F12, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,
		        KC_NO, 		KC_NO,      KC_NO, 	    KC_NO, 	    KC_NO, 		KC_NO, 		KC_NO, 		KC_NO
)

>>>>>>> 84027e653c2642a7a0d71767016281b53a2426c0
};
