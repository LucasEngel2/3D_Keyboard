#include "3D_Keyboard.h"
#include "keymap_steno.h"
#include "sendstring_dvorak.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _DVORAK,
    _STENO,
    _GAMING,
    _NUMPAD,
    _CODING,
    _FROW
};

enum combo_events {
	AE,
	UE,
	OE,
	COMBO_LENGTH
};

enum unicode_name {
	UC_AE,
	UC_UE,
	UC_OE,
	UC_AEP,
	UC_UEP,
	UC_OEP

};

#define ST_GEM QK_STENO_GEMINI

// Defines your layered keymaps
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DVORAK] = LAYOUT(
	DV_QUOT,	DV_COMM, 	DV_DOT, 	DV_P, 		DV_Y, 		DV_F, 		DV_G, 		DV_C, 		DV_R, 		DV_L,
	DV_A,		DV_O,		DV_E, 		DV_U, 		DV_I, 		DV_D, 		DV_H, 		DV_T, 		DV_N, 		DV_S,
	DV_SCLN, 	DV_Q, 		DV_J, 		DV_K, 		DV_X, 		DV_B, 		DV_M, 		DV_W, 		DV_V, 		DV_Z,
			KC_LSFT, 	KC_BSPC, 	MO(_CODING),	KC_ENT,     	LCTL_T(KC_TAB),	MO(_NUMPAD),	KC_SPC,		TO(_GAMING)
),

    [_STENO] = LAYOUT(
	STN_N1,  	STN_N2, 	STN_N3,  	STN_N4,  	STN_N5,  	STN_N6,  	STN_N7,  	STN_N8,  	STN_N9, 	STN_NA,
  	STN_S1,  	STN_TL,  	STN_PL,  	STN_HL,  	STN_ST1, 	STN_FR,  	STN_PR,  	STN_LR,  	STN_TR,  	STN_DR,
  	STN_S2,  	STN_KL,  	STN_WL,  	STN_RL,  	STN_ST2, 	STN_RR,  	STN_BR,  	STN_GR,  	STN_SR,  	STN_ZR,
  			STN_A,   	STN_O,   	MO(_CODING),	KC_ENT,		TO(_DVORAK),	MO(_NUMPAD),	STN_E,   	STN_U
),
    
    [_GAMING] = LAYOUT(
	KC_TAB, 	DV_Q, 		DV_W, 		DV_E, 		DV_R, 		KC_NO, 		KC_NO, 		KC_NO,	 	KC_NO,		KC_NO,
	KC_LSFT, 	DV_A, 		DV_S, 		DV_D, 		DV_F, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,
	KC_LCTL, 	DV_Z, 		DV_X, 		DV_C, 		DV_V, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,
			DV_1, 		KC_SPC,     	DV_2, 		DV_3, 		TO(_STENO), 	KC_NO, 		KC_NO, 		TO(_DVORAK)
),

    [_NUMPAD] = LAYOUT(
	KC_NLCK, 	KC_P7, 		KC_P8, 		KC_P9, 		KC_EXLM, 	KC_NO, 		KC_NO, 		KC_UP, 		KC_NO, 		KC_NO,
	KC_P0, 		KC_P4, 		KC_P5, 		KC_P6, 		KC_CIRC, 	KC_NO, 		KC_LEFT,	KC_DOWN,	KC_RGHT,	KC_LSFT,
	KC_LALT, 	KC_P1, 		KC_P2, 		KC_P3, 		KC_PERC, 	LCTL(DV_V), 	LCTL(DV_C), 	MO(_FROW), 	LCTL(DV_Z), 	KC_LCTL,
			KC_PPLS,	KC_PMNS,	KC_PAST,	KC_PSLS, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO
),

    [_CODING] = LAYOUT(
	DV_GRV, 	LALT(KC_LEFT), 	LALT(KC_RIGHT), DV_AT, 		KC_NO, 		KC_NO, 		KC_NO, 		LALT(KC_UP), 	LALT(KC_DOWN), 	KC_NO,
	DV_QUES, 	DV_HASH, 	DV_LPRN, 	DV_RPRN, 	KC_NO, 		KC_NO, 		DV_UNDS, 	DV_EQL, 	DV_BSLS,	KC_F5,
	KC_LSFT,	DV_DLR, 	DV_LBRC, 	DV_RBRC, 	KC_NO, 		KC_NO, 		KC_TAB, 	KC_LALT, 	DV_AMPR, 	KC_NO,
			KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		LALT(KC_F4),	KC_LGUI, 	KC_DEL, 	KC_ESC
),


    [_FROW] = LAYOUT(
    	KC_F1, 	   	KC_F2, 		KC_F3, 		KC_F4, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,
	KC_F5,  	KC_F6, 		KC_F7, 		KC_F8, 		KC_NO,   	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,
	KC_F9, 	   	KC_F10, 	KC_F11, 	KC_F12, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,
		        KC_NO, 		KC_NO,      	KC_NO, 	    	KC_NO, 	    	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO
)

};

const uint16_t PROGMEM ae_combo[] = {DV_A, DV_E, COMBO_END};
const uint16_t PROGMEM ue_combo[] = {DV_U, DV_E, COMBO_END};
const uint16_t PROGMEM oe_combo[] = {DV_O, DV_E, COMBO_END};

uint16_t COMBO_LEN = COMBO_LENGTH;

combo_t key_combos[] = {
    [AE] = COMBO(ae_combo, XP(0,3)),
    [UE] = COMBO(ue_combo, XP(1,4)),
    [OE] = COMBO(oe_combo, XP(2,5))
};

const uint32_t PROGMEM unicode_map[] = {
	[UC_AE] = 0x00E4,
	[UC_UE] = 0x00FC,
	[UC_OE] = 0x00F6,
	[UC_AEP] = 0x00C4,
	[UC_UEP] = 0x00DC,
	[UC_OEP] = 0x00D6
	
};

void matrix_init_user() {
    steno_set_mode(STENO_MODE_GEMINI); // or STENO_MODE_BOLT
};
