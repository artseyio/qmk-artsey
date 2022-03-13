// Copyright (c) 2022 Rhys Wong (purple-rw)
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