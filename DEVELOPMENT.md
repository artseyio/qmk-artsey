# Developing ARTSEY for QMK

## Work In Progress

The below is a work in progress. Don't be surprised if there are major changes during early development phases.

## Compiling

``` sh
cd /qmk_firmware/users/artsey
qmk -v compile -e ARTSEY_HAND=[left|right] keymaps/thepaintbrush.json
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
