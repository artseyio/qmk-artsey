// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0

#pragma once

// //////////
// RGB 'stuff' is unsupported
#undef RGBLIGHT_ANIMATIONS

// //////////
// Combos Config
#include "layout/layer_ids.h"
#define EXTRA_LONG_COMBOS
#define COMBO_VARIABLE_LEN

// //////////
// 40% ARTSEY tap dance stuff
#ifdef ARTSEY_SIZE_40P
#define TAPPING_TERM_PER_KEY
#endif

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

// //////////
// Most of artsey, the WHOLE layout, start here for remixes - this is critical!
#include "layout/_layout.h"
