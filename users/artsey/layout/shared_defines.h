// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0
#pragma once

/*
 *        Left Hand                          Right Hand
 *  ,-------------------.              ,-------------------.
 *  | T4 | T3 | T2 | T1 |   Top row    | T1 | T2 | T3 | T4 |
 *  |----+----+----+----|              |----+----+----+----|
 *  | B4 | B3 | B2 | B1 |  Bottom row  | B1 | B2 | B3 | B4 | 
 *  `-------------------'              `-------------------'
 */

// Base layer for standard Artsey
#define KEY_T1 LT(LAYER_ID_PARENTHETICALS, KC_A)
#define KEY_T2 KC_R
#define KEY_T3 KC_T
#define KEY_T4 LT(LAYER_ID_NUMBERS, KC_S)
#define KEY_B1 LT(LAYER_ID_SYMBOLS, KC_E)
#define KEY_B2 KC_Y
#define KEY_B3 KC_I
#define KEY_B4 LT(LAYER_ID_CUSTOM, KC_O)

// Number layer
#define KNUM_T1 KC_1
#define KNUM_T2 KC_2
#define KNUM_T3 KC_3
#define KNUM_T4 KC_TRNS
#define KNUM_B1 KC_4
#define KNUM_B2 KC_5
#define KNUM_B3 KC_6
#define KNUM_B4 KC_NO

// Navigation layer
#define KNAV_T2 KC_UP
#define KNAV_T4 KC_PGUP
#define KNAV_B2 KC_DOWN
#define KNAV_B4 KC_PGDN

#ifdef ARTSEY_HAND_LEFT
#define KNAV_T1 KC_END
#define KNAV_T3 KC_HOME
#define KNAV_B1 KC_RIGHT
#define KNAV_B3 KC_LEFT
#endif
#ifdef ARTSEY_HAND_RIGHT
#define KNAV_T1 KC_HOME
#define KNAV_T3 KC_END
#define KNAV_B1 KC_LEFT
#define KNAV_B3 KC_RIGHT
#endif

// Mouse layer
#define KMSE_T1 KC_BTN1
#define KMSE_T2 KC_MS_U
#define KMSE_T3 KC_BTN2
#define KMSE_T4 KC_WH_U
#define KMSE_B2 KC_MS_D
#define KMSE_B4 KC_WH_D

#ifdef ARTSEY_HAND_LEFT
#define KMSE_B1 KC_MS_R
#define KMSE_B3 KC_MS_L
#endif
#ifdef ARTSEY_HAND_RIGHT
#define KMSE_B1 KC_MS_L
#define KMSE_B3 KC_MS_R
#endif

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
