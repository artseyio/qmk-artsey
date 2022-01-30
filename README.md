# QMK ARTSEY Implementation

This repo contains the [QMK](https://qmk.fm/) ARTSEY implementation and pre-built firmware for boards that have been setup to use ARTSEY by the core ARTSEY development team.

## Prebuilt Firmware

The `Releases` area of this repository contains the latest builds of the QMK ARTSEY implementation. You can click on the most recent release and download the appropriate artifact for your MCU + board combination.

### Firmware Files

The firmware files are auto built for a variety of common boards as well as community requested/supported boards. Our builds do *NOT* override default mcu/bootloader/architecture. Please mind this fact if you've tweaked your board in any way relative to the official QMK sources.

### Flashing

We recommend Windows and OSX users download the pre-built hex files and use [QMK Toolbox](https://github.com/qmk/qmk_toolbox). 

If you are on Linux, you'll need to use the `qmk flash` command with the same options as we use to compile. The compile options can be found in  `DEVELOPMENT.md` and are compatible with the `qmk flash` command. If there is an alternative thats easier to use, please let us know on Discord or GitHub Issue.

**We are NOT responsible for any failed firmware flashes!**

## Adding ARTSEY Support

See [DEVELOPMENT.md](DEVELOPMENT.md)

## Inspiraion

A lot of this work wouldn't be possible with outside inspiration. In no particular order:

- The ARTSEY community for their help ensuring our code is maximally accessible
- [filterpaper's QMK userspace](https://github.com/filterpaper/qmk_userspace)
- [sungo's QMK userspace](https://git.sr.ht/~sungo/qmk_userspace)

## Licensing

Unless otherwise stated all source code is licensed under the [Apache 2 License](LICENSE-APACHE-2.0.txt).

Unless otherwise stated the non source code contents of this repository are licensed under a [Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License](LICENSE-CC-Attribution-NonCommercial-ShareAlike-4.0-International.txt)
