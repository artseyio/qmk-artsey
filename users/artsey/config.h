// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0

#pragma once

// //////////
// Combos Config
#include "layout/layer_names.h"
#define COMBO_ONLY_FROM_LAYER LAYER_ID_BASE
#define EXTRA_LONG_COMBOS

// //////////
// One Shot Config (space/crtl/etc)
#define ONESHOT_TAP_TOGGLE 5  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */

// //////////
// Ensure 'master' is set to match handedness of artsey
#ifdef ARTSEY_HAND_LEFT
#define MASTER_LEFT
#undef MASTER_RIGHT
#endif
#ifdef ARTSEY_HAND_RIGHT
#undef MASTER_LEFT
#define MASTER_RIGHT
#endif

// //////////
// Key and layout wrapper macros - this is critical!
//     keymap code for dynamic hand selection based on compile flag
#include "layout/_layout.h"

// //////////
// OLED
#ifdef OLED_ENABLE
#undef OLED_BRIGHTNESS
#define OLED_BRIGHTNESS 127 // Max: 255
#endif

// ////////
// Pimoroni trackball
#ifdef POINTING_DEVICE_ENABLE
#define POINTING_DEVICE_ROTATION_90
#ifdef ARTSEY_HAND_LEFT
#define TRACKBALL_LEFT
#endif
#ifdef ARTSEY_HAND_RIGHT
#define TRACKBALL_RIGHT
#define POINTING_DEVICE_INVERT_X
#define POINTING_DEVICE_INVERT_Y
#endif
#endif
