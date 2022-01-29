// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0

#include QMK_KEYBOARD_H
#include "artsey.h"
#include "layout/combos.h"

void keyboard_post_init_user(void) {
#ifdef POINTING_DEVICE_ENABLE
    pimoroni_trackball_set_rgbw(255, 255, 255, PIMORONI_BRIGHTNESS);
#endif
}

#ifdef POINTING_DEVICE_ENABLE
#include "layout/pimoroni.h"
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case OSM_CTRL:
            if (record->event.pressed) {
                set_oneshot_mods(MOD_BIT(KC_LCTL));
            }
            break;
        case OSM_GUI:
            if (record->event.pressed) {
                set_oneshot_mods(MOD_BIT(KC_LGUI));
            }
            break;
        case OSM_ALT:
            if (record->event.pressed) {
                set_oneshot_mods(MOD_BIT(KC_LALT));
            }
            break;
        case OSM_SHIFT:
            if (record->event.pressed) {
                set_oneshot_mods(MOD_BIT(KC_LSFT));
            }
            break;

#ifdef POINTING_DEVICE_ENABLE
        case BALL_HUI:
            if (record->event.pressed) {
                ball_increase_hue();
            }
            break;

        case BALL_WHT:
            if (record->event.pressed) {
                cycle_white();
            }
            break;

        case BALL_DEC:
            if (record->event.pressed) {
                decrease_color();
            }
            break;

        case BALL_SCR:
            if (record->event.pressed) {
                set_scrolling = true;
            } else {
                set_scrolling = false;
            }
            break;

        case BALL_NCL:
            record->event.pressed ? register_code(KC_BTN1) : unregister_code(KC_BTN1);
            break;
        case BALL_RCL:
            record->event.pressed ? register_code(KC_BTN2) : unregister_code(KC_BTN2);
            break;
        case BALL_MCL:
            record->event.pressed ? register_code(KC_BTN3) : unregister_code(KC_BTN3);
            break;
#endif
        default:
            break;
    }
    return true;
}
