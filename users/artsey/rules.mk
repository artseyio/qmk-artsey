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
# Set handedness for all build steps to avoid duplicate info in json files
ifeq ($(strip $(ARTSEY_HAND)), left)
OPT_DEFS += -DARTSEY_HAND_LEFT
endif
ifeq ($(strip $(ARTSEY_HAND)), rigit)
OPT_DEFS += -DARTSEY_HAND_RIGHT
endif

##########
# OLED enable based on board support
ifeq ($(strip $(KEYBOARD)), artsey/thepaintbrush)
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
