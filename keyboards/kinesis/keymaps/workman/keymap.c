#include QMK_KEYBOARD_H

#define WORKMAN 0  // Base workman
#define PERMISSIVE_HOLD
#define TAPPING_TERM 177
#define IGNORE_MOD_TAP_INTERRUPT

/****************************************************************************************************
 *
 * Keymap: Default Layer in Qwerty
 *
 * ,-------------------------------------------------------------------------------------------------------------------.
 * | Esc    |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS |  FN0 |  BOOT  |
 * |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
 * | =+     |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
 * |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  | \|     |
 * |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
 * | Caps   |   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  | '"     |
 * |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
 * | Shift  |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  | Shift  |
 * `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
 *          | `~   | INS  | Left | Right|                                         | Up   | Down |  [{  |  ]}  |
 *          `---------------------------'                                         `---------------------------'
 *                                        ,-------------.         ,-------------.
 *                                        | Ctrl | Alt  |         | Gui  | Ctrl |
 *                                 ,------|------|------|         |------+------+------.
 *                                 |      |      | Home |         | PgUp |      |      |
 *                                 | BkSp | Del  |------|         |------|Return| Space|
 *                                 |      |      | End  |         | PgDn |      |      |
 *                                 `--------------------'         `--------------------'
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_CAPS, KC_Q, LCTL_T(KC_D), LGUI_T(KC_R), LALT_T(KC_W), KC_B, KC_HOME, KC_A, KC_S, KC_H, LT(4, KC_T), KC_G, KC_LSFT, KC_Z, KC_X, KC_M, KC_C, KC_V, KC_GRV, KC_QUOT, KC_LEFT, KC_RGHT, KC_NO, KC_NO, TO(1), KC_SPC, KC_BSPC, KC_TRNS, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUS, TG(4), DF(0), KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_J, RALT_T(KC_F), RGUI_T(KC_U), RCTL_T(KC_P), KC_SCLN, KC_BSLS, KC_Y, KC_N, KC_E, KC_O, KC_I, KC_END, KC_K, KC_L, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DOWN, KC_LBRC, KC_RBRC, RCTL(KC_PGUP), RCTL(KC_PGDN), KC_PGUP, KC_PGDN, KC_TAB, KC_ENT),
                                                              [1] = LAYOUT(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_CAPS, KC_Q, LCTL_T(KC_W), LGUI_T(KC_E), LALT_T(KC_R), KC_T, KC_HOME, KC_A, KC_S, KC_D, LT(4, KC_F), KC_G, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_GRV, KC_QUOT, KC_LEFT, KC_RGHT, KC_NO, KC_NO, KC_TRNS, KC_SPC, KC_BSPC, TO(0), KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUS, TG(4), DF(0), KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_Y, RALT_T(KC_U), RGUI_T(KC_I), RCTL_T(KC_O), KC_P, KC_BSLS, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_END, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DOWN, KC_LBRC, KC_RBRC, RCTL(KC_PGUP), RCTL(KC_PGDN), KC_PGUP, KC_PGDN, KC_TAB, KC_ENT),
                                                              [2] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
                                                              [3] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
                                                              [4] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_NO, LSFT(KC_PGUP), KC_P4, KC_P5, KC_P6, KC_PCMM, KC_NO, LSFT(KC_PGDN), KC_P1, KC_P2, KC_P3, KC_PEQL, KC_NO, KC_P0, KC_P0, KC_PDOT, KC_PENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PENT)};

void matrix_init_user(void) {}

void matrix_scan_user(void) {}

bool process_record_user(uint16_t keycode, keyrecord_t *record) { return true; }

void led_set_user(uint8_t usb_led) {}
