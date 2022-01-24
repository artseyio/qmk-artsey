// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "_preprocessor_macros.h"

#ifdef ARTSEY_HAND_LEFT
#define BIG_LEADING_NONES NONE(0, 0, 0)
#define BIG_BETWEEN_ROW_ONE_TWO_NONES NONE(0, 0, 5)
#define BIG_BETWEEN_ROW_TWO_THREE_NONES NONE(0, 0, 5)
#define BIG_BETWEEN_ROW_THREE_THUMBS NONE(0, 0, 5)
#define BIG_TRAILING_NONES NONE(0, 0, 3)
#endif

#ifdef ARTSEY_HAND_RIGHT
#define BIG_LEADING_NONES NONE(0, 0, 5)
#define BIG_BETWEEN_ROW_ONE_TWO_NONES NONE(0, 0, 5)
#define BIG_BETWEEN_ROW_TWO_THREE_NONES NONE(0, 0, 5)
#define BIG_BETWEEN_ROW_THREE_THUMBS NONE(0, 0, 3)
#define BIG_TRAILING_NONES NONE(0, 0, 0)
#endif
