// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0

#include QMK_KEYBOARD_H
#include "oled.h"
#include "logo.h"

static void render_logo(void) {
//   oled_write_raw_P(raw_logo_1, sizeof(raw_logo_1));
//   oled_set_cursor(0, 5);
//   oled_write_raw_P(raw_logo_2, sizeof(raw_logo_2));
    oled_write_raw_P(raw_logo_3, sizeof(raw_logo_3));
}

bool oled_task_user(void) {
  render_logo();
  return false;
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  return OLED_ROTATION_270;
}
