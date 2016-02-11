//Ryan Bega - Planck layout
//v1.0 2/10/16

#include "planck.h"
#ifdef BACKLIGHT_ENABLE
  #include "backlight.h"
#endif

#define _primary 0
#define _primary_left 1
#define _primary_down 2
#define _primary_up 3

#define _secondary 4
#define _secondary_down 5
#define _secondary_up 6

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_primary] = {
  {KC_ESC,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_BSPC  },
  {MO(1),   KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_ENT   },
  {KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT  },
  {KC_LCTL, KC_LGUI, KC_LALT, KC_TAB, MO(2),  KC_SPC, KC_SPC, MO(3),  KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV   }
},
[_primary_left] = {
  {KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,     KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DELT  },
  {KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MINS, KC_EQL,  KC_TRNS  },
  {KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS  },
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS  }
},
[_primary_down] = {
  {KC_TAB,  KC_EXLM, KC_AT,   KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DELT    },
  {KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,    KC_RIGHT, KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_UNDS, KC_PLUS, KC_TRNS    },
  {KC_TRNS, KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS    },
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS    }
},
[_primary_up] = {
  {LALT(KC_F4), KC_NO,               KC_NO,               KC_NO,             KC_NO,                KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_PSCR,  KC_DELT   },
  {KC_TRNS,     LCTL(LSFT(KC_LEFT)), LCTL(LSFT(KC_DOWN)), LCTL(LSFT(KC_UP)), LCTL(LSFT(KC_RIGHT)), KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_TRNS   },
  {KC_TRNS,     KC_NO,               KC_NO,               KC_NO,             KC_NO,                KC_NO,    KC_NO,    KC_NO,    KC_HOME,  KC_END,   KC_NO,    KC_TRNS   },
  {KC_TRNS,     KC_TRNS,             KC_TRNS,             KC_TRNS,           KC_TRNS,              KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGDN,  KC_PGUP,  KC_TRNS,  RESET     }
}
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt){
  switch(id){
    break;
  }
  return MACRO_NONE;
};
