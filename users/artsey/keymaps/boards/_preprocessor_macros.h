// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0
#pragma once

/*****************************************
 * Macros for filling in "&none" in the right places in the keymap for re-use needs
 *****************************************/
#define NONE0(X)
#define NONE1(X) X
#define NONE2(X) NONE1(X) X
#define NONE3(X) NONE2(X) X
#define NONE4(X) NONE3(X) X
#define NONE5(X) NONE4(X) X
#define NONE6(X) NONE5(X) X
#define NONE7(X) NONE6(X) X
#define NONE8(X) NONE7(X) X
#define NONE9(X) NONE8(X) X
#define NONE10(X) NONE9(X) X

#define NONE(HUNDREDS,TENS,ONES) \
  NONE##HUNDREDS(NONE10(NONE10(KC_NO))) \
  NONE##TENS(NONE10(KC_NO)) \
  NONE##ONES(KC_NO)
