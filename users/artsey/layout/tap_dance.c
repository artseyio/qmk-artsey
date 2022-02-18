// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0
#include QMK_KEYBOARD_H
#include "tap_dance.h"
#include "layer_names.h"

// //////////////////
// Config/setup/stubs

void dance_artsey_left_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_artsey_left_reset(qk_tap_dance_state_t *state, void *user_data);
void dance_artsey_right_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_artsey_right_reset(qk_tap_dance_state_t *state, void *user_data);
void dance_40p_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_40p_reset(qk_tap_dance_state_t *state, void *user_data);

static uint8_t td_state;

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_SLSH_BK_FW] = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_BSLS),
    [TD_AT_EQUAL] = ACTION_TAP_DANCE_DOUBLE(KC_EQUAL, KC_AT),
    // Only call these on finish/reset as thats the only time tap dance results should fire
    [TD_ARTSEY_LEFT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_artsey_left_finished, dance_artsey_left_reset),
    [TD_ARTSEY_RIGHT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_artsey_right_finished, dance_artsey_right_reset),
    [TD_40P] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_40p_finished, dance_40p_reset),
};

// Determine the tapdance state to return
int dance_current(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return TD_SINGLE_TAP;
        else return TD_SINGLE_HOLD;
    }

    if (state->count == 2) return TD_DOUBLE_SINGLE_TAP;
    if (state->count == 3) return TD_TRIPLE_SINGLE_TAP;
    if (state->count > 3) return TD_MULTI_SINGLE_TAP;
    else return TD_UNKNOWN; // Any number higher than the maximum state value you return above
}

// ///////////////////
// Full implementation

void dance_artsey_left_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = dance_current(state);
    switch (td_state) {
        case TD_SINGLE_TAP:
        case TD_DOUBLE_SINGLE_TAP:
        case TD_TRIPLE_SINGLE_TAP:
        case TD_MULTI_SINGLE_TAP:
            for (uint8_t i=1; i<state->count; i++) {
                tap_code(KC_T);
            }
            register_code(KC_T);
            break;
        case TD_SINGLE_HOLD:
            layer_move(LAYER_ID_BASE);
            break;
        default:
            break;
    }
}

void dance_artsey_left_reset(qk_tap_dance_state_t *state, void *user_data) {
    td_state = dance_current(state);
    switch (td_state) {
        case TD_SINGLE_TAP:
        case TD_DOUBLE_SINGLE_TAP:
        case TD_TRIPLE_SINGLE_TAP:
        case TD_MULTI_SINGLE_TAP:
            unregister_code(KC_T);
            break;
        default:
            break;
    }
}

void dance_artsey_right_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = dance_current(state);
    switch (td_state) {
        case TD_SINGLE_TAP:
        case TD_DOUBLE_SINGLE_TAP:
        case TD_TRIPLE_SINGLE_TAP:
        case TD_MULTI_SINGLE_TAP:
            for (uint8_t i=1; i<state->count; i++) {
                tap_code(KC_Y);
            }
            register_code(KC_Y);
            break;
        case TD_SINGLE_HOLD:
            layer_move(LAYER_ID_BASE);
            break;
        default:
            break;
    }
}

void dance_artsey_right_reset(qk_tap_dance_state_t *state, void *user_data) {
    td_state = dance_current(state);
    switch (td_state) {
        case TD_SINGLE_TAP:
        case TD_DOUBLE_SINGLE_TAP:
        case TD_TRIPLE_SINGLE_TAP:
        case TD_MULTI_SINGLE_TAP:
            unregister_code(KC_Y);
            break;
        default:
            break;
    }
}

void dance_40p_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = dance_current(state);
    switch (td_state) {
        case TD_SINGLE_TAP:
        case TD_DOUBLE_SINGLE_TAP:
        case TD_TRIPLE_SINGLE_TAP:
        case TD_MULTI_SINGLE_TAP:
            for (uint8_t i=1; i<state->count; i++) {
                tap_code(KC_MINUS);
            }
            tap_code(KC_MINUS);
            break;
        case TD_SINGLE_HOLD:
            layer_move(LAYER_ID_40P_BASE);
            break;
        default:
            break;
    }
}

void dance_40p_reset(qk_tap_dance_state_t *state, void *user_data) {
    td_state = dance_current(state);
    switch (td_state) {
        case TD_SINGLE_TAP:
        case TD_DOUBLE_SINGLE_TAP:
        case TD_TRIPLE_SINGLE_TAP:
        case TD_MULTI_SINGLE_TAP:
            unregister_code(KC_MINUS);
            break;
        default:
            break;
    }
}
