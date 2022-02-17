// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0

#include QMK_KEYBOARD_H
#include "tap_dance.h"
#include "layer_names.h"

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_SLSH_BK_FW] = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_BSLS),
    [TD_AT_EQUAL] = ACTION_TAP_DANCE_DOUBLE(KC_EQUAL, KC_AT),
    [TD_ARTSEY_LEFT] = ACTION_TAP_DANCE_LAYER_MOVE(KC_T, LAYER_ID_BASE),
    [TD_ARTSEY_RIGHT] = ACTION_TAP_DANCE_LAYER_MOVE(KC_Y, LAYER_ID_BASE),
    [TD_40P] = ACTION_TAP_DANCE_LAYER_MOVE(KC_MINUS, LAYER_ID_40P_BASE),
};
