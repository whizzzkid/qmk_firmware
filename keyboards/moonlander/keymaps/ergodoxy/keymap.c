#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "ergodoxy.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_86_255_128,
  HSV_0_255_255,
  HSV_172_255_255,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TG(1),                                          MO(1),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TG(2),                                          MO(2),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    MT(MOD_HYPR, KC_CAPSLOCK),KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           TG(3),                                                                          MO(3),          KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    LSFT_T(KC_AUDIO_VOL_DOWN),KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       RSFT_T(KC_AUDIO_VOL_UP),
    LT(2,KC_BRIGHTNESS_DOWN),WEBUSB_PAIR,    LCTL_T(KC_MEDIA_PREV_TRACK),KC_LALT,        LGUI_T(KC_MEDIA_NEXT_TRACK),LT(1,KC_MEDIA_STOP),                                                                                                LT(1,KC_DELETE),KC_BSPACE,      KC_DELETE,      KC_LBRACKET,    KC_RBRACKET,    LT(3,KC_BRIGHTNESS_UP),
    KC_SPACE,       KC_ENTER, TD(TD_COMMENT),                       KC_EQUAL,       KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUI,        RGB_VAI,        RGB_SPI,        RGB_SAI,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_F11,         KC_F12,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUD,        RGB_VAD,        RGB_SPD,        RGB_SAD,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, TOGGLE_LAYER_COLOR,RGB_TOG,        RGB_MOD,        RGB_SLD,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, HSV_86_255_128, HSV_0_255_255,  HSV_172_255_255,KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_TILD,                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLASH,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_COMMA,       HSV_0_255_255,  HSV_86_255_128, HSV_172_255_255,RGB_MOD,                                                                                                        RGB_TOG,        KC_TRANSPARENT, KC_DOT,         KC_0,           KC_EQUAL,       KC_TRANSPARENT,
    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,                KC_TRANSPARENT, RGB_HUD,        RGB_HUI
  ),
  [3] = LAYOUT_moonlander(
    AU_TOG,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,
    MU_TOG,         KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    MU_MOD,         KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {154,255,255}, {154,255,255}, {154,255,255}, {154,255,255}, {154,255,255}, {249,228,255}, {35,255,255}, {35,255,255}, {35,255,255}, {0,0,255}, {249,228,255}, {35,255,255}, {35,255,255}, {35,255,255}, {154,255,255}, {249,228,255}, {35,255,255}, {35,255,255}, {35,255,255}, {154,255,255}, {249,228,255}, {35,255,255}, {35,255,255}, {35,255,255}, {154,255,255}, {249,228,255}, {35,255,255}, {35,255,255}, {35,255,255}, {85,203,158}, {85,203,158}, {85,203,158}, {154,255,255}, {154,255,255}, {154,255,255}, {154,255,255}, {154,255,255}, {154,255,255}, {154,255,255}, {154,255,255}, {154,255,255}, {249,228,255}, {35,255,255}, {154,255,255}, {154,255,255}, {154,255,255}, {249,228,255}, {35,255,255}, {35,255,255}, {154,255,255}, {154,255,255}, {249,228,255}, {35,255,255}, {35,255,255}, {154,255,255}, {134,255,213}, {249,228,255}, {35,255,255}, {35,255,255}, {35,255,255}, {134,255,213}, {249,228,255}, {35,255,255}, {35,255,255}, {35,255,255}, {85,203,158}, {85,203,158}, {85,203,158}, {154,255,255}, {154,255,255}, {154,255,255}, {154,255,255} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {32,176,255}, {32,176,255}, {32,176,255}, {105,255,255}, {169,120,255}, {10,225,255}, {10,225,255}, {10,225,255}, {249,228,255}, {169,120,255}, {243,222,234}, {243,222,234}, {243,222,234}, {154,255,255}, {169,120,255}, {85,203,158}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {243,222,234}, {0,0,0}, {0,0,0}, {169,120,255}, {243,222,234}, {243,222,234}, {0,0,0}, {0,0,0}, {169,120,255}, {0,0,0}, {243,222,234}, {0,0,0}, {0,0,0}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {0,205,155}, {0,205,155}, {0,205,155}, {0,205,155}, {141,255,233}, {0,205,155}, {0,205,155}, {0,205,155}, {31,255,255}, {141,255,233}, {0,205,155}, {0,205,155}, {0,205,155}, {31,255,255}, {141,255,233}, {0,205,155}, {0,205,155}, {0,205,155}, {31,255,255}, {141,255,233}, {0,205,155}, {0,205,155}, {0,205,155}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {141,255,233}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {0,205,155}, {0,205,155}, {0,205,155}, {0,205,155}, {141,255,233}, {180,255,233}, {180,255,233}, {180,255,233}, {180,255,233}, {141,255,233}, {180,255,233}, {180,255,233}, {180,255,233}, {0,0,0}, {141,255,233}, {180,255,233}, {180,255,233}, {180,255,233}, {0,0,0}, {141,255,233}, {0,0,0}, {0,0,0}, {0,205,155}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {0,0,0}, {31,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {10,225,255}, {0,0,0}, {0,0,0}, {0,0,0}, {10,225,255}, {10,225,255}, {0,0,0}, {10,225,255}, {0,0,0}, {0,0,0}, {10,225,255}, {0,0,0}, {10,225,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {254,198,190}, {0,0,0}, {0,0,0}, {0,0,0}, {254,198,190}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_86_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,128);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
      }
      return false;
  }
  return true;
}

