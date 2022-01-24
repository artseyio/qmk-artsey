# Copyright (c) 2021 Mike "KemoNine" Crosson
# SPDX-License-Identifier: Apache-2.0

###########
# Fundamental Config
COMBO_ENABLE = yes
COMBO_ENABLE = no
COMMAND_ENABLE = no
CONSOLE_ENABLE = no
EXTRAKEY_ENABLE = yes
MOUSEKEY_ENABLE = yes
NKRO_ENABLE = yes
SPACE_CADET_ENABLE = no
TERMINAL_ENABLE = no
VIA_ENABLE = no
LTO_ENABLE = no # We support arm qmk devices so disable this

###########
# ARTSEY Sources
SRC += artsey.c
VPATH += $(USER_PATH)/oled

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
ifeq ($(KEYBOARD), $(filter $(KEYBOARD), crkbd/rev1))
	POINTING_DEVICE_ENABLE = yes
	POINTING_DEVICE_DRIVER = pimoroni_trackball
endif

##########
# OLED enable based on board support
ifeq ($(KEYBOARD), $(filter $(KEYBOARD), artsey/thepaintbrush crkbd/rev1))
    OLED_ENABLE = yes
    OPT_DEFS += -DOLED_ENABLE -DOLED_DRIVER=SSD1306
	SRC += oled-icons.c oled-bongocat.c
endif

##########
# Select right/left bongocat based on handedness
ifeq ($(strip $(OLED_ENABLE)), yes)
	ifeq ($(strip $(ARTSEY_HAND)), left)
		OPT_DEFS += -DLEFTCAT
	endif
	ifeq ($(strip $(ARTSEY_HAND)), right)
		OPT_DEFS += -DRIGHTCAT
	endif
endif
