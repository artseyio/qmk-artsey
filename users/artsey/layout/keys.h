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

// Standard Artsey
#define KEY_U1 LT(LAYER_ID_PARENTHETICALS, KC_A)
#define KEY_U2 KC_R
#define KEY_U3 KC_T
#define KEY_U4 LT(LAYER_ID_NUMBERS, KC_S)
#define KEY_L1 LT(LAYER_ID_SYMBOLS, KC_E)
#define KEY_L2 KC_Y
#define KEY_L3 KC_I
#define KEY_L4 LT(LAYER_ID_CUSTOM, KC_O)
