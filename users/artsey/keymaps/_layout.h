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
// Board tuning so standard layout/map can be built programatically
#ifdef KEYBOARD_crkbd_rev1
#include "boards/crkbd_rev1.h"
#endif

// //////////
// Keymap generation stuff to use left/right handedness based on qmk compile env selection
// Standard ARTSEY layer definitions

// Artsey layout wrapper
#ifdef KEYBOARD_crkbd_rev1
#define ARTSEY_LAYOUT_WRAPPER(...) LAYOUT_split_3x5_3(__VA_ARGS__)
#else
#define ARTSEY_LAYOUT_WRAPPER(...) LAYOUT(__VA_ARGS__)
#endif

// Layer definitions
#define ARTSEY_STD_LAYER_BASE_LEFT \
    KC_S, KC_T, KC_R, KC_A, \
    KC_O, KC_I, KC_Y, KC_E
#define ARTSEY_STD_LAYER_BASE_RIGHT \
    KC_A, KC_R, KC_T, KC_S, \
    KC_E, KC_Y, KC_I, KC_O
#define ARTSEY_BIG_LAYER_BASE_LEFT \
    BIG_LEADING_NONES \
    KC_S,    KC_T,  KC_R,   KC_A,   KC_MINS, \
    BIG_BETWEEN_ROW_ONE_TWO_NONES \
    KC_O,    KC_I,  KC_Y,   KC_E,   KC_LSFT, \
    BIG_BETWEEN_ROW_TWO_THREE_NONES \
    KC_RCTL, KC_AT, KC_DEL, KC_EQL, KC_TAB, \
    BIG_BETWEEN_ROW_THREE_THUMBS \
                    MO(1),  KC_SPC, KC_ENT \
    BIG_TRAILING_NONES
#define ARTSEY_BIG_LAYER_BASE_RIGHT \
    BIG_LEADING_NONES \
    KC_MINS, KC_A,   KC_R,   KC_T,  KC_S, \
    BIG_BETWEEN_ROW_ONE_TWO_NONES \
    KC_LSFT, KC_E,   KC_Y,l  KC_I,  KC_O, \
    BIG_BETWEEN_ROW_TWO_THREE_NONES \
    KC_TAB,  KC_EQL, KC_DEL, KC_AT, KC_RCTL, \
    BIG_BETWEEN_ROW_THREE_THUMBS \
    KC_ENT, KC_SPC, MO(1) \
    BIG_TRAILING_NONES

// Allow proper auto selection of std size via keymaps
#ifdef ARTSEY_SIZE_STD
// Allow proper auto selection of left / right via keymaps
#ifdef ARTSEY_HAND_LEFT
#define ARTSEY_STD_LAYER_BASE ARTSEY_STD_LAYER_BASE_LEFT
#endif
#ifdef ARTSEY_HAND_RIGHT
#define ARTSEY_STD_LAYER_BASE ARTSEY_STD_LAYER_BASE_RIGHT
#endif
#endif

// Allow proper auto selection of big size via keymaps
#ifdef ARTSEY_SIZE_BIG
// Allow proper auto selection of left / right via keymaps
#ifdef ARTSEY_HAND_LEFT
#define ARTSEY_BIG_LAYER_BASE ARTSEY_BIG_LAYER_BASE_LEFT
#endif
#ifdef ARTSEY_HAND_RIGHT
#define ARTSEY_BIG_LAYER_BASE ARTSEY_BIG_LAYER_BASE_RIGHT
#endif
#endif
