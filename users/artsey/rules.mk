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

##########
# Enable LTO if possible (graphics on avr mainly)
ifneq ($(PLATFORM),CHIBIOS)
    ifneq ($(strip $(LTO_SUPPORTED)), no)
        LTO_ENABLE = yes
    endif
endif

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
# Pimoroni support
ifeq ($(KEYBOARD), $(filter $(KEYBOARD), crkbd/rev1 draculad))
	POINTING_DEVICE_ENABLE = yes
	POINTING_DEVICE_DRIVER = pimoroni_trackball
endif

##########
# OLED enable based on board support
ifeq ($(KEYBOARD), $(filter $(KEYBOARD), artsey/thepaintbrush crkbd/rev1 ristretto))
    OLED_ENABLE = yes
    OPT_DEFS += -DOLED_ENABLE -DOLED_DRIVER=SSD1306
endif
ifeq ($(OLED_ENABLE), yes)
ifndef ARTSEY_BOOT_LOGO_TIMEOUT
	ARTSEY_BOOT_LOGO_TIMEOUT = 2000
endif
ifndef ARTSEY_OLED_ICON
	ARTSEY_OLED_ICON = badslime_1
endif
	SRC += oled/oled.c
	OPT_DEFS += -DARTSEY_BOOT_LOGO_TIMEOUT=$(ARTSEY_BOOT_LOGO_TIMEOUT) -DARTSEY_OLED_ICON=icon_$(ARTSEY_OLED_ICON)
ifeq ($(ARTSEY_BOOT_LOGO), no)
else
	OPT_DEFS += -DARTSEY_BOOT_LOGO
endif
endif
