#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: default (ANSI MAC Winkeyless)
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.     ,-----------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|     |Pwr|Slp|Wak|
     * `---'   `---------------' `---------------' `---------------' `-----------'     `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backspa| |Ins|Hom|PgU| |NmL|  /|  *|  -|
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \| |Del|End|PgD| |  7|  8|  9|   |
     * |-----------------------------------------------------------| `-----------' |-----------|  +|
     ° |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |               |  4|  5|  6|   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /|Shift     |     |Up |     |  1|  2|  3|   |
     * |-----------------------------------------------------------| ,-----------. |-----------|Ent|
     * |Alt  |Ctrl|Gui |         Space         |Alt |Gui |Menu|Fn0 | |Lef|Dow|Rig| |      0|  .|   |
     * `-----------------------------------------------------------' `-----------' `---------------'
     */
    KEYMAP(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,BRK,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,     DEL, END, PGDN,    P7,  P8,  P9,
    LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                         P4,  P5,  P6,  PPLS,
    LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,          UP,           P1,  P2,  P3,
    LALT,LCTL,LGUI,          SPC,                     RALT,RGUI,APP, FN0,      LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),
    /* Fn layer
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.     ,-----------.
     * |`  |   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|     |Pwr|Slp|Wak|
     * `---'   `---------------' `---------------' `---------------' `-----------'     `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |Esc|F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|Delete | |Ins|Hom|PgU| |NmL|Mb1|Mb2|Mb3|
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |CapsL|   |Wak|Slp|   |FN1|   |   |PrS|ScL|Pau|Up |Ins|  \  | |Del|End|PgD| |MwD|McU|MwU|MwD|
     * |-----------------------------------------------------------| `-----------' |---------------|
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|        |               |McL|McD|McR|MwU|
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |        |FN5|FN6|   |   |   |  +|  -|End|PgD|Dow|          |     |PgU|     |MwL|McD|MwR|   |
     * |-----------------------------------------------------------| ,-----------. |-----------|Mb3|
     * |     |    |    |                           |    |    |     | |Hom|PgD|End| |    Mb1|Mb2|   |
     * `-----------------------------------------------------------' `-----------' `---------------'
     */
    KEYMAP(
    GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,BRK,
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,      INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    CAPS,NO,  WAKE,SLEP,NO,  FN1, NO,  NO,  PSCR,SLCK,PAUS, UP, INS, BSLS,     DEL, END, PGDN,    P7,  P8,  P9,
    TRNS,VOLD,VOLU,MUTE,NO,  NO,  PAST,PSLS,HOME,PGUP,LEFT,RGHT,     TRNS,                        P4,  P5,  P6,  PPLS,
    TRNS,FN5, FN6, NO,  NO,  NO,  PPLS,PMNS,END, PGDN,DOWN,          TRNS,          PGUP,         P1,  P2,  P3,
    TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS,     HOME,PGDN, END,    P0,       PDOT,PENT
    ),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};
