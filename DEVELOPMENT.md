# Developing ARTSEY for QMK

## Work In Progress

The below is a work in progress. Don't be surprised if there are quirks in the information provided below. PRs are welcome.

## Compiling

``` sh
cd /qmk_firmware/users/artsey
# ARTSEY_SIZE is a required argument
# ARTSEY_HAND is a required argument
# ARTSEY_REMIX is an optional argument to tell us you have customizations to include
# ARTSEY_OLED_BOOT_LOGO is an optional argument. default: yes
# ARTSEY_BOOT_LOGO_TIMEOUT is an optional timeout in miliseconds. default: 2000
# ARTSEY_OLED_ICON is an optional icon to show on the status pages. default: badslime_1
# ARTSEY_PIMORONI is an option to turn on Pimoroni mini trackball support. default: no
# OLED_ENABLE turn on/off oled. default yes if main keybord project supports oled
# OLED_BRIGHTNESS the brightness of the oled at startup if no user values set. default: 127 (50% brightness)
# ARTSEY_40P_ANSI_BACKSPACE enable or disable backspace on ansi 40% layer. default: off ; is a common letter combo that will be an issue for fast typists
# ARTSEY_40P_ANSI_DELETE enable or disable delete on ansi 40% layer. default: off ; is a common letter combo that will be an issue for fast typists
# PIMORONI_BRIGHTNESS the brightness of the pimoroni trackball at startup if no user values set. default: 127 (50% brightness)
# PIMORONI_RGBW the rgb code for the pimoroni trackball at startup if no user values set. default: 255,255,255 (white)
# TAPPING_TERM the timeout for tap dances (40% artsey only). in miliseconds ; default: 200
# COMBO_TERM the timeout for combos (all artsey variations). in miliseconds ; default 300
qmk -v compile -e ARTSEY_SIZE=[std|big|40p] \
               -e ARTSEY_HAND=[left|right] \
               -e ARTSEY_REMIX=[yes|no] \
               -e ARTSEY_OLED_BOOT_LOGO=[yes|no] \
               -e ARTSEY_BOOT_LOGO_TIMEOUT=[ms] \
               -e ARTSEY_OLED_ICON=[badslime_1|badslime_2] \
               -e ARTSEY_PIMORONI=[yes|no] \
               -e ARTSEY_40P_ANSI_BACKSPACE=[yes|no] \
               -e ARTSEY_40P_ANSI_DELETE=[yes|no] \
               -e OLED_ENABLE=[yes|no] \
               -e OLED_BRIGHTNESS=[0...255] \
               -e PIMORONI_BRIGHTNESS=[0...255] \
               -e PIMORONI_RGB="255,255,255" \
               -e TAPPING_TERM=200 \
               -e COMBO_TERM=300 \
       layout/[board.json]
```

### KemoNine Builds

```
root@d8949d0fe972:/qmk_firmware/users/artsey# 
# Corne (6 column) 40%
rm -rf ../../.build/* && qmk -v compile \
    -e OLED_BRIGHTNESS=64 \
    -e PIMORONI_BRIGHTNESS=7 \
    -e PIMORONI_RGB="255,165,0" \
    -e ARTSEY_PIMORONI=no \
    -e ARTSEY_EXCLAMATION=KC_SCLN \
    -e ARTSEY_SIZE=40p \
    -e ARTSEY_HAND=left \
    layout/crkbd_rev1_40p.json

# The Paintbrush
rm -rf ../../.build/* && qmk -v compile \
    -e OLED_BRIGHTNESS=64 \
    -e ARTSEY_EXCLAMATION=KC_SCLN \
    -e ARTSEY_SIZE=std \
    -e ARTSEY_HAND=left \
    layout/artsey_thepaintbrush.json
```

## Minidox

```
# 40%
rm -rf ../../.build/* && qmk -v compile \
    -e ARTSEY_SIZE=40p \
    -e ARTSEY_HAND=left \
    layout/minidox_rev1_40p.json
    
# Big
rm -rf ../../.build/* && qmk -v compile \
    -e ARTSEY_SIZE=big \
    -e ARTSEY_HAND=left \
    layout/minidox_rev1.json
```

## Remixing

Start with `layouts/_layout.h` and follow the code from there.

### Combos

Per the docs at [http://combos.gboards.ca/docs/combos/](http://combos.gboards.ca/docs/combos/):

```
inject.h

Sometimes when you’re deep in combo shenanigans you need access to process_combo_event() that this decorator wraps. If you need to put something in there manually for debugging purposes or otherwise, create a file inject.h in your keymap directory. If this file exists all code in it will be inserted into process_combo_event()` after the decorator stuff.
```

Also see [http://combos.gboards.ca/docs/combos/](http://combos.gboards.ca/docs/manage/)

## Visual Studio Code

This repo is setup to allow doing local development using the `Dev Containers` features. If you're familiar with these features they should generally 'Just Work'.

## Docker

### Run

``` sh
# PowerShell
#     Use ` instead of \
#     Use ${PWD} instead of $(pwd)
docker run --rm -it `
  -v qmk_firmware:/qmk_firmware `
  -v $(pwd)/.build:/qmk_firmware/.build `
  -v $(pwd)/users/artsey:/qmk_firmware/users/artsey `
  qmkfm/qmk_cli /bin/bash
 ```

### Update / Clone Sources

``` sh
# PowerShell
#     Use ` instead of \
docker run --rm -it \
  -v qmk_firmware:/qmk_firmware \
  qmkfm/qmk_cli /bin/bash

cd /qmk_firmware
if [ -d .git ]; 
then 
git pull; 
else 
git clone https://github.com/qmk/qmk_firmware.git .; 
fi
mkdir /qmk_firmware/keyboards/artsey
cd /qmk_firmware/keyboards/artsey
if [ -d thepaintbrush ];
then
cd thepaintbrush;
git pull;
else
git clone https://github.com/artseyio/thepaintbrush.git
fi
```

### Volumes

#### QMK Sources

`qmkfm/qmk_cli` lacks sources. Use named volume to speed dev and output

#### ARTSEY

Need to have the `qmk/users/artsey` directory mounted at `/qmk_firmware/users/artsey` in Docker container

#### Build output

Need to have a local dir for build artifact extraction at `/qmk_firmware/.build`
