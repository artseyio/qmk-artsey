#pragma once

// //////////
// Board tuning so standard layout/map can be built programatically
#ifdef KEYBOARD_crkbd_rev1
#include "boards/crkbd_rev1.h"
#endif

#define ARTSEY_STD_LAYER_BASE_LEFT \
LT(NUM, KC_S),    KC_T,             KC_R,             LT(PAR, KC_A),    \
LT(CUS, KC_O),    KC_I,             KC_Y,             LT(SYM, KC_E)

#define ARTSEY_STD_LAYER_PAR_LEFT                                       \
KC_RCBR,          KC_LPRN,          KC_RPRN,          KC_TRNS,          \
KC_LCBR,          KC_LBRC,          KC_RBRC,          KC_NO

#define ARTSEY_STD_LAYER_NUM_LEFT \
KC_TRNS,          KC_3,             KC_2,             KC_1,             \
KC_NO,            KC_6,             KC_5,             KC_4

#define ARTSEY_STD_LAYER_NAV_LEFT \
KC_PGUP,          KC_HOME,          KC_UP,            KC_END,           \
KC_PGDN,          KC_LEFT,          KC_DOWN,          KC_RIGHT

#define ARTSEY_STD_LAYER_SYM_LEFT \
KC_GRV,           KC_SCLN,          KC_SLSH,          KC_EXLM,          \
KC_EQL,           KC_MINS,          KC_QUES,          KC_TRNS

#define ARTSEY_STD_LAYER_CUS_LEFT \
KC_NO,            KC_VOLU,          KC_INS,           KC_MUTE,          \
KC_TRNS,          KC_VOLD,          KC_PSCR,          KC_RSFT

#define ARTSEY_STD_LAYER_MSE_LEFT \
KC_WH_U,          KC_BTN2,          KC_MS_U,          KC_BTN1,          \
KC_WH_D,          KC_MS_L,          KC_MS_D,          KC_MS_R

#define ARTSEY_STD_LAYER_BASE_RIGHT \
LT(PAR, KC_A),    KC_R,             KC_T,             LT(NUM, KC_S),    \
LT(SYM, KC_E),    KC_Y,             KC_I,             LT(CUS, KC_O)

#define ARTSEY_STD_LAYER_PAR_RIGHT \
KC_TRNS,          KC_LPRN,          KC_RPRN,          KC_LCBR,          \
KC_NO,            KC_LBRC,          KC_RBRC,          KC_RCBR

#define ARTSEY_STD_LAYER_NUM_RIGHT \
KC_1,             KC_2,             KC_3,             KC_TRNS,          \
KC_4,             KC_5,             KC_6,             KC_NO

#define ARTSEY_STD_LAYER_NAV_RIGHT \
KC_HOME,          KC_UP,            KC_END,           KC_PGUP,          \
KC_LEFT,          KC_DOWN,          KC_RIGHT,         KC_PGDN

#define ARTSEY_STD_LAYER_SYM_RIGHT \
KC_EXLM,          KC_SLSH,          KC_SCLN,          KC_GRV,           \
KC_TRNS,          KC_QUES,          KC_MINS,          KC_EQL

#define ARTSEY_STD_LAYER_CUS_RIGHT \
KC_MUTE,          KC_INS,           KC_VOLU,          KC_NO,            \
KC_RSFT,          KC_PSCR,          KC_VOLD,          KC_TRNS

#define ARTSEY_STD_LAYER_MSE_RIGHT \
KC_BTN1,          KC_MS_U,          KC_BTN2,          KC_WH_U,          \
KC_MS_L,          KC_MS_D,          KC_MS_R,          KC_WH_D

#define ARTSEY_BIG_LAYER_BASE_LEFT \
BIG_LEADING_NONES \
LT(NUM, KC_S),             KC_T,             KC_R,             LT(PAR, KC_A),             KC_MINS,          \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
LT(CUS, KC_O),             KC_I,             KC_Y,             LT(SYM, KC_E),             KC_LSFT,          \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
LALT_T(KC_LCTL),           KC_AT,            KC_DEL,           KC_EQL,                    KC_TAB,           \
BIG_BETWEEN_ROW_THREE_THUMBS \
MO(BIG_SYM),      KC_SPC,           KC_ENT \
BIG_TRAILING_NONES

#define ARTSEY_BIG_LAYER_NAV_LEFT \
BIG_LEADING_NONES \
KC_PGUP,          KC_HOME,          KC_UP,            KC_END,           KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_PGDN,          KC_LEFT,          KC_DOWN,          KC_RIGHT,         KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS \
KC_NO,            KC_NO,            KC_NO \
BIG_TRAILING_NONES


#define ARTSEY_BIG_LAYER_NUM_LEFT \
BIG_LEADING_NONES \
KC_TRNS,          KC_3,             KC_2,             KC_1,             KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_NO,            KC_6,             KC_5,             KC_4,             KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS \
KC_NO,            KC_NO,            KC_NO \
BIG_TRAILING_NONES

#define ARTSEY_BIG_LAYER_SYM_LEFT \
BIG_LEADING_NONES \
KC_GRV,           KC_SCLN,          KC_SLSH,          KC_EXLM,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_EQL,           KC_MINS,          KC_QUES,          KC_TRNS,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS \
KC_NO,            KC_NO,            KC_NO \
BIG_TRAILING_NONES

#define ARTSEY_BIG_LAYER_PAR_LEFT \
BIG_LEADING_NONES \
KC_RCBR,          KC_LPRN,          KC_RPRN,          KC_TRNS,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_LCBR,          KC_LBRC,          KC_RBRC,          KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS \
KC_NO,            KC_NO,            KC_NO \
BIG_TRAILING_NONES

#define ARTSEY_BIG_LAYER_CUS_LEFT \
BIG_LEADING_NONES \
KC_NO,            KC_VOLU,          KC_INS,           KC_MUTE,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_TRNS,          KC_VOLD,          KC_PSCR,          KC_RSFT,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS \
KC_NO,            KC_NO,            KC_NO \
BIG_TRAILING_NONES

#define ARTSEY_BIG_LAYER_MSE_LEFT \
BIG_LEADING_NONES \
KC_WH_U,          KC_BTN2,          KC_MS_U,          KC_BTN1,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_WH_D,          KC_MS_L,          KC_MS_D,          KC_MS_R,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS \
KC_NO,            KC_NO,            KC_NO \
BIG_TRAILING_NONES

#define ARTSEY_BIG_LAYER_BIG_SYM_LEFT \
BIG_LEADING_NONES \
KC_CIRC,          KC_LCBR,          KC_RCBR,          KC_HASH,          KC_GRV,           \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_AMPR,          KC_LPRN,          KC_RPRN,          KC_DLR,           KC_SLSH,          \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_ASTR,          KC_LBRC,          KC_RBRC,          KC_PERC,          KC_PIPE,          \
BIG_BETWEEN_ROW_THREE_THUMBS \
KC_TRNS,          KC_SCLN,          KC_NO \
BIG_TRAILING_NONES

#define ARTSEY_BIG_LAYER_BIG_FUN_LEFT \
BIG_LEADING_NONES \
KC_F4,            KC_F3,            KC_F2,            KC_F1,            KC_TRNS,          \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_F8,            KC_F7,            KC_F6,            KC_F5,            KC_TRNS,          \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_F12,           KC_F11,           KC_F10,           KC_F9,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS \
KC_NO,            KC_NO,            KC_NO \
BIG_TRAILING_NONES

#define ARTSEY_BIG_LAYER_BASE_RIGHT \
BIG_LEADING_NONES \
KC_MINS,          LT(PAR, KC_A),             KC_R,             KC_T,             LT(NUM, KC_S),             \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_LSFT,          LT(SYM, KC_E),             KC_Y,             KC_I,             LT(CUS, KC_O),             \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_TAB,           KC_EQL,                    KC_DEL,           KC_AT,            KC_LCTL,          \
BIG_BETWEEN_ROW_THREE_THUMBS \
KC_ENT,           KC_SPC,           MO(BIG_SYM) \
BIG_TRAILING_NONES

#define ARTSEY_BIG_LAYER_NAV_RIGHT \
BIG_LEADING_NONES \
KC_HOME,          KC_UP,            KC_END,           KC_PGUP,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_LEFT,          KC_DOWN,          KC_RIGHT,         KC_PGDN,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS \
KC_NO,            KC_NO,            KC_NO \
BIG_TRAILING_NONES

#define ARTSEY_BIG_LAYER_NUM_RIGHT \
BIG_LEADING_NONES \
KC_1,             KC_2,             KC_3,             KC_TRNS,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_4,             KC_5,             KC_6,             KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS \
KC_NO,            KC_NO,            KC_NO \
BIG_TRAILING_NONES

#define ARTSEY_BIG_LAYER_SYM_RIGHT \
BIG_LEADING_NONES \
KC_EXLM,          KC_SLSH,          KC_SCLN,          KC_GRV,           KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_TRNS,          KC_QUES,          KC_MINS,          KC_EQL,           KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS \
KC_NO,            KC_NO,            KC_NO  \
BIG_TRAILING_NONES

#define ARTSEY_BIG_LAYER_PAR_RIGHT \
BIG_LEADING_NONES \
KC_TRNS,          KC_LPRN,          KC_RPRN,          KC_LCBR,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_NO,            KC_LBRC,          KC_RBRC,          KC_RCBR,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS \
KC_NO,            KC_NO,            KC_NO \
BIG_TRAILING_NONES

#define ARTSEY_BIG_LAYER_CUS_RIGHT \
BIG_LEADING_NONES \
KC_MUTE,          KC_INS,           KC_VOLU,          KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_RSFT,          KC_PSCR,          KC_VOLD,          KC_TRNS,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS \
KC_NO,            KC_NO,            KC_NO  \
BIG_TRAILING_NONES

#define ARTSEY_BIG_LAYER_MSE_RIGHT \
BIG_LEADING_NONES \
KC_BTN1,          KC_MS_U,          KC_BTN2,          KC_WH_U,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_MS_L,          KC_MS_D,          KC_MS_R,          KC_WH_D,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS \
KC_NO,            KC_NO,            KC_NO  \
BIG_TRAILING_NONES

#define ARTSEY_BIG_LAYER_BIG_SYM_RIGHT \
BIG_LEADING_NONES \
KC_GRV,           KC_HASH,          KC_LCBR,          KC_RCBR,          KC_CIRC,          \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_SLSH,          KC_DLR,           KC_LPRN,          KC_RPRN,          KC_AMPR,          \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_PIPE,          KC_PERC,          KC_LBRC,          KC_RBRC,          KC_ASTR,          \
BIG_BETWEEN_ROW_THREE_THUMBS \
KC_NO,            KC_SCLN,          KC_TRNS  \
BIG_TRAILING_NONES

#define ARTSEY_BIG_LAYER_BIG_FUN_RIGHT \
BIG_LEADING_NONES \
KC_TRNS,          KC_F1,            KC_F2,            KC_F3,            KC_F4,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_TRNS,          KC_F5,            KC_F6,            KC_F7,            KC_F8,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_F9,            KC_F10,           KC_F11,           KC_F12,           \
BIG_BETWEEN_ROW_THREE_THUMBS \
KC_NO,            KC_NO,            KC_NO     \
BIG_TRAILING_NONES
