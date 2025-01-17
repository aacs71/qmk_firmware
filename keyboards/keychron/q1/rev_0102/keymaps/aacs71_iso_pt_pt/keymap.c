/* Copyright 2022 António Salgado
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
 */

#include "sendstring_portuguese.h"
#include "mac_pt_iso_overrides.h"

#include QMK_KEYBOARD_H
#include "keymap_user.h"
#ifdef RGB_MATRIX_ENABLE
#    include "rgb_matrix_user.h"
#endif


// clang-format off

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[MAC_BASE] = LAYOUT_iso_83(
            KC_ESC,         KC_F1,         KC_F2,     KC_F3,    KC_F4,     KC_F5,   KC_F6,     KC_F7,     KC_F8,     KC_F9,         KC_F10,         KC_F11,       KC_F12,        KC_DEL,    KC_HOME,
            MAC_PT_BSLS,    PT_1,          PT_2,      PT_3,     PT_4,      PT_5,    PT_6,      PT_7,      PT_8,      PT_9,          PT_0,           MAC_PT_QUOT,  MAC_PT_LDAQ,   KC_BSPC,   KC_PGUP,
            KC_TAB,         PT_Q,          PT_W,      PT_E,     PT_R,      PT_T,    PT_Y,      PT_U,      PT_I,      PT_O,          PT_P,           MAC_PT_PLUS,  MAC_PT_ACUT,   KC_PGDN,
            KC_CAPS,        PT_A,          PT_S,      PT_D,     PT_F,      PT_G,    PT_H,      PT_J,      PT_K,      PT_L,          MAC_PT_CCED,    MAC_PT_MORD,  MAC_PT_TILD,   KC_ENT,    KC_END,
            KC_LSFT,        MAC_PT_LABK,   PT_Z,      PT_X,     PT_C,      PT_V,    PT_B,      PT_N,      PT_M,      MAC_PT_COMM,   MAC_PT_DOT,     MAC_PT_MINS,  KC_RSFT,       KC_UP,
            KC_LGUI,        KC_LALT,       KC_LCTL,   KC_SPC,   KC_RGUI,   MO(1),     KC_RCTL,   KC_LEFT,   KC_DOWN,   KC_RGHT
            ),
	[MAC_FN] = LAYOUT_iso_83(
            KC_ESC,    KC_BRID,    KC_BRIU,   KC_TRNS,   KC_TRNS,   RGB_VAD,   RGB_VAI,   KC_MPRV,   KC_MPLY,   KC_MNXT,   KC_MUTE,   KC_VOLD,   KC_VOLU,   KC_INS,   KC_TRNS,
            KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_P7,     KC_P8,     KC_P9,     KC_PSLS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
            RGB_TOG,   RGB_MOD,    RGB_VAI,   RGB_HUI,   RGB_SAI,   RGB_SPI,   KC_TRNS,   KC_P4,     KC_P5,     KC_P6,     KC_PAST,   KC_TRNS,   KC_TRNS,   KC_TRNS,
            KC_TRNS,   RGB_RMOD,   RGB_VAD,   RGB_HUD,   RGB_SAD,   RGB_SPD,   KC_TRNS,   KC_P1,     KC_P2,     KC_P3,     KC_PMNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
            KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_P0,     KC_PDOT,   KC_PENT,   KC_PPLS,   KC_TRNS,   KC_TRNS,
            KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
            ),

    [WIN_BASE] = LAYOUT_iso_83(
            KC_ESC,    KC_F1,     KC_F2,     KC_F3,    KC_F4,     KC_F5,   KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,    KC_DEL,    KC_HOME,
            PT_BSLS,   PT_1,      PT_2,      PT_3,     PT_4,      PT_5,    PT_6,      PT_7,      PT_8,      PT_9,      PT_0,      PT_QUOT,   PT_LDAQ,   KC_BSPC,   KC_PGUP,
            KC_TAB,    PT_Q,      PT_W,      PT_E,     PT_R,      PT_T,    PT_Y,      PT_U,      PT_I,      PT_O,      PT_P,      PT_PLUS,   PT_ACUT,   KC_PGDN,
            KC_CAPS,   PT_A,      PT_S,      PT_D,     PT_F,      PT_G,    PT_H,      PT_J,      PT_K,      PT_L,      PT_CCED,   PT_MORD,   PT_TILD,   KC_ENT,    KC_END,
            KC_LSFT,   PT_LABK,   PT_Z,      PT_X,     PT_C,      PT_V,    PT_B,      PT_N,      PT_M,      PT_COMM,   PT_DOT,    PT_MINS,   KC_RSFT,   KC_UP,
            KC_LCTL,   KC_LGUI,   KC_LALT,   KC_SPC,   KC_RALT,   MO(3),   KC_RCTL,   KC_LEFT,   KC_DOWN,   KC_RGHT
            ),
	[WIN_FN] = LAYOUT_iso_83(
            KC_TRNS,   KC_BRID,    KC_BRIU,   LGUI(KC_TAB),   LGUI(KC_E),   RGB_VAD,   RGB_VAI,   KC_MPRV,   KC_MPLY,   KC_MNXT,   KC_MUTE,   KC_VOLD,   KC_VOLU,   KC_INS,   KC_TRNS,
            KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,        KC_TRNS,      KC_TRNS,   KC_TRNS,   KC_P7,     KC_P8,     KC_P9,     KC_PSLS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
            RGB_TOG,   RGB_MOD,    RGB_VAI,   RGB_HUI,        RGB_SAI,      RGB_SPI,   KC_TRNS,   KC_P4,     KC_P5,     KC_P6,     KC_PAST,   KC_TRNS,   KC_TRNS,   KC_TRNS,
            KC_TRNS,   RGB_RMOD,   RGB_VAD,   RGB_HUD,        RGB_SAD,      RGB_SPD,   KC_TRNS,   KC_P1,     KC_P2,     KC_P3,     KC_PMNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
            KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,        KC_TRNS,      KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_P0,     KC_PDOT,   KC_PENT,   KC_PPLS,   KC_TRNS,   KC_TRNS,
            KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,        KC_TRNS,      KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
            )
};

// clang-format on

void matrix_init_user(void) {
#ifdef RGB_MATRIX_ENABLE
    rgb_matrix_init_user();
#endif
}
