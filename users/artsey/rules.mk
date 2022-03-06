# Copyright (c) 2021 Mike "KemoNine" Crosson
# SPDX-License-Identifier: Apache-2.0

###########
# Fundamental Config
COMBO_ENABLE = yes
COMMAND_ENABLE = no
CONSOLE_ENABLE = no
EXTRAKEY_ENABLE = yes
MOUSEKEY_ENABLE = yes
NKRO_ENABLE = yes
SPACE_CADET_ENABLE = no
TERMINAL_ENABLE = no
VIA_ENABLE = no
WPM_ENABLE = no
ENCODER_ENABLE = no
RGBLIGHT_ENABLE = no

##########
# Enable LTO if possible (graphics on avr mainly)
ifneq ($(PLATFORM),CHIBIOS)
    ifneq ($(strip $(LTO_SUPPORTED)), no)
        LTO_ENABLE = yes
    endif
endif

##########
# Fix for melmicro/older elite-c models
ifeq ($(strip $(SPLIT_USB_DETECT)), yes)
	SPLIT_USB_DETECT = yes
	OPT_DEFS += -DSPLIT_USB_DETECT
endif

##########
# Ristretto build fails w/o encdoder being enabld
ifeq ($(KEYBOARD), $(filter $(KEYBOARD), ristretto))
    ENCODER_ENABLE = yes
endif

##########
# Combo engine related
VPATH += keyboards/gboards/

###########
# ARTSEY Sources
SRC += artsey.c

##########
# Set size for all build steps
ifeq ($(strip $(ARTSEY_SIZE)), std)
	ARTSEY_SIZE_STD = yes
	OPT_DEFS += -DARTSEY_SIZE_STD
endif
ifeq ($(strip $(ARTSEY_SIZE)), big)
	ARTSEY_SIZE_BIG = yes
	OPT_DEFS += -DARTSEY_SIZE_BIG
endif
ifeq ($(strip $(ARTSEY_SIZE)), 40p)
	ARTSEY_SIZE_40P = yes
	OPT_DEFS += -DARTSEY_SIZE_40P
endif

##########
# Set handedness for all build steps
ifeq ($(strip $(ARTSEY_HAND)), left)
	ARTSEY_HAND_LEFT = yes
	OPT_DEFS += -DARTSEY_HAND_LEFT
endif
ifeq ($(strip $(ARTSEY_HAND)), right)
	ARTSEY_HAND_RIGHT = yes
	OPT_DEFS += -DARTSEY_HAND_RIGHT
endif

##########
# User tunable timings
# gergo (local /and/ remote build filters)
ifneq ($(KEYBOARD), $(filter $(KEYBOARD), gboards/gergo gergo))
ifndef TAPPING_TERM
	TAPPING_TERM = 175
endif
ifndef COMBO_TERM
	COMBO_TERM = 250
endif
OPT_DEFS += -DTAPPING_TERM=$(TAPPING_TERM) -DCOMBO_TERM=$(COMBO_TERM)
endif

##########
# Set remix for all build steps
ifeq ($(strip $(ARTSEY_40P_ANSI_BACKSPACE)), yes)
	ARTSEY_40P_ANSI_BACKSPACE = yes
	OPT_DEFS += -DARTSEY_40P_ANSI_BACKSPACE
endif
ifeq ($(strip $(ARTSEY_40P_ANSI_DELETE)), yes)
	ARTSEY_40P_ANSI_DELETE = yes
	OPT_DEFS += -DARTSEY_40P_ANSI_DELETE
endif
ifdef ONESHOT_TAP_TOGGLE
	OPT_DEFS += -DONESHOT_TAP_TOGGLE=$(ONESHOT_TAP_TOGGLE)
else
	OPT_DEFS += -DONESHOT_TAP_TOGGLE=5
endif
ifdef ONESHOT_TIMEOUT
	OPT_DEFS += -DONESHOT_TIMEOUT=$(ONESHOT_TIMEOUT)
else
	OPT_DEFS += -DONESHOT_TIMEOUT=1500
endif
ifdef ARTSEY_EXCLAMATION
	OPT_DEFS += -DARTSEY_EXCLAMATION=$(ARTSEY_EXCLAMATION)
else
	OPT_DEFS += -DARTSEY_EXCLAMATION=KC_EXLM
endif

##########
# Tap dance for 40% ARTSEY
ifeq ($(ARTSEY_SIZE_40P), yes)
	TAP_DANCE_ENABLE = yes
	SRC += layout/tap_dance.c
endif

##########
# 5 column flag for 40% ARTSEY
ifeq ($(KEYBOARD), $(filter $(KEYBOARD), draculad ferris/sweep maple_computing/minidox/rev1 boardsource/microdox))
	ARTSEY_FIVE_COLUMN = yes
	OPT_DEFS += -DARTSEY_FIVE_COLUMN
endif

##########
# 2 thumb flag
ifeq ($(KEYBOARD), $(filter $(KEYBOARD), ferris/sweep))
	ARTSEY_TWO_THUMB = yes
	OPT_DEFS += -DARTSEY_TWO_THUMB
endif

##########
# Pimoroni support
ifeq ($(ARTSEY_PIMORONI), yes)
	SRC += layout/pimoroni.c
	POINTING_DEVICE_ENABLE = yes
	POINTING_DEVICE_DRIVER = pimoroni_trackball
ifndef PIMORONI_BRIGHTNESS
	PIMORONI_BRIGHTNESS = 127
endif
ifndef PIMORONI_RGB
	PIMORONI_RGB 255,255,255
endif
	OPT_DEFS += -DPIMORONI_BRIGHTNESS=$(PIMORONI_BRIGHTNESS) -DPIMORONI_RGB=$(PIMORONI_RGB)
endif

##########
# OLED enable based on board support
ifndef OLED_ENABLE
ifeq ($(KEYBOARD), $(filter $(KEYBOARD), artsey/thepaintbrush crkbd/rev1 ristretto splitkb/kyria/rev2))
    OLED_ENABLE = yes
else
	OLED_ENABLE = no
endif
endif
ifeq ($(OLED_ENABLE), yes)
ifndef OLED_BRIGHTNESS
	OLED_BRIGHTNESS = 127
endif
ifndef ARTSEY_BOOT_LOGO_TIMEOUT
	ARTSEY_BOOT_LOGO_TIMEOUT = 2000
endif
ifndef ARTSEY_OLED_ICON
	ARTSEY_OLED_ICON = badslime_1
endif
	SRC += oled/oled.c
	OPT_DEFS += -DOLED_ENABLE -DOLED_BRIGHTNESS=$(OLED_BRIGHTNESS) -DARTSEY_BOOT_LOGO_TIMEOUT=$(ARTSEY_BOOT_LOGO_TIMEOUT) -DARTSEY_OLED_ICON=icon_$(ARTSEY_OLED_ICON)
ifeq ($(ARTSEY_BOOT_LOGO), no)
else
	OPT_DEFS += -DARTSEY_BOOT_LOGO
endif
ifeq ($(KEYBOARD), $(filter $(KEYBOARD), artsey/thepaintbrush crkbd/rev1 ristretto))
    OPT_DEFS += -DOLED_DRIVER=SSD1306
endif
endif
