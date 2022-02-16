#include QMK_KEYBOARD_H


// Do not change QMK Layer BASE! This is your main keyboard.
// Make your QMK modifications to the later layers, to add 
// keys/customize on the first layer modify processQwerty():

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_faunch( KC_A,  KC_R,  KC_T,  KC_S, 
   												KC_E,  KC_Y,  KC_I,  KC_O)
};
