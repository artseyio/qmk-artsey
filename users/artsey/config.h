// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0

#pragma once

// //////////
// Combos Config
// #define EXTRA_EXTRA_LONG_COMBOS
// #define COMBO_ONLY_FROM_LAYER LAYER_ID_BASE

// //////////
// Key and layout wrapper macros - this is critical!
//     keymap code for dynamic hand selection based on compile flag
#include "keymaps/layout.h"

// //////////
// OLED
#ifdef OLED_ENABLE
#   define OLED_BRIGHTNESS 255
// TODO These need to be changed and fixed in bongo cat or whatever our oled implementation becomes
#define CMK 1
#define NUM 2
#define SYM 3
#define FNC 4
#endif
