// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0
#pragma once

// //////////
// ARTSEY layer ids (needed everywhere)
#define LAYER_ID_GLOBAL -1
#define LAYER_ID_BASE 0
#define LAYER_ID_NUMBERS 1
#define LAYER_ID_SYMBOLS 2
#define LAYER_ID_PARENTHETICALS 3
#define LAYER_ID_NAVIGATION 4
#define LAYER_ID_BT_SEL 5
#define LAYER_ID_CUSTOM 6
#define LAYER_ID_BIG_SYM 7
#define LAYER_ID_BIG_FUNCTION 8

// //////////
// Keymap generation stuff to use left/right handedness based on qmk compile env selection
// Standard ARTSEY layer definitions

// Artsey layout wrapper
#define ARTSEY_STD_LAYOUT_WRAPPER(...) LAYOUT(__VA_ARGS__)

// Layer definitions (base keys)
#define ARTSEY_STD_LAYER_BASE_LEFT \
    KC_S, KC_T, KC_R, KC_A, \
    KC_O, KC_I, KC_Y, KC_E
#define ARTSEY_STD_LAYER_BASE_RIGHT \
    KC_A, KC_R, KC_T, KC_S, \
    KC_E, KC_Y, KC_I, KC_O

// Allow proper auto selection of left / right via keymaps
#ifdef ARTSEY_HAND_LEFT
#define ARTSEY_STD_LAYER_BASE ARTSEY_STD_LAYER_BASE_LEFT
#endif
#ifdef ARTSEY_HAND_RIGHT
#define ARTSEY_STD_LAYER_BASE ARTSEY_STD_LAYER_BASE_RIGHT
#endif
