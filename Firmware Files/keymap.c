// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


enum layers {
  _ART_BASE,
  _ART_NUM,
  _ART_CUS,
  _ART_PUNC,
  _ART_MOU,
  _ART_NAV,
  _ART_SYM,
};

#include "aliases.c"
#include "combos.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_ART_BASE] = LAYOUT_ortho_2x4(
BASE_1_1,BASE_1_2,BASE_1_3,BASE_1_4,
BASE_2_1,BASE_2_2,BASE_2_3,BASE_2_4
),

[_ART_NUM] = LAYOUT_ortho_2x4(
NAV_1_1,NAV_1_2,NAV_1_3,NAV_1_4,
NAV_2_1,NAV_2_2,NAV_2_3,NAV_2_4
),


[_ART_PUNC] = LAYOUT_ortho_2x4(
PUNC_1_1,PUNC_1_2,PUNC_1_3,PUNC_1_4,
PUNC_2_1,PUNC_2_2,PUNC_2_3,PUNC_2_4
),

[_ART_CUS] = LAYOUT_ortho_2x4(
CUS_1_1,CUS_1_2,CUS_1_3,CUS_1_4,
CUS_2_1,CUS_2_2,CUS_2_3,CUS_2_4
),

[_ART_SYM] = LAYOUT_ortho_2x4(
SYM_1_1,SYM_1_2,SYM_1_3,SYM_1_4,
SYM_2_1,SYM_2_2,SYM_2_3,SYM_2_4
),

[_ART_MOU] = LAYOUT_ortho_2x4(
MOU_1_1,MOU_1_2,MOU_1_3,MOU_1_4,
MOU_2_1,MOU_2_2,MOU_2_3,MOU_2_4
),

[_ART_NAV] = LAYOUT_ortho_2x4(
NAV_1_1,NAV_1_2,NAV_1_3,NAV_1_4,
NAV_2_1,NAV_2_2,NAV_2_3,NAV_2_4
),
};
