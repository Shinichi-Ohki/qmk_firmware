/* Copyright 2017 REPLACE_WITH_YOUR_NAME
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
#include "unsym.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

enum custom_keycodes
{
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

#define KC_AJST ADJUST
#define KC_LOWR LOWER
#define KC_RASE RAISE

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* QWERTY
 * ,-------------------------------------------------------.      ,-------------------------------------------------------.
 * |      |      | Esc  |   1  |   2  |   3  |   4  |   5  |      |   6  |   7  |   8  |   9  |   0  |  -   |  =   | Bksp |
 * |------+------|------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
 * |      |      | Tab  |   Q  |   W  |   E  |   R  |   T  |      |   Y  |   U  |   I  |   O  |   P  |   [  |   ]  |   \  |
 * |------+------|------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
 * |             | Ctrl |   A  |   S  |   D  |   F  |   G  |      |   H  |   J  |   K  |   L  |   ;  |   '  |    Enter    |
 * |------+------|------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
 * |      |      | Shift|   Z  |   X  |   C  |   V  |   B  |      |   N  |   M  |   ,  |   .  |   /  |Shift |  Up  |  `   |
 * |------+------|------+------+-+----+---+--+------+------|      |------+------+---+--+------+------+------+------+------|
 * |      |      |  Fn  |  GUI   |  Alt   | Lthumb  |Space |      |Space | Rthumb   |  Alt   |  GUI  | Left | Down | Right|
 * `-------------------------------------------------------'      `-------------------------------------------------------'
 */

    [0] = LAYOUT(/* Base */
                 KC_5, KC_T, KC_G, KC_B, KC_SPC,
                 KC_4, KC_R, KC_F, KC_V, KC_F13,
                 KC_3, KC_E, KC_D, KC_C,
                 KC_2, KC_W, KC_S, KC_X, KC_LALT,
                 KC_1, KC_Q, KC_A, KC_Z, KC_LGUI,
                 KC_ESC, KC_TAB, KC_LCTL, KC_LSFT, KC_AJST,
                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                 KC_NO, KC_NO, KC_NO, KC_NO,
                 KC_6, KC_Y, KC_H, KC_N, KC_SPC,
                 KC_7, KC_U, KC_J, KC_M, KC_F14,
                 KC_8, KC_I, KC_K, KC_COMM,
                 KC_9, KC_O, KC_L, KC_DOT, KC_RALT,
                 KC_0, KC_P, KC_SCLN, KC_SLSH, KC_RGUI,
                 KC_MINS, KC_LBRC, KC_QUOT, KC_RSFT, KC_LEFT,
                 KC_EQL, KC_RBRC, KC_ENT, KC_UP, KC_DOWN,
                 KC_BSPC, KC_BSLS, KC_GRV, KC_RGHT),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
  switch (id)
  {
  case 0:
    if (record->event.pressed)
    {
      register_code(KC_RSFT);
    }
    else
    {
      unregister_code(KC_RSFT);
    }
    break;
  }
  return MACRO_NONE;
};

void matrix_init_user(void)
{
}

void matrix_scan_user(void)
{
}

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
  return true;
}

void led_set_user(uint8_t usb_led)
{
}
