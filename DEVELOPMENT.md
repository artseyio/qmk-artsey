# Developing ARTSEY for QMK

## Work In Progress

The below is a work in progress. Don't be surprised if there are quirks in the information provided below. PRs are welcome.

## Compiling

### You must run `qmk setup` for any builds to work!!!!

If your qmk_firmware repository is NOT located under ~/qmk_firmware, you may encounter qmk build issue.  In such case, try moving the repository or adding a symlink, then retry compiling.

``` sh
ln -s your_path_to_repos/qmk_firmware ~/qmk_firmware
```

If these commands don't work, please ensure you've completed all steps per the QMK docs.

``` sh
cd /qmk_firmware/users/artsey
# ARTSEY_SIZE is a required argument
# ARTSEY_HAND is a required argument
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
# TAPPING_TERM the timeout for tap dances (40% artsey only). in miliseconds ; default: 175
#     this is DISABLED for the gergo due to the gergo forcing a 200ms duration per the main keyboard/config.h file
# COMBO_TERM the timeout for combos (all artsey variations). in miliseconds ; default 250
# ONESHOT_TAP_TOGGLE the number of times to tap to toggle a one shot key ; default 5
# ONESHOT_TIMEOUT the length of time a one shot key is active for. in miliseconds ; default 1500
# ENCODER_ENABLE whether or not to include encoder support. default: no ; uses just over 1k of rom space which is quite large
# RGBLIGHT_ENABLE whether or not to turn on some underglow features. default: no ; uses a TON of rom space and we need a lot for 40% artsey to work
# SPLIT_USB_DETECT use this option (see kemo builds) when using an unmodified miranda or old elite-c
qmk -v compile -e ARTSEY_SIZE=[std|big|40p] \
               -e ARTSEY_HAND=[left|right] \
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
               -e TAPPING_TERM=175 \
               -e COMBO_TERM=250 \
               -e ONESHOT_TAP_TOGGLE=5 \
               -e ONESHOT_TIMEOUT=1500 \
               -e ENCODER_ENABLE=[yes|no] \
               -e RGBLIGHT_ENABLE=[yes|no] \
       layout/[board.json]
```

#### MelMicro

An unmodified MelMicro and some knock off ProMicro boards require `-e SPLIT_USB_DETECT=yes` in order to function properly with 40% ARTSEY and QMK.

### KemoNine Builds

```
root@d8949d0fe972:/qmk_firmware/users/artsey# 
# Corne (6 column) 40%
rm -rf ../../.build/* && qmk -v compile \
    -e SPLIT_USB_DETECT=yes \
    -e OLED_BRIGHTNESS=64 \
    -e PIMORONI_BRIGHTNESS=7 \
    -e PIMORONI_RGB="255,165,0" \
    -e ARTSEY_PIMORONI=no \
    -e ARTSEY_EXCLAMATION=KC_SCLN \
    -e ARTSEY_SIZE=40p \
    -e ARTSEY_HAND=left \
    -e TAPPING_TERM=200 \
    layout/crkbd_rev1_40p.json

# The Paintbrush
rm -rf ../../.build/* && qmk -v compile \
    -e OLED_BRIGHTNESS=64 \
    -e ARTSEY_EXCLAMATION=KC_SCLN \
    -e ARTSEY_SIZE=std \
    -e ARTSEY_HAND=left \
    -e TAPPING_TERM=200 \
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

## Microdox

```
# 40%
rm -rf ../../.build/* && qmk -v compile \
    -e ARTSEY_SIZE=40p \
    -e ARTSEY_HAND=left \
    layout/boardsource_microdox_40p.json
    
# Big
rm -rf ../../.build/* && qmk -v compile \
    -e ARTSEY_SIZE=big \
    -e ARTSEY_HAND=left \
    layout/boardsource_microdox.json
```

## Soyuz

```
# Standard
rm -rf ../../.build/* && qmk -v compile \
    -e ARTSEY_SIZE=std \
    -e ARTSEY_HAND=left \
    layout/ai03_soyuz.json
```

## Geekboards Macropad

```
rm -rf ../../.build/* && qmk -v compile \
    -e ARTSEY_SIZE=std \
    -e ARTSEY_HAND=left \
    layout/geekboards_macropad_v2.json
```

## Kyria rev2

```
# 40%
rm -rf ../../.build/* && qmk -v compile \
    -e ARTSEY_SIZE=40p \
    -e ARTSEY_HAND=left \
    layout/splitkb_kyria_rev2_40p.json
    
# Big
rm -rf ../../.build/* && qmk -v compile \
    -e ARTSEY_SIZE=big \
    -e ARTSEY_HAND=left \
    layout/splitkb_kyria_rev2.json
## Geekboards Macropad v2

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

cd ~/qmk_firmware
if [ -d ~/qmk_firmware/.git ]; 
then 
    cd ~/qmk_firmware;
    git pull; 
else 
    git clone https://github.com/qmk/qmk_firmware.git ~/qmk_firmware/; 
fi
if [ ! -d ~/qmk_firmware/keyboards/artsey ];
then
    ln -s "~/qmk-artsey/keyboards/artsey" ~/qmk_firmware/keyboards/artsey;
    echo "Created keyboards/artsey symlink";
fi
if [ ! -d ~/qmk_firmware/keyboards/faunchpad ];
then
    ln -s "~/qmk_gboards/keyboards/faunchpad" ~/qmk_firmware/keyboards/faunchpad;
    echo "Created keyboards/faunchpad symlink";
fi
if [ ! -d ~/qmk_firmware/users/artsey ];
then
    ln -s "~/qmk-artsey/users/artsey" ~/qmk_firmware/users/artsey;
    echo "Created users/artsey symlink";
fi
qmk setup -y;
```

### Volumes

#### QMK Sources

`qmkfm/qmk_cli` lacks sources. Use named volume to speed dev and output

#### ARTSEY

Need to have the `qmk/users/artsey` directory mounted at `/qmk_firmware/users/artsey` in Docker container

#### Build output

Need to have a local dir for build artifact extraction at `/qmk_firmware/.build`
