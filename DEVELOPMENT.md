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
qmk -v compile -e ARTSEY_SIZE=[std|big|40p] \
               -e ARTSEY_HAND=[left|right] \
               -e ARTSEY_REMIX=[yes|no] \
               -e ARTSEY_OLED_BOOT_LOGO=[yes|no] \
               -e ARTSEY_BOOT_LOGO_TIMEOUT=[ms] \
               -e ARTSEY_OLED_ICON=[badslime_1|badslime_2]
               -e ARTSEY_PIMORONI=[yes|no]
       layout/[board.json]
```

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
