// Copyright 2012 Jun Wako <wakojun@gmail.com>
// Copyright 2021 Dmitriy Kuminov (@dmik)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_6x6_kinesis(
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                          KC_6   , KC_7   , KC_8       , KC_9    , KC_0   , KC_BSPC,
        KC_GRV , KC_Q   , KC_W , KC_E   , KC_R   , KC_T   ,                           KC_Y   , KC_U   , KC_I       , KC_O    , KC_P   , KC_BSLS,
        KC_TAB, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                           KC_H   , KC_J   , KC_K       , KC_L    , KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                           KC_N   , KC_M   , KC_COMMA   , KC_DOT  , KC_SLASH, MO(3),
                          KC_TRNS, KC_WH_U, KC_WH_D, KC_LALT, MO(1),                     KC_LEFT , KC_DOWN  , KC_UP, KC_RIGHT, MO(2),
                          KC_BSPC ,KC_LSFT  , KC_ESC , KC_LALT, KC_LGUI,                  KC_INS ,KC_DEL , KC_ENT , KC_SPC, C(KC_A)
    ),

    [1] = LAYOUT_6x6_kinesis(
        QK_BOOT , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                         KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , LSG(KC_Q),
        KC_ESC , LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_TAB),                         KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSLS,
        KC_TAB, LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), LGUI(KC_0), LGUI(KC_TAB) ,                 KC_PGUP   , KC_HOME,       KC_UP   , KC_END   , KC_INS, KC_ENT,
        KC_LSFT, KC_LSFT, KC_TRNS, KC_WBAK, KC_WFWD	, KC_SPC   ,                               KC_PGDN   , KC_LEFT   ,    KC_DOWN , KC_RIGHT   , KC_DEL, MO(3),
                 KC_GRV , MO(2)  , KC_TRNS, KC_SPC, KC_TRNS,                         LSG(KC_Q) , MO(2)  , KC_TRNS, KC_TRNS, MO(3),
                 KC_BSPC ,KC_LSFT  , KC_HOME , KC_LALT, KC_LGUI,                  KC_LCTL ,KC_LSFT , MO(2) , KC_SPC, KC_LALT
    ),

    [2] = LAYOUT_6x6_kinesis(
        KC_ESC , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                         KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_CAPS,
        KC_GRV, KC_TRNS   , KC_TRNS   , LSFT(KC_9)   , LSFT(KC_0)   , KC_F11   ,                         KC_F12   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS,
        KC_TAB , KC_TRNS  , KC_GRV  , KC_LBRC, KC_RBRC,  KC_MINS  ,                         KC_EQL  , KC_COMMA  , KC_DOT  , KC_SLASH  , KC_QUOT , KC_ENT,
        KC_LCTL, KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_F11   ,                         KC_F12   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS,
                 KC_INS, KC_DEL, KC_HOME, KC_LALT, MO(3),                     KC_LEFT , KC_DOWN  , KC_UP, KC_RIGHT, KC_TRNS,
                          KC_BSPC ,KC_LSFT  , QK_BOOT , KC_LALT, KC_LCTL,                  KC_LALT ,KC_TRNS  , KC_ENT , KC_SPC, KC_PGDN
    ),
    [3] = LAYOUT_6x6_kinesis(
        KC_TRNS, KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_KB_VOLUME_DOWN   ,            KC_KB_VOLUME_UP   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_PSCR,
        KC_TRNS, KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_KB_MUTE   ,                         KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS,
        QK_BOOT, KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_KB_VOLUME_DOWN   ,            KC_KB_VOLUME_UP   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , QK_BOOT,
        KC_LCTL, KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_F11   ,                         KC_F12   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS,
                 KC_INS, KC_DEL, KC_HOME, KC_END, KC_HOME,                     KC_LEFT , KC_DOWN  , KC_UP, KC_TRNS, KC_TRNS,
                 KC_BSPC ,KC_LSFT  , KC_TRNS , KC_LALT, KC_LCTL,                  KC_LALT ,KC_TRNS  , KC_ENT , KC_SPC, KC_PGDN
    ),
};
