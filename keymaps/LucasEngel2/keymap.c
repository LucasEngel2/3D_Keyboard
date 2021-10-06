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
	KC_QUOT,	KC_COMM, 	KC_DOT, 	KC_P, 		KC_Y, 		KC_F, 		KC_G, 		KC_C, 		KC_R, 		KC_L,
	KC_A,		KC_O,		KC_E, 		KC_U, 		KC_I, 		KC_D, 		KC_H, 		KC_T, 		KC_N, 		KC_S,
	KC_SCLN, 	KC_Q, 		KC_J, 		KC_K, 		KC_X, 		KC_B, 		KC_M, 		KC_W, 		KC_V, 		KC_Z,
				MO(_MOD2), 	KC_BSPC, 	KC_LSFT,	KC_ENT,     LCTL_T(KC_TAB),MO(_MOD1),KC_SPC,    TG(_MOD3)
),

    [_MOD1] = LAYOUT(
	KC_NLCK, 	KC_P7, 		KC_P8, 		KC_P9, 		KC_EXLM, 	KC_NO, 		KC_NO, 		KC_UP, 		KC_NO, 		KC_NO,
	KC_P0, 		KC_P4, 		KC_P5, 		KC_P6, 		KC_CIRC, 	KC_NO, 		KC_LEFT,	KC_DOWN,	KC_RGHT,	KC_LSFT,
	KC_LALT, 	KC_P1, 		KC_P2, 		KC_P3, 		KC_PERC, 	LCTL(KC_V), LCTL(KC_C), MO(_MOD4), 	LCTL(KC_Z), KC_LCTL,
				KC_PPLS,	KC_PMNS,	KC_PAST,	KC_PSLS, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO
),

    [_MOD2] = LAYOUT(
	KC_NO, 	    KC_NO, 		KC_GRV, 	KC_AT, 		KC_NO, 		KC_NO, 		KC_MPRV, 	KC_MPLY, 	KC_MNXT, 	KC_NO,
	KC_QUES, 	KC_HASH, 	KC_LPRN, 	KC_RPRN, 	KC_NO, 		KC_NO, 		KC_UNDS, 	KC_EQL, 	KC_BSLS,	KC_F5,
	KC_LSFT,	KC_DLR, 	KC_LBRC, 	KC_RBRC, 	KC_NO, 		KC_NO, 		KC_TAB, 	KC_LALT, 	KC_AMPR, 	KC_NO,
				KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		LALT(KC_F4),KC_LGUI, 	KC_DEL, 	KC_ESC
),

    [_MOD3] = LAYOUT(
	KC_TAB, 	KC_Q, 		KC_W, 		KC_E, 		KC_R, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,
	KC_LSFT, 	KC_A, 		KC_S, 		KC_D, 		KC_F, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,
	KC_LCTL, 	KC_Z, 		KC_X, 		KC_C, 		KC_V, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,
				KC_1, 		KC_SPC,     KC_2, 		KC_3, 		KC_NO, 		KC_NO, 		KC_NO, 		TG(_MOD3)
),

    [_MOD4] = LAYOUT(
    KC_F1, 	    KC_F2, 		KC_F3, 		KC_F4, 		KC_NO, 		KC_NO, 		KC_BTN1, 	KC_MS_UP, 	KC_BTN2, 	KC_NO,
    KC_F5,  	KC_F6, 		KC_F7, 		KC_F8, 		KC_NO,   	KC_NO, 		KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT,KC_NO,
    KC_F9, 	    KC_F10, 	KC_F11, 	KC_F12, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,
		        KC_NO, 		KC_NO,      KC_NO, 	    KC_NO, 	    KC_NO, 		KC_NO, 		KC_NO, 		KC_NO
)

};
