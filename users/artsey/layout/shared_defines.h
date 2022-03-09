// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0

#ifdef ARTSEY_SIZE_40P // 40% artsey (off by default)

#ifndef ARTSEY_40P_LAYER_ANSI
// ANSI Five column support
#ifdef ARTSEY_FIVE_COLUMN
#define LEFT_ANSI_SIX_ONE
#define LEFT_ANSI_SIX_TWO
#define LEFT_ANSI_SIX_THREE
#define RIGHT_ANSI_SIX_ONE
#define RIGHT_ANSI_SIX_TWO
#define RIGHT_ANSI_SIX_THREE
#else
#define LEFT_ANSI_SIX_ONE KC_GESC,
#define LEFT_ANSI_SIX_TWO KC_TAB,
#define LEFT_ANSI_SIX_THREE KC_LCTL,
#define RIGHT_ANSI_SIX_ONE KC_BSPC,
#define RIGHT_ANSI_SIX_TWO KC_ENT,
#define RIGHT_ANSI_SIX_THREE MT(MOD_RSFT, KC_QUOT),
#endif // ARTSEY_FIVE_COLUMN

// ANSI Thumb row (handedness changes layout)
#ifdef ARTSEY_HAND_LEFT
#define LEFT_NUMBERS LT(LAYER_ID_NUMBERS, KC_Q)
#define LEFT_PARENTHETICALS LT(LAYER_ID_PARENTHETICALS, KC_R)
#define LEFT_CUSTOM LT(LAYER_ID_CUSTOM, KC_A)
#define LEFT_SYMBOLS LT(LAYER_ID_SYMBOLS, KC_F)
#else
#define LEFT_NUMBERS KC_Q
#define LEFT_PARENTHETICALS KC_R
#define LEFT_CUSTOM KC_A
#define LEFT_SYMBOLS KC_F
#endif // ARTSEY_HAND_LEFT
#ifdef ARTSEY_HAND_RIGHT
#define RIGHT_NUMBERS LT(LAYER_ID_NUMBERS, KC_P)
#define RIGHT_PARENTHETICALS LT(LAYER_ID_PARENTHETICALS, KC_U)
#define RIGHT_CUSTOM LT(LAYER_ID_CUSTOM, KC_SCLN)
#define RIGHT_SYMBOLS LT(LAYER_ID_SYMBOLS, KC_J)
#else
#define RIGHT_NUMBERS KC_P
#define RIGHT_PARENTHETICALS KC_U
#define RIGHT_CUSTOM KC_SCLN
#define RIGHT_SYMBOLS KC_J
#endif // ARTSEY_HAND_RIGHT

#ifdef ARTSEY_HAND_LEFT
#ifdef ARTSEY_TWO_THUMB
#define BOTTOM_ROW_40P_ANSI MO(LAYER_ID_BIG_SYM), KC_SPACE, LT(LAYER_ID_40P_NAVIGATION, KC_SPACE), LT(LAYER_ID_40P_FUNCTION, KC_MINUS)
#else
#define BOTTOM_ROW_40P_ANSI MO(LAYER_ID_BIG_SYM), KC_LGUI, KC_SPACE, F0P_THUMB_MID_NONES LT(LAYER_ID_40P_NAVIGATION, KC_SPACE), LT(LAYER_ID_40P_FUNCTION, KC_MINUS), TD(TD_AT_EQUAL)
#endif // ARTSEY_TWO_THUMB
#endif // ARTSEY_HAND_LEFT

#ifdef ARTSEY_HAND_RIGHT
#ifdef ARTSEY_TWO_THUMB
#define BOTTOM_ROW_40P_ANSI LT(LAYER_ID_40P_FUNCTION, KC_MINUS), LT(LAYER_ID_40P_NAVIGATION, KC_SPACE), KC_SPACE, MO(LAYER_ID_BIG_SYM)
#else
#define BOTTOM_ROW_40P_ANSI TD(TD_AT_EQUAL), LT(LAYER_ID_40P_FUNCTION, KC_MINUS), LT(LAYER_ID_40P_NAVIGATION, KC_SPACE), KC_SPACE, KC_LGUI, MO(LAYER_ID_BIG_SYM)
#endif  //ARTSEY_TWO_THUMB
#endif // ARTSEY_HAND_RIGHT

#endif // ARTSEY_40P_LAYER_ANSI

#endif // ARTSEY_SIZE_40P
