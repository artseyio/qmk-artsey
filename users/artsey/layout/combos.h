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
EIR_TGN,
TAY_TGM,
ORA_ESC,
AE_ENT,
OTRA_TAB,
SE_OSC,
SY_OSG,
SI_OSA,
STRE_OSS,
TI_EXLM,
RY_SL,
OIYE_SPC,
OIYA_CAPS,
RE_BSPC,
IR_DEL,
NAV_BASE,
MSE_BASE,
COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM ar_combo[] = {LT(PAR, KC_A),KC_R,  COMBO_END};
const uint16_t PROGMEM as_combo[] = {LT(PAR, KC_A),LT(NUM, KC_S), COMBO_END};
const uint16_t PROGMEM rt_combo[] = {KC_R, KC_T,  COMBO_END};
const uint16_t PROGMEM rs_combo[] = {KC_R, LT(NUM, KC_S), COMBO_END};
const uint16_t PROGMEM ts_combo[] = {KC_T, LT(NUM, KC_S), COMBO_END};
const uint16_t PROGMEM art_combo[] = {LT(PAR, KC_A),KC_R, KC_T,  COMBO_END};
const uint16_t PROGMEM ats_combo[] = {LT(PAR, KC_A),KC_T, LT(NUM, KC_S), COMBO_END};
const uint16_t PROGMEM rts_combo[] = {KC_R, KC_T, LT(NUM, KC_S), COMBO_END};
const uint16_t PROGMEM ey_combo[] = {LT(SYM, KC_E),KC_Y,  COMBO_END};
const uint16_t PROGMEM ei_combo[] = {LT(SYM, KC_E),KC_I,  COMBO_END};
const uint16_t PROGMEM eo_combo[] = {LT(SYM, KC_E),LT(CUS, KC_O), COMBO_END};
const uint16_t PROGMEM yi_combo[] = {KC_Y, KC_I,  COMBO_END};
const uint16_t PROGMEM yo_combo[] = {KC_Y, LT(CUS, KC_O), COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I, LT(CUS, KC_O), COMBO_END};
const uint16_t PROGMEM eyi_combo[] = {LT(SYM, KC_E),KC_Y, KC_I,  COMBO_END};
const uint16_t PROGMEM eio_combo[] = {LT(SYM, KC_E),KC_I, LT(CUS, KC_O), COMBO_END};
const uint16_t PROGMEM yio_combo[] = {KC_Y, KC_I, LT(CUS, KC_O), COMBO_END};
const uint16_t PROGMEM arts_combo[] = {LT(PAR, KC_A),KC_R, KC_T, LT(NUM, KC_S), COMBO_END};
const uint16_t PROGMEM ayi_combo[] = {LT(PAR, KC_A),KC_Y, KC_I,  COMBO_END};
const uint16_t PROGMEM ay_combo[] = {LT(PAR, KC_A),KC_Y,  COMBO_END};
const uint16_t PROGMEM ai_combo[] = {LT(PAR, KC_A),KC_I,  COMBO_END};
const uint16_t PROGMEM ao_combo[] = {LT(PAR, KC_A),LT(CUS, KC_O), COMBO_END};
const uint16_t PROGMEM eir_combo[] = {LT(SYM, KC_E),KC_I, KC_R,  COMBO_END};
const uint16_t PROGMEM tay_combo[] = {KC_T, LT(PAR, KC_A),KC_Y,  COMBO_END};
const uint16_t PROGMEM ora_combo[] = {LT(CUS, KC_O),KC_R, LT(PAR, KC_A), COMBO_END};
const uint16_t PROGMEM ae_combo[] = {LT(PAR, KC_A),LT(SYM, KC_E), COMBO_END};
const uint16_t PROGMEM otra_combo[] = {LT(CUS, KC_O),KC_T, KC_R, LT(PAR, KC_A), COMBO_END};
const uint16_t PROGMEM se_combo[] = {LT(NUM, KC_S),LT(SYM, KC_E), COMBO_END};
const uint16_t PROGMEM sy_combo[] = {LT(NUM, KC_S),KC_Y,  COMBO_END};
const uint16_t PROGMEM si_combo[] = {LT(NUM, KC_S),KC_I,  COMBO_END};
const uint16_t PROGMEM stre_combo[] = {LT(NUM, KC_S),KC_T, KC_R, LT(SYM, KC_E), COMBO_END};
const uint16_t PROGMEM ti_combo[] = {KC_T, KC_I,  COMBO_END};
const uint16_t PROGMEM ry_combo[] = {KC_R, KC_Y,  COMBO_END};
const uint16_t PROGMEM oiye_combo[] = {LT(CUS, KC_O),KC_I, KC_Y, LT(SYM, KC_E), COMBO_END};
const uint16_t PROGMEM oiya_combo[] = {LT(CUS, KC_O),KC_I, KC_Y, LT(PAR, KC_A), COMBO_END};
const uint16_t PROGMEM re_combo[] = {KC_R, LT(SYM, KC_E), COMBO_END};
const uint16_t PROGMEM ir_combo[] = {KC_I, KC_R,  COMBO_END};
const uint16_t PROGMEM nav_base_combo[] = {KC_LEFT, KC_UP, KC_RGHT, COMBO_END};
const uint16_t PROGMEM mse_base_combo[] = {KC_BTN2, KC_MS_D, KC_BTN1,  COMBO_END};

combo_t key_combos[COMBO_LENGTH] = {
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
[EIR_TGN] = COMBO(eir_combo, TG(NAV)),
[TAY_TGM] = COMBO(tay_combo, TG(MSE)),
[ORA_ESC] = COMBO(ora_combo, KC_ESC),
[AE_ENT] = COMBO(ae_combo, KC_ENT),
[OTRA_TAB] = COMBO(otra_combo, KC_TAB),
[SE_OSC] = COMBO(se_combo, OSM(MOD_LCTL)),
[SY_OSG] = COMBO(sy_combo, OSM(MOD_LGUI)),
[SI_OSA] = COMBO(si_combo, OSM(MOD_LALT)),
[STRE_OSS] = COMBO(stre_combo, OSM(MOD_LSFT)),
[TI_EXLM] = COMBO(ti_combo, KC_EXLM),
[RY_SL] = COMBO(ry_combo, KC_CAPS),
[OIYE_SPC] = COMBO(oiye_combo, KC_SPC),
[OIYA_CAPS] = COMBO(oiya_combo, KC_CAPS),
[RE_BSPC] = COMBO(re_combo, KC_BSPC),
[IR_DEL] = COMBO(ir_combo, KC_DEL),
[NAV_BASE] = COMBO(nav_base_combo, TG(BASE)),
[MSE_BASE] = COMBO(mse_base_combo, TG(BASE))
};
