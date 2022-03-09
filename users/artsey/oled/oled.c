// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0

#include QMK_KEYBOARD_H

// //////////
// ARTSEY layer ids (needed everywhere)
#include "../layout/layer_ids.h"

#include "oled.h"
#include "logo.h"

uint32_t boot_logo_timer = 0;
bool boot_logo_cleared = false;

static void render_icon(void) {
    oled_write_raw_P(ARTSEY_OLED_ICON, sizeof(ARTSEY_OLED_ICON));
}

#ifdef ARTSEY_BOOT_LOGO
static void render_logo(void) {
    oled_write_raw_P(boot_abullet, sizeof(boot_abullet));
}
#endif

static void render_status(void) {
#ifdef ARTSEY_OLED_ICON
    oled_set_cursor(0, 5);
#else
    oled_set_cursor(0, 1);
#endif
    switch (get_highest_layer(layer_state)) {
        case LAYER_ID_BASE:
#ifdef ARTSEY_SIZE_STD
            oled_write_P(PSTR(" ART "), false);
            oled_write_P(PSTR(" SEY "), false);
#endif
#ifdef ARTSEY_SIZE_BIG
            oled_write_P(PSTR("*ART "), false);
            oled_write_P(PSTR(" SEY*"), false);
#endif
#ifdef ARTSEY_SIZE_40P
            oled_write_P(PSTR("*ART*"), false);
            oled_write_P(PSTR("*SEY*"), false);
#endif
            break;
        case LAYER_ID_NUMBERS:
            oled_write_P(PSTR(" Num "), false);
            oled_write_P(PSTR(" ber "), false);
            break;
        case LAYER_ID_SYMBOLS:
            oled_write_P(PSTR(" Sym "), false);
            oled_write_P(PSTR(" bol "), false);
            break;
        case LAYER_ID_PARENTHETICALS:
            oled_write_P(PSTR(" Par "), false);
            oled_write_P(PSTR("  en "), false);
            break;
        case LAYER_ID_NAVIGATION:
            oled_write_P(PSTR(" Nav "), false);
            oled_write_P(PSTR("     "), false);
            break;
        case LAYER_ID_MOUSE:
            oled_write_P(PSTR(" Mou "), false);
            oled_write_P(PSTR("  se "), false);
            break;
        case LAYER_ID_CUSTOM:
            oled_write_P(PSTR(" Cus "), false);
            oled_write_P(PSTR(" tom "), false);
            break;
#ifdef ARTSEY_SIZE_BIG
        case LAYER_ID_BIG_SYM:
            oled_write_P(PSTR("*Sym "), false);
            oled_write_P(PSTR(" bol*"), false);
            break;
        case LAYER_ID_BIG_FUN:
            oled_write_P(PSTR("*Fun "), false);
            oled_write_P(PSTR("  ct*"), false);
            break;
#endif
#ifdef ARTSEY_SIZE_40P
        case LAYER_ID_BIG_SYM:
            oled_write_P(PSTR("*Sym*"), false);
            oled_write_P(PSTR("*bol*"), false);
            break;
        case LAYER_ID_BIG_FUN:
            oled_write_P(PSTR("*Fun*"), false);
            oled_write_P(PSTR("* ct*"), false);
            break;
        case LAYER_ID_40P_BASE:
            oled_write_P(PSTR(" 40% "), false);
            oled_write_P(PSTR(" ANSI"), false);
            break;
        case LAYER_ID_40P_FUNCTION:
            oled_write_P(PSTR(" 40% "), false);
            oled_write_P(PSTR(" Fun "), false);
            break;
        case LAYER_ID_40P_NAVIGATION:
            oled_write_P(PSTR(" 40% "), false);
            oled_write_P(PSTR(" Nav "), false);
            break;
#endif
        default:
            oled_write_P(PSTR(" ??? "), false);
            oled_write_P(PSTR(" ??? "), false);
            break;
    }

    //oled_set_cursor(0, 4);
    //oled_write_raw_P(icon_caps_lock_abullet, sizeof(icon_caps_lock_abullet));
    //oled_set_cursor(5, 2);
    //oled_write_P(icon_scroll_lock_abullet, sizeof(icon_scroll_lock_abullet));
    //oled_set_cursor(0, 3);
    //oled_write_P(icon_navigation_abullet, sizeof(icon_navigation_abullet));
    //oled_set_cursor(5, 3);
    //oled_write_P(icon_mouse_abullet, sizeof(icon_mouse_abullet));
    //oled_set_cursor(0, 4);
    //oled_write_P(icon_settings_abullet, sizeof(icon_settings_abullet));
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
        if(!boot_logo_cleared) {
            oled_clear();
            boot_logo_cleared = true;
        }
#endif
    // TODO: See if active layer/mods can be displayed on non master half oled
    if (!is_keyboard_master()) {
        return false;
    }
    render_icon();
    render_status();
    oled_render();
#ifdef ARTSEY_BOOT_LOGO
    }
#endif
    return false;
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  return OLED_ROTATION_270;
}
