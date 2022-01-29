// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0
#pragma once

uint8_t white = 0;
uint8_t red   = 255;
uint8_t green = 0;
uint8_t blue  = 0;

bool           set_scrolling = false;
report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    if (set_scrolling) {
        mouse_report.h = mouse_report.x;
        mouse_report.v = mouse_report.y;
        mouse_report.x = mouse_report.y = 0;
    }
    return mouse_report;
}

void ball_increase_hue(void) {
    if (red != 255 && green != 255 && blue != 255) {
        red = 255;
    }
    if (red == 255 && green < 255 && blue == 0) {
        green += 15;
    } else if (green == 255 && blue == 0 && red > 0) {
        red -= 15;
    } else if (red == 0 && blue < 255 && green == 255) {
        blue += 15;
    } else if (blue == 255 && green > 0 && red == 0) {
        green -= 15;
    } else if (green == 0 && blue == 255 && red < 255) {
        red += 15;
    } else if (green == 0 && blue > 0 && red == 255) {
        blue -= 15;
    }
    pimoroni_trackball_set_rgbw(red, green, blue, white);
}

void decrease_color(void) {
    if (green > 0) {
        green -= 15;
    }
    if (red > 0) {
        red -= 15;
    }
    if (blue > 0) {
        blue -= 15;
    }
    pimoroni_trackball_set_rgbw(red, green, blue, white);
}

void cycle_white(void) {
    if (white < 255) {
        white += 15;
    } else {
        white = 0;
    }
    pimoroni_trackball_set_rgbw(red, green, blue, white);
}
