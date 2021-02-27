#include QMK_KEYBOARD_H

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

enum unicode_names { A_UMLAUT_UPPER, A_UMLAUT_LOWER, O_UMLAUT_UPPER, O_UMLAUT_LOWER, U_UMLAUT_UPPER, U_UMLAUT_LOWER, S_UMLAUT };

const uint32_t PROGMEM unicode_map[] = {
    [A_UMLAUT_UPPER] = 0x00C4,  // Ä
    [A_UMLAUT_LOWER] = 0x00E4,  // ä
    [O_UMLAUT_UPPER] = 0x00D6,  // Ö
    [O_UMLAUT_LOWER] = 0x00F6,  // ö
    [U_UMLAUT_UPPER] = 0x00DC,  // Ü
    [U_UMLAUT_LOWER] = 0x00FC,  // ü
    [S_UMLAUT]       = 0x00DF,  // ß
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_GRV, KC_Q, KC_D, KC_R, KC_W, KC_B, KC_EQL, KC_A, KC_S, KC_H, LT(4,KC_T), KC_G, LSFT_T(KC_LBRC), KC_Z, LCTL_T(KC_X), LGUI_T(KC_M), LALT_T(KC_C), KC_V, KC_HOME, KC_END, KC_LEFT, KC_RGHT, KC_DEL, KC_CAPS, KC_INS, KC_SPC, KC_BSPC, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUS, TG(4), TO(1), KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_J, KC_F, KC_U, KC_P, KC_SCLN, KC_BSLS, KC_Y, KC_N, KC_E, KC_O, KC_I, KC_QUOT, LT(4,KC_K), RALT_T(KC_L), RGUI_T(KC_COMM), RCTL_T(KC_DOT), LT(2,KC_SLSH), RSFT_T(KC_RBRC), KC_UP, KC_DOWN, KC_PGUP, KC_PGDN, RCTL(KC_PGUP), RCTL(KC_PGDN), KC_PGUP, KC_PGDN, KC_TAB, KC_ENT),
                                                              [1] = LAYOUT(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_GRV, KC_QUOT, KC_LEFT, KC_RGHT, KC_LCTL, KC_LALT, KC_HOME, KC_BSPC, KC_DEL, KC_END, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUS, TG(4), TO(0), KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DOWN, KC_LBRC, KC_RBRC, KC_RGUI, KC_RCTL, KC_PGUP, KC_PGDN, KC_ENT, KC_SPC),
                                                              [2] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, XP(A_UMLAUT_LOWER, A_UMLAUT_UPPER), X(S_UMLAUT), KC_NO, KC_NO, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, XP(U_UMLAUT_LOWER, U_UMLAUT_UPPER), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, XP(O_UMLAUT_LOWER, O_UMLAUT_UPPER), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
                                                              [3] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
                                                              [4] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_NLCK, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_F12, LSFT(KC_PGUP), KC_P4, KC_P5, KC_P6, KC_PPLS, KC_PSLS, LSFT(KC_PGDN), KC_P1, KC_P2, KC_P3, KC_PEQL, KC_PAST, KC_PCMM, KC_P0, KC_PDOT, KC_PENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PENT)};

/* const uint16_t PROGMEM prn[] = {RSFT_T(KC_RBRC), KC_LPRN, COMBO_END}; */
/* combo_t key_combos[COMBO_COUNT] = {COMBO(prn, KC_RPRN)}; */

void matrix_init_user(void) {}

void matrix_scan_user(void) {}

bool process_record_user(uint16_t keycode, keyrecord_t *record) { return true; }

void led_set_user(uint8_t usb_led) {}

/* uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) { */
/* switch (keycode) { */
/* case LSFT_T(KC_LBRC): */
/* return TAPPING_TERM; */
/* case RSFT_T(KC_RBRC): */
/* return 150; */
/* default: */
/* return TAPPING_TERM; */
/* } */
/* } */

/* bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) { */
/* switch (keycode) { */
/* case RSFT_T(KC_RBRC): */
/* return true; */
/* default: */
/* return false; */
/* } */
/* } */

/* bool get_ignore_mod_tap_interrupt(uint16_t keycode, keyrecord_t *record) { */
/* switch (keycode) { */
/* case RSFT_T(KC_RBRC): */
/* return true; */
/* default: */
/* return true; */
/* } */

/* } */

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RSFT_T(KC_RBRC):
            return true;
        default:
            return false;
    }
}
