// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0

#pragma once

#ifdef OLED_ENABLE
#include "oled/oled.h"
#endif

enum custom_keycodes {
  BALL_HUI = SAFE_RANGE, //cycles hue
  BALL_WHT,              //cycles white
  BALL_DEC,              //decreased color
  BALL_SCR,              //scrolls
  BALL_NCL,              //left click
  BALL_RCL,              //right click
  BALL_MCL,              //middle click
};

