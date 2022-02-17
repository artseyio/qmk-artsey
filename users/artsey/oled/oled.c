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
        case LAYER_ID_BASE:
#ifdef ARTSEY_SIZE_STD
            oled_write_ln_P(PSTR(" ART"), false);
            oled_write_ln_P(PSTR(" SEY"), false);
#endif
#ifdef ARTSEY_SIZE_BIG
            oled_write_ln_P(PSTR("*ART"), false);
            oled_write_ln_P(PSTR(" SEY*"), false);
#endif
#ifdef ARTSEY_SIZE_40P
            oled_write_ln_P(PSTR("*ART*"), false);
            oled_write_ln_P(PSTR("*SEY*"), false);
#endif
            break;
        case LAYER_ID_NUMBERS:
            oled_write_ln_P(PSTR(" Num"), false);
            oled_write_ln_P(PSTR(" ber"), false);
            break;
        case LAYER_ID_SYMBOLS:
            oled_write_ln_P(PSTR(" Sym"), false);
            oled_write_ln_P(PSTR(" bol"), false);
            break;
        case LAYER_ID_PARENTHETICALS:
            oled_write_ln_P(PSTR(" Par"), false);
            oled_write_ln_P(PSTR("  en"), false);
            break;
        case LAYER_ID_NAVIGATION:
            oled_write_ln_P(PSTR("Nav"), false);
            oled_write_ln_P("", false);
            break;
        case LAYER_ID_MOUSE:
            oled_write_ln_P(PSTR("Mou"), false);
            oled_write_ln_P(" se", false);
            break;
        case LAYER_ID_CUSTOM:
            oled_write_ln_P(PSTR(" Cus"), false);
            oled_write_ln_P(PSTR(" tom"), false);
            break;
#ifdef ARTSEY_SIZE_BIG
        case LAYER_ID_BIG_SYM:
            oled_write_ln_P(PSTR("*Sym"), false);
            oled_write_ln_P(PSTR(" bol*"), false);
            break;
        case LAYER_ID_BIG_FUN:
            oled_write_ln_P(PSTR("*Fun"), false);
            oled_write_ln_P(PSTR("  ct*"), false);
            break;
#endif
#ifdef ARTSEY_SIZE_40P
        case LAYER_ID_BIG_SYM:
            oled_write_ln_P(PSTR("*Sym*"), false);
            oled_write_ln_P(PSTR("*bol*"), false);
            break;
        case LAYER_ID_BIG_FUN:
            oled_write_ln_P(PSTR("*Fun*"), false);
            oled_write_ln_P(PSTR("* ct*"), false);
            break;
        case LAYER_ID_40P_BASE:
            oled_write_ln_P(PSTR("40%"), false);
            oled_write_ln_P(PSTR("ANSI"), false);
            break;
        case LAYER_ID_40P_FUNCTION:
            oled_write_ln_P(PSTR("40%"), false);
            oled_write_ln_P(PSTR("Fun"), false);
            break;
        case LAYER_ID_40P_NAVIGATION:
            oled_write_ln_P(PSTR("40%"), false);
            oled_write_ln_P(PSTR("Nav"), false);
            break;
#endif
        default:
            oled_write_ln_P(PSTR(" ???"), false);
            oled_write_ln_P(PSTR(" ???"), false);
            break;
    }

    // oled_set_cursor(0, 8);
    // oled_write_raw_P(icon_caps_lock_abullet, sizeof(icon_caps_lock_abullet));
    // oled_set_cursor(8, 8);
    // oled_write_raw_P(icon_scroll_lock_abullet, sizeof(icon_scroll_lock_abullet));
    // oled_set_cursor(0, 10);
    // oled_write_raw_P(icon_navigation_abullet, sizeof(icon_navigation_abullet));
    // oled_set_cursor(8, 10);
    // oled_write_raw_P(icon_mouse_abullet, sizeof(icon_mouse_abullet));
    // oled_set_cursor(0, 12);
    // oled_write_raw_P(icon_settings_abullet, sizeof(icon_settings_abullet));
}

bool oled_task_user(void) {
    // Don't do anything if the display is off
    if (!is_oled_on()) {
        return false;
    }

#ifdef ARTSEY_BOOT_LOGO
    if (boot_logo_timer == 0) {
        boot_logo_timer = timer_read32();
    }
    if (timer_elapsed32(boot_logo_timer) < ARTSEY_BOOT_LOGO_TIMEOUT) {
        render_logo();
    }
    else {
#endif
    // TODO: See if active layer/mods can be displayed on non master half oled
    if (!is_keyboard_master()) {
        return false;
    }
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
