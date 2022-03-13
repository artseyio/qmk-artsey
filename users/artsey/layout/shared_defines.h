// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0
#pragma once

/*
 *        Left Hand               Right Hand
 *  ,-------------------.    ,-------------------.
 *  | U4 | U3 | U2 | U1 |    | U1 | U2 | U3 | U4 |
 *  |----+----+----+----|    |----+----+----+----|
 *  | L4 | L3 | L2 | L1 |    | L1 | L2 | L3 | L4 |
 *  `-------------------'    `-------------------'
 */

// Base layer for standard Artsey
#define KEY_U1 LT(LAYER_ID_PARENTHETICALS, KC_A)
#define KEY_U2 KC_R
#define KEY_U3 KC_T
#define KEY_U4 LT(LAYER_ID_NUMBERS, KC_S)
#define KEY_L1 LT(LAYER_ID_SYMBOLS, KC_E)
#define KEY_L2 KC_Y
#define KEY_L3 KC_I
#define KEY_L4 LT(LAYER_ID_CUSTOM, KC_O)

// Number layer
#define KNUM_U1 KC_1
#define KNUM_U2 KC_2
#define KNUM_U3 KC_3
#define KNUM_U4 KC_TRNS
#define KNUM_L1 KC_4
#define KNUM_L2 KC_5
#define KNUM_L3 KC_6
#define KNUM_L4 KC_NO

// Navigation layer
#define KNAV_U2 KC_UP
#define KNAV_U4 KC_PGUP
#define KNAV_L2 KC_DOWN
#define KNAV_L4 KC_PGDN

#ifdef ARTSEY_HAND_LEFT
#define KNAV_U1 KC_END
#define KNAV_U3 KC_HOME
#define KNAV_L1 KC_RIGHT
#define KNAV_L3 KC_LEFT
#endif
#ifdef ARTSEY_HAND_RIGHT
#define KNAV_U1 KC_HOME
#define KNAV_U3 KC_END
#define KNAV_L1 KC_LEFT
#define KNAV_L3 KC_RIGHT
#endif

// Mouse layer
#define KMSE_U1 KC_BTN1
#define KMSE_U2 KC_MS_U
#define KMSE_U3 KC_BTN2
#define KMSE_U4 KC_WH_U
#define KMSE_L2 KC_MS_D
#define KMSE_L4 KC_WH_D

#ifdef ARTSEY_HAND_LEFT
#define KMSE_L1 KC_MS_R
#define KMSE_L3 KC_MS_L
#endif
#ifdef ARTSEY_HAND_RIGHT
#define KMSE_L1 KC_MS_L
#define KMSE_L3 KC_MS_R
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
