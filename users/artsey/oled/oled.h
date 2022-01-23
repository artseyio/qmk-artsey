/* Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"
#include "oled_driver.h"

void            oled_driver_render_logo(void);
bool            process_record_user_oled(uint16_t keycode, keyrecord_t *record);
oled_rotation_t oled_init_keymap(oled_rotation_t rotation);
extern uint32_t oled_timer;
void            render_keylock_status(uint8_t led_usb_state);
void            render_mod_status(uint8_t modifiers);
void            oled_driver_render_logo(void);
void            oled_driver_render_logo_left(void);
void            oled_driver_render_logo_right(void);

#if defined(OLED_DISPLAY_128X128) || defined(OLED_DISPLAY_128X64)
#    define OLED_DISPLAY_VERBOSE

#    define OLED_RENDER_LOCK_NAME         "Lock: "
#    define OLED_RENDER_LOCK_NUML         "NUM"
#    define OLED_RENDER_LOCK_CAPS         "CAPS"
#    define OLED_RENDER_LOCK_SCLK         "SCLK"

#    define OLED_RENDER_MODS_NAME         "Mods"
#    define OLED_RENDER_MODS_SFT          "Sft"
#    define OLED_RENDER_MODS_CTL          "Ctl"
#    define OLED_RENDER_MODS_ALT          "Alt"
#    define OLED_RENDER_MODS_GUI          "GUI"

#else

#    define OLED_RENDER_LOCK_NAME         "Lock:"
#    define OLED_RENDER_LOCK_NUML         "NumL"
#    define OLED_RENDER_LOCK_CAPS         "CapL"
#    define OLED_RENDER_LOCK_SCLK         "ScrL"

#    define OLED_RENDER_MODS_NAME         "Mods: "
#    define OLED_RENDER_MODS_SFT          "Shft"
#    define OLED_RENDER_MODS_CTL          "Ctrl"
#    define OLED_RENDER_MODS_ALT          "Alt\n"
#    define OLED_RENDER_MODS_GUI          "GUI\n"
#endif
