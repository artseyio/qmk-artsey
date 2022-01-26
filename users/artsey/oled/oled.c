// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0

#include QMK_KEYBOARD_H
#include "oled.h"
#include "logo.h"

uint32_t boot_logo_timer = 0;

static void render_icon(void) {
    oled_write_raw_P(ARTSEY_OLED_ICON, sizeof(ARTSEY_OLED_ICON));
}

static void render_logo(void) {
    oled_write_raw_P(boot_abullet, sizeof(boot_abullet));
}

bool oled_task_user(void) {
#ifdef ARTSEY_BOOT_LOGO
    if (boot_logo_timer == 0) {
        boot_logo_timer = timer_read32();
    }
    if (timer_elapsed32(boot_logo_timer) < ARTSEY_BOOT_LOGO_TIMEOUT) {
        render_logo();
    }
    else {
#endif
        oled_clear();
        render_icon();
#ifdef ARTSEY_BOOT_LOGO
    }
#endif
    return false;
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  return OLED_ROTATION_270;
}
