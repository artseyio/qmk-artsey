# Setting up ARTSEY on your Keyboard

From the `Firmware Files` folder in this repository, pick your flavor of artsey and download the files in that folder. Each folder contains `combos.c` which is the main file you will need to add ARTSEY to your keyboard. Each folder also contains a `keymaps` subfolder with a sample keymap for that flavor. Finally, each folder contains `combos.txt`, `key.txt`, and `processor.R` which will allow you to modify or extend ARTSEY.

## Put combos.c in `\qmk_firmware\keyboards\your_board` folder.

`combos.c` is the only file you will need from this repository unless you want to extend ARTSEY. 

## Enable Combos

Ensure the following line appears somehwere in `rules.mk`:
`COMBO_ENABLE = yes`

## Enumerate layers and include combos.c

In your `keymap.c` in the keymaps folder, add the following below the line `#include QMK_KEYBOARD_H`:

```
enum layers {
  _ART_BASE,
  _ART_NUM,
  _ART_CUS,
  _ART_PUNC,
  _ART_MOU,
  _ART_NAV,
  _ART_SYM,
};

#include "combos.c"
```

*Note that if you are adding artey to another keyboard, add these seven layers to the other layers you have enumerated.*

## Create keymap. 

Use the following template to create your keymap. Note, you will need to update `LAYOUT_ortho_2x4` to whatever your layout name is. If you are making a dedicated 2x4 artsey board, you can duplicate the keymap below. If you are using an larger board, or adding ARTSEY to another board, make sure you have at least the keys outlined below in each respective layer. 

You can use the example keymaps in this repository to get strated, but here is a sample for right handed basic ARTSEY. 

```
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_ART_BASE] = LAYOUT_ortho_2x4(
LT(_ART_SYM,KC_A),KC_R,KC_T,LT(_ART_NUM,KC_S),
LT(_ART_PUNC,KC_E),KC_Y,KC_I,LT(_ART_CUS,KC_O)
),

[_ART_NUM] = LAYOUT_ortho_2x4(
KC_1,KC_2,KC_3,KC_TRNS,
KC_4,KC_5,KC_6,KC_TRNS
),


[_ART_PUNC] = LAYOUT_ortho_2x4(
KC_EXLM,KC_BSLS,KC_SCLN,KC_GRV,
KC_TRNS,KC_QUES,KC_MINS,KC_EQL
),

[_ART_CUS] = LAYOUT_ortho_2x4(
KC_MPLY,KC_MUTE,KC_KB_VOLUME_UP,KC_TRNS,
KC_MPRV,KC_MNXT,KC_KB_VOLUME_DOWN,KC_TRNS
),

[_ART_SYM] = LAYOUT_ortho_2x4(
KC_TRNS,KC_LPRN,KC_RPRN,KC_LCBR,
KC_TRNS,KC_LBRC,KC_RBRC,KC_RCBR
),

[_ART_MOU] = LAYOUT_ortho_2x4(
KC_BTN1,KC_MS_U,KC_BTN2,KC_WH_U,
KC_MS_L,KC_MS_D,KC_MS_R,KC_WH_D
),

[_ART_NAV] = LAYOUT_ortho_2x4(
KC_HOME,KC_UP,KC_END,KC_PGUP,
KC_LEFT,KC_DOWN,KC_RIGHT,KC_PGDN
),
};
```

## Done

**You are ready to build your firmware`!**

## Extend or edit ARTSEY

If you want to extend or edit artsey, modify combos.txt. The entries in this file look like this: 

`artsey_f||SEND_STRING("f")||ARTSEY_A,ARTSEY_R||_ART_BASE`

Note the line has 4 entries separated by double pipes `||`. Here is the description of each entry. 

1. The name of the combo. It must be unique.
2. The action for qmk to take when the combo is pressed. Here: sending the "f" key.
3. What keys make up the combo. These keys can be short-hand for the actual keycode used in your keymap as laid out in `key.txt` (more on this below). 
4. What layer the combo is active on. Here: the `_ART_BASE` layer (ARTSEY BASE).

They `key.txt` file has entries that look like this:

`ARTSEY_A|LT(_ART_SYM,KC_A)`

Note the line has 2 entries separated by double pipes `||`. Here is the description of each entry. 

1. The shorthand name you will use for the key in `combos.txt`.
2. The actual keycode in your keymap.

Once you are done editing `combos.txt`, run `Rscript procressor.R` to generate a new `combos.c` file, then rebuild your firmware. To run this you will need to download and install **R**. [R Language](https://www.r-project.org/about.html).

## Licensing

- Unless otherwise stated all source code is licensed under the Apache 2 License.

- Unless otherwise stated the non source code contents of this repository are licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License

