// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0

#include QMK_KEYBOARD_H
#include "artsey.h"
#include "combos.h"
// Image generator (use a pixel art gif)
// https://joric.github.io/qle/#nav-logo

static void render_logo(void) {
  static const char PROGMEM raw_logo[] = {
      1,   254, 130, 234, 234, 234, 130, 190, 1,   254, 130, 234, 210,
      190, 254, 1,   1,   254, 242, 130, 130, 242, 254, 1,   254, 162,
      170, 170, 138, 254, 254, 1,   1,   254, 130, 130, 170, 170, 154,
      254, 1,   254, 226, 142, 142, 226, 254, 1,   1,   254, 254, 130,
      130, 254, 254, 129, 254, 198, 186, 186, 186, 198, 254, 1,
  };
  oled_write_raw_P(raw_logo, sizeof(raw_logo));
}

bool oled_task_user(void) {
  render_logo();
  return false;
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  return OLED_ROTATION_270;
}
