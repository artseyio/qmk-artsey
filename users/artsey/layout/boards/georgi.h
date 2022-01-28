// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0
#pragma once

#ifdef ARTSEY_HAND_LEFT
#define STD_LEADING_NONES KC_NO,
#define STD_MIDDLE_NONES KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
#define STD_TRAILING_NONES , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
#endif

#ifdef ARTSEY_HAND_RIGHT
#define STD_LEADING_NONES KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
#define STD_MIDDLE_NONES  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
#define STD_TRAILING_NONES , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
#endif
