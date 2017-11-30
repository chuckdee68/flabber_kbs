#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP_ISO(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           CAPS,SLCK,BRK,
    NUBS,1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,          DEL, END, PGDN,    P7,  P8,  P9,
    LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,BSPC,ENT,                         P4,  P5,  P6,  PPLS,
    LSFT,GRV, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,          UP,           P1,  P2,  P3,
    LALT,NO,  LGUI,          SPC,                     RGUI,NO,  NO,  RALT,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),
};

const uint16_t PROGMEM fn_actions[] = {
};
