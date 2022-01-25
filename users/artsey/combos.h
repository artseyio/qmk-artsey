#pragma once
enum combos {
  AR_F,
  AS_W,
  RT_G,
  RS_V,
  TS_J,
  ART_D,
  ATS_Q,
  RTS_X,
  EY_C,
  EI_H,
  EO_B,
  YI_U,
  YO_K,
  IO_N,
  EYI_L,
  EIO_P,
  YIO_M,
  ARTS_Z,
  AYI_QUOT,
  AY_COMM,
  AI_DOT,
  AO_SLSH,
  COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM ar_combo[] = {KC_A, KC_R, COMBO_END};
const uint16_t PROGMEM as_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM rt_combo[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM rs_combo[] = {KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM ts_combo[] = {KC_T, KC_S, COMBO_END};
const uint16_t PROGMEM art_combo[] = {KC_A, KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM ats_combo[] = {KC_A, KC_T, KC_S, COMBO_END};
const uint16_t PROGMEM rts_combo[] = {KC_R, KC_T, KC_S, COMBO_END};
const uint16_t PROGMEM ey_combo[] = {KC_E, KC_Y, COMBO_END};
const uint16_t PROGMEM ei_combo[] = {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM eo_combo[] = {KC_E, KC_O, COMBO_END};
const uint16_t PROGMEM yi_combo[] = {KC_Y, KC_I, COMBO_END};
const uint16_t PROGMEM yo_combo[] = {KC_Y, KC_O, COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM eyi_combo[] = {KC_E, KC_Y, KC_I, COMBO_END};
const uint16_t PROGMEM eio_combo[] = {KC_E, KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM yio_combo[] = {KC_Y, KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM arts_combo[] = {KC_A, KC_R, KC_T, KC_S, COMBO_END};
const uint16_t PROGMEM ayi_combo[] = {KC_A, KC_Y, KC_I, COMBO_END};
const uint16_t PROGMEM ay_combo[] = {KC_A, KC_Y, COMBO_END};
const uint16_t PROGMEM ai_combo[] = {KC_A, KC_I, COMBO_END};
const uint16_t PROGMEM ao_combo[] = {KC_A, KC_O, COMBO_END};

combo_t key_combos[23] = {
    [AR_F] = COMBO(ar_combo, KC_F),
    [AS_W] = COMBO(as_combo, KC_W),
    [RT_G] = COMBO(rt_combo, KC_G),
    [RS_V] = COMBO(rs_combo, KC_V),
    [TS_J] = COMBO(ts_combo, KC_J),
    [ART_D] = COMBO(art_combo, KC_D),
    [ATS_Q] = COMBO(ats_combo, KC_Q),
    [RTS_X] = COMBO(rts_combo, KC_X),
    [EY_C] = COMBO(ey_combo, KC_C),
    [EI_H] = COMBO(ei_combo, KC_H),
    [EO_B] = COMBO(eo_combo, KC_B),
    [YI_U] = COMBO(yi_combo, KC_U),
    [YO_K] = COMBO(yo_combo, KC_K),
    [IO_N] = COMBO(io_combo, KC_N),
    [EYI_L] = COMBO(eyi_combo, KC_L),
    [EIO_P] = COMBO(eio_combo, KC_P),
    [YIO_M] = COMBO(yio_combo, KC_M),
    [ARTS_Z] = COMBO(arts_combo, KC_Z),
    [AYI_QUOT] = COMBO(ayi_combo, KC_QUOT),
    [AY_COMM] = COMBO(ay_combo, KC_COMM),
    [AI_DOT] = COMBO(ai_combo, KC_DOT),
    [AO_SLSH] = COMBO(ao_combo, KC_SLSH),
};
