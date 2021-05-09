/* Copyright 2020 Dimitris Papavasiliou <dpapavas@protonmail.ch>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define AU_UTF XP(A_UMLAUT_LOWER, A_UMLAUT_UPPER)
#define OU_UTF XP(O_UMLAUT_LOWER, O_UMLAUT_UPPER)
#define UU_UTF XP(U_UMLAUT_LOWER, U_UMLAUT_UPPER)
#define EUR X(E_EURO)
#define SDOL XP(S_UMLAUT, S_DOLLAR)
#define SLSH LT(2,KC_SLSH)

#define DOT RCTL_T(KC_DOT)
#define COMM RGUI_T(KC_COMM)
#define L_ RALT_T(KC_L)
#define X_ LCTL_T(KC_X)
#define M_ LGUI_T(KC_M)
#define C_ LALT_T(KC_C)

enum unicode_names { A_UMLAUT_UPPER, A_UMLAUT_LOWER, O_UMLAUT_UPPER, O_UMLAUT_LOWER, U_UMLAUT_UPPER, U_UMLAUT_LOWER, S_UMLAUT, E_EURO, S_DOLLAR };

const uint32_t PROGMEM unicode_map[] = {
    [A_UMLAUT_UPPER] = 0x00C4,  // Ä
    [A_UMLAUT_LOWER] = 0x00E4,  // ä
    [O_UMLAUT_UPPER] = 0x00D6,  // Ö
    [O_UMLAUT_LOWER] = 0x00F6,  // ö
    [U_UMLAUT_UPPER] = 0x00DC,  // Ü
    [U_UMLAUT_LOWER] = 0x00FC,  // ü
    [S_UMLAUT]       = 0x00DF,  // ß
    [E_EURO]         = 0x20AC,  // €
    [S_DOLLAR]       = 0x0024,  // $
};

enum custom_keycodes {
    ARROW = SAFE_RANGE,
    CANCEL,
    COLN,
    PRN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_GESC,  KC_1,    KC_2,    KC_3,     KC_4,     KC_5,                               KC_6,    KC_7,    KC_8,     KC_9,     KC_0,    KC_PSCR,
        KC_GRV,   KC_Q,    KC_D,    KC_R,     KC_W,     KC_B,                               KC_J,    KC_F,    KC_U,     KC_P,     COLN,    KC_BSLS,
        KC_MINS,  KC_A,    KC_S,    KC_H,     KC_T,     KC_G,                               KC_Y,    KC_N,    KC_E,     KC_O,     KC_I,    KC_QUOT,
        KC_LSFT,  KC_Z,    X_,      M_,       C_,       KC_V,                               KC_K,    L_,      COMM,     DOT,      SLSH,    KC_RSFT,

        TG(1),    PRN,     ARROW,   KC_DEL ,  KC_SPC,   KC_BSPC, KC_INS,        KC_CAPS,    KC_TAB,  KC_ENT,  KC_EQL,   KC_LBRC,  KC_RBRC, CANCEL,
                                              KC_HOME,  KC_PGUP, KC_END,        KC_LEFT,    KC_UP,   KC_RGHT,
                                                        KC_PGDN,                            KC_DOWN),

    [1] = LAYOUT(
        KC_TRNS,  KC_F1,   KC_F2,   KC_F3,    KC_F4,    KC_F5,                              KC_F6,   KC_F7,   KC_F8,    KC_F9,    KC_F10,  KC_F11,
        KC_NO,    KC_NO,   KC_NO,   KC_NO,    KC_NO,    RESET,                              KC_NLCK, KC_P7,   KC_P8,    KC_P9,    KC_PMNS, KC_F12,
        KC_NO,    KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,                              KC_NO,   KC_P4,   KC_P5,    KC_P6,    KC_PPLS, KC_PSLS,
        KC_NO,    KC_NO,   KC_LCTL, KC_LGUI,  KC_LALT,  KC_NO,                              KC_PCMM, KC_P1,   KC_P2,    KC_P3,    KC_PEQL, KC_PAST,

        KC_TRNS,  KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, LCTL(KC_PGUP), KC_TRNS, LCTL(KC_PGDN), KC_P0,  KC_PDOT, KC_ESC,
                                             KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_PGUP,       KC_TRNS,
                                                      KC_TRNS,                       KC_PGDN),

    [2] = LAYOUT(
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,                            KC_TRNS, KC_TRNS, UU_UTF,   KC_TRNS,  KC_TRNS, KC_TRNS,
        KC_TRNS,  AU_UTF,  SDOL,    KC_TRNS,  KC_TRNS,  KC_TRNS,                            KC_TRNS, KC_TRNS, EUR,      OU_UTF,   KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_F,    KC_TRNS,  KC_TRNS,  KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,

        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,
                                             KC_TRNS,   KC_TRNS,  KC_TRNS,      KC_TRNS,    KC_TRNS, KC_TRNS,
                                                        KC_TRNS,                            KC_TRNS)
};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    int mod_state = get_mods();
    switch (keycode) {
    case ARROW:
        if ((mod_state & MOD_MASK_SHIFT) && record->event.pressed) {
            del_mods(MOD_MASK_SHIFT);
            SEND_STRING("=>");
            set_mods(mod_state);
        } else if (record->event.pressed) {
            SEND_STRING("->");
        } else {
            // when keycode ARROW is released
        }
        break;
    case CANCEL:
        if (record->event.pressed) {
            SEND_STRING( SS_LCTRL("c"));
        } else {
            // when keycode CANCEL is released
        }
        break;
    case COLN: {
            uint8_t kc = KC_SCLN;
            if ((mod_state & MOD_MASK_SHIFT) && record->event.pressed) {
                del_mods(MOD_MASK_SHIFT);
                register_code(kc);
                set_mods(mod_state);
            } else if (record->event.pressed) {
                add_mods(MOD_LSFT);
                register_code(kc);
                set_mods(mod_state);
            } else {
                unregister_code(kc);
            }
            break;
        }
    case PRN:
        if ((mod_state & MOD_MASK_SHIFT) && record->event.pressed) {
            register_code(KC_0);
        } else if (record->event.pressed) {
            add_mods(MOD_LSFT);
            register_code(KC_9);
            set_mods(mod_state);
        } else {
            if (mod_state & MOD_MASK_SHIFT) {
                unregister_code(KC_0);
            } else {
                unregister_code(KC_9);
            }
        }
        break;
    }
    return true;
};

