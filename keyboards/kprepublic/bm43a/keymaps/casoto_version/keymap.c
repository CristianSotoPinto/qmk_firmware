/* Copyright 2019 mechmerlin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.


QK_BOOT -> is to boot in DFU mode, allow us to flash the board

 */
#include QMK_KEYBOARD_H

/* Left hand combos */
const uint16_t PROGMEM home_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM end_combo[]  = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM pgup_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM pgdn_combo[] = {KC_X, KC_C, COMBO_END};
/* Right hand combos */
const uint16_t PROGMEM left_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM right_combo[]= {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM up_combo[]   = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM down_combo[] = {KC_M, KC_COMM, COMBO_END};

combo_t key_combos[] = {
    COMBO(home_combo, KC_HOME),
    COMBO(end_combo,  KC_END),
    COMBO(pgup_combo, KC_PGUP),
    COMBO(pgdn_combo, KC_PGDN),

    COMBO(left_combo, KC_LEFT),
    COMBO(right_combo,KC_RIGHT),
    COMBO(up_combo,   KC_UP),
    COMBO(down_combo, KC_DOWN),
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_LCTL,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLASH,
        _______, KC_LGUI, KC_LALT, LT(1, KC_ENT),    LT(2, KC_SPC), XXXXXXX, KC_RALT, KC_ESC, _______
    ),
    [1] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_LSFT, LCTL(KC_A),LCTL(KC_S),LCTL(KC_D),LCTL(KC_F),_______, KC_PGUP, KC_HOME, KC_UP,KC_END,KC_QUOT,
        KC_LCTL,  LCTL(KC_Z),LCTL(KC_X),LCTL(KC_C),LCTL(KC_V),LCTL(KC_B), KC_PGDN, KC_LEFT, KC_DOWN,KC_RIGHT,_______,
        _______, KC_LGUI, KC_CAPS, _______      ,    LT(3, KC_SPC), XXXXXXX, KC_RALT, KC_DEL, _______
    ),
    [2] = LAYOUT(
        KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
        _______,    _______, _______, _______, _______, KC_GRV, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,
        _______,          _______, _______, _______, _______, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
        _______, KC_LGUI, KC_LALT, LT(3, KC_ENT),        _______  , XXXXXXX, KC_RALT, KC_DEL, _______
    ),
    [3] = LAYOUT(
        QK_BOOT,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
        _______,   BL_TOGG, BL_DOWN, BL_UP,   BL_STEP, _______, _______, _______, _______, _______, KC_F12,
        _______,          RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______,
        _______, _______, _______, _______,                _______,             _______, _______, _______, _______
    ),

};

