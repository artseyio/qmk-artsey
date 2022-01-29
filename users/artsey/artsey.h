// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0

#pragma once

#ifdef OLED_ENABLE
#include "oled/oled.h"
#endif

enum custom_keycodes {
OSM_CTRL = SAFE_RANGE,
OSM_GUI,
OSM_ALT,
OSM_SHIFT
#ifdef POINTING_DEVICE_ENABLE
  , // this is here due to the ifdef. it will cause build errors if removed
  BALL_HUI,              //cycles hue
  BALL_WHT,              //cycles white
  BALL_DEC,              //decreased color
  BALL_SCR,              //scrolls
  BALL_NCL,              //left click
  BALL_RCL,              //right click
  BALL_MCL,              //middle click
#endif
};
