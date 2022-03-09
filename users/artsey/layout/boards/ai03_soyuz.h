// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0
#pragma once

// /////////
// User remixes / tweaks -- these take precidence above all else
#if __has_include("../remixes/boards/ai03_soyuz.h")
#include "../remixes/boards/ai03_soyuz.h"
#else
// //////////
// Standard Definitions
#define STD_LEADING_NONES KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
#define STD_BETWEEN_ROW_ONE_TWO_NONES
#define STD_TRAILING_NONES , KC_NO, KC_NO, KC_NO, KC_NO

#endif
