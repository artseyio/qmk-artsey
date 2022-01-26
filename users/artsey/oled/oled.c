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

static void render_status(void) {
    oled_set_cursor(0, 5);
    switch (get_highest_layer(layer_state)) {
        case BASE:
#ifdef ARTSEY_SIZE_STD
            oled_write_ln_P(PSTR(" ART"), false);
            oled_write_ln_P(PSTR(" SEY"), false);
#endif
#ifdef ARTSEY_SIZE_BIG
            oled_write_ln_P(PSTR("*ART"), false);
            oled_write_ln_P(PSTR(" SEY*"), false);
#endif
            break;
        case NUM:
            oled_write_ln_P(PSTR(" Num"), false);
            oled_write_ln_P(PSTR(" ber"), false);
            break;
        case SYM:
            oled_write_ln_P(PSTR(" Sym"), false);
            oled_write_ln_P(PSTR(" bol"), false);
            break;
        case PAR:
            oled_write_ln_P(PSTR(" Par"), false);
            oled_write_ln_P(PSTR("  en"), false);
            break;
        case NAV:
            oled_write_ln_P(PSTR("Nav"), false);
            oled_write_ln_P("", false);
            break;
        case CUS:
            oled_write_ln_P(PSTR(" Cus"), false);
            oled_write_ln_P(PSTR(" tom"), false);
            break;
        case BIG_SYM:
            oled_write_ln_P(PSTR("*Sym"), false);
            oled_write_ln_P(PSTR(" bol*"), false);
            break;
        case BIG_FUN:
            oled_write_ln_P(PSTR("*Fun"), false);
            oled_write_ln_P(PSTR("  ct*"), false);
            break;
        default:
            oled_write_ln_P(PSTR(" ???"), false);
            oled_write_ln_P(PSTR(" ???"), false);
            break;
    }
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
        render_status();
#ifdef ARTSEY_BOOT_LOGO
    }
#endif
    return false;
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  return OLED_ROTATION_270;
}
