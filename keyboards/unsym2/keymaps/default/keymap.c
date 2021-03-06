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
#include "unsym2.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

enum custom_keycodes {
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
 
[0] = LAYOUT( /* Base */
  KC_NO, KC_NO, KC_ESC,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,  KC_MINS,  KC_EQL,  KC_BSPC,  \
  KC_NO, KC_NO, KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,  KC_P,  KC_LBRC,  KC_RBRC,  KC_BSLS, \
  KC_NO,        KC_LCTL, KC_A,    KC_S,   KC_D,   KC_F,   KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_SCLN,  KC_QUOT,  KC_ENT,  \
  KC_NO, KC_NO, KC_LSFT, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,  KC_UP,  KC_GRV,  \
  KC_NO, KC_NO, KC_AJST, KC_LGUI, KC_LALT, KC_F13, KC_SPC, KC_SPC, KC_F14,  KC_RALT,  KC_RGUI,  KC_LEFT,  KC_DOWN,  KC_RGHT \
),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
