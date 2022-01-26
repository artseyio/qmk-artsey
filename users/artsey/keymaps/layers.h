#pragma once

#define ARTSEY_STD_LAYER_BASE_LEFT \
LT(NUM, KC_S),    KC_T,             KC_R,             LT(PAR, KC_A),    \
LT(CUS, KC_O),    KC_I,             KC_Y,             LT(SYM, KC_S)

#define ARTSEY_STD_LAYER_PAR_LEFT \
KC_RCBR,          KC_LPRN,          KC_RPRN,          KC_TRNS,          \
KC_LCBR,          KC_LBRC,          KC_RBRC,          KC_NO

#define ARTSEY_STD_LAYER_NUM_LEFT \
KC_TRNS,          KC_3,             KC_2,             KC_1,             \
KC_NO,            KC_6,             KC_5,             KC_4

#define ARTSEY_STD_LAYER_NAV_LEFT \
KC_PGUP,          KC_HOME,          KC_UP,            KC_END,           \
KC_PGDN,          KC_LEFT,          KC_DOWN,          KC_NO

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
LT(SYM, KC_S),    KC_Y,             KC_I,             LT(CUS, KC_O)

#define ARTSEY_STD_LAYER_PAR_RIGHT \
KC_TRNS,          KC_LPRN,          KC_RPRN,          KC_LCBR,          \
KC_NO,            KC_LBRC,          KC_RBRC,          KC_RCBR

#define ARTSEY_STD_LAYER_NUM_RIGHT \
KC_1,             KC_2,             KC_3,             KC_TRNS,          \
KC_4,             KC_5,             KC_6,             KC_NO

#define ARTSEY_STD_LAYER_NAV_RIGHT \
KC_HOME,          KC_UP,            KC_END,           KC_PGUP,          \
KC_LEFT,          KC_DOWN,          KC_NO,            KC_PGDN

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
KC_S,             KC_T,             KC_R,             KC_A,             KC_MINS,          \
KC_O,             KC_I,             KC_Y,             KC_E,             KC_LSFT,          \
LALT_T(KC_LCTL),  KC_AT,            KC_DEL,           KC_EQL,           KC_TAB,           \
KC_NO,            KC_NO,            MO(BIG_SYM),      KC_SPC,           KC_ENT

#define ARTSEY_BIG_LAYER_NAV_LEFT \
KC_PGUP,          KC_HOME,          KC_UP,            KC_END,           KC_NO,            \
KC_PGDN,          KC_LEFT,          KC_DOWN,          KC_NO,            KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO

#define ARTSEY_BIG_LAYER_NUM_LEFT \
KC_TRNS,          KC_3,             KC_2,             KC_1,             KC_NO,            \
KC_NO,            KC_6,             KC_5,             KC_4,             KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO

#define ARTSEY_BIG_LAYER_SYM_LEFT \
KC_GRV,           KC_SCLN,          KC_SLSH,          KC_EXLM,          KC_NO,            \
KC_EQL,           KC_MINS,          KC_QUES,          KC_TRNS,          KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO

#define ARTSEY_BIG_LAYER_PAR_LEFT \
KC_RCBR,          KC_LPRN,          KC_RPRN,          KC_TRNS,          KC_NO,            \
KC_LCBR,          KC_LBRC,          KC_RBRC,          KC_NO,            KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO

#define ARTSEY_BIG_LAYER_CUS_LEFT \
KC_NO,            KC_VOLU,          KC_INS,           KC_MUTE,          KC_NO,            \
KC_TRNS,          KC_VOLD,          KC_PSCR,          KC_RSFT,          KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO

#define ARTSEY_BIG_LAYER_MSE_LEFT \
KC_WH_U,          KC_BTN2,          KC_MS_U,          KC_BTN1,          KC_NO,            \
KC_WH_D,          KC_MS_L,          KC_MS_D,          KC_MS_R,          KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO

#define ARTSEY_BIG_LAYER_BIG_SYM_LEFT \
KC_CIRC,          KC_LCBR,          KC_RCBR,          KC_HASH,          KC_GRV,           \
KC_AMPR,          KC_LPRN,          KC_RPRN,          KC_DLR,           KC_SLSH,          \
KC_ASTR,          KC_LBRC,          KC_RBRC,          KC_PERC,          KC_PIPE,          \
KC_NO,            KC_NO,            KC_TRNS,          KC_SCLN,          KC_NO

#define ARTSEY_BIG_LAYER_BIG_FUN_LEFT \
KC_F4,            KC_F3,            KC_F2,            KC_F1,            KC_TRNS,          \
KC_F8,            KC_F7,            KC_F6,            KC_F5,            KC_TRNS,          \
KC_F12,           KC_F11,           KC_F10,           KC_F9,            KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO

#define ARTSEY_BIG_LAYER_BASE_RIGHT \
KC_MINS,          KC_A,             KC_R,             KC_T,             KC_S,             \
KC_LSFT,          KC_E,             KC_Y,             KC_I,             KC_O,             \
KC_TAB,           KC_EQL,           KC_DEL,           KC_AT,            KC_LCTL,          \
KC_ENT,           KC_SPC,           MO(BIG_SYM),      KC_NO,            KC_NO

#define ARTSEY_BIG_LAYER_NAV_RIGHT \
KC_HOME,          KC_UP,            KC_END,           KC_PGUP,          KC_NO,            \
KC_LEFT,          KC_DOWN,          KC_NO,            KC_PGDN,          KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO

#define ARTSEY_BIG_LAYER_NUM_RIGHT \
KC_1,             KC_2,             KC_3,             KC_TRNS,          KC_NO,            \
KC_4,             KC_5,             KC_6,             KC_NO,            KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO

#define ARTSEY_BIG_LAYER_SYM_RIGHT \
KC_EXLM,          KC_SLSH,          KC_SCLN,          KC_GRV,           KC_NO,            \
KC_TRNS,          KC_QUES,          KC_MINS,          KC_EQL,           KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO

#define ARTSEY_BIG_LAYER_PAR_RIGHT \
KC_TRNS,          KC_LPRN,          KC_RPRN,          KC_LCBR,          KC_NO,            \
KC_NO,            KC_LBRC,          KC_RBRC,          KC_RCBR,          KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO

#define ARTSEY_BIG_LAYER_CUS_RIGHT \
KC_MUTE,          KC_INS,           KC_VOLU,          KC_NO,            KC_NO,            \
KC_RSFT,          KC_PSCR,          KC_VOLD,          KC_TRNS,          KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO

#define ARTSEY_BIG_LAYER_MSE_RIGHT \
KC_BTN1,          KC_MS_U,          KC_BTN2,          KC_WH_U,          KC_NO,            \
KC_MS_L,          KC_MS_D,          KC_MS_R,          KC_WH_D,          KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO

#define ARTSEY_BIG_LAYER_BIG_SYM_RIGHT \
KC_GRV,           KC_HASH,          KC_LCBR,          KC_RCBR,          KC_CIRC,          \
KC_SLSH,          KC_DLR,           KC_LPRN,          KC_RPRN,          KC_AMPR,          \
KC_PIPE,          KC_PERC,          KC_LBRC,          KC_RBRC,          KC_ASTR,          \
KC_NO,            KC_SCLN,          KC_TRNS,          KC_NO,            KC_NO

#define ARTSEY_BIG_LAYER_FUN_RIGHT \
KC_TRNS,          KC_F1,            KC_F2,            KC_F3,            KC_F4,            \
KC_TRNS,          KC_F5,            KC_F6,            KC_F7,            KC_F8,            \
KC_NO,            KC_F9,            KC_F10,           KC_F11,           KC_F12,           \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO
