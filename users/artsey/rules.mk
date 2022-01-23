# Copyright (c) 2021 Mike "KemoNine" Crosson
# SPDX-License-Identifier: Apache-2.0

###########
# Fundamental Config
COMMAND_ENABLE = no
CONSOLE_ENABLE = no
EXTRAKEY_ENABLE = yes
MOUSEKEY_ENABLE = yes
NKRO_ENABLE = yes
SPACE_CADET_ENABLE = no
TERMINAL_ENABLE = no
VIA_ENABLE = no
ifneq ($(PLATFORM),CHIBIOS)
    ifneq ($(strip $(LTO_SUPPORTED)), no)
        LTO_ENABLE = yes
    endif
endif

###########
# ARTSEY Sources
SRC += artsey.c

###########
# Boards
ifeq ($(KEYBOARD), artsey/thepaintbrush)
	OLED_ENABLE = yes
    OLED_DRIVER = SSD1306
endif

###########
# OLED
ifeq ($(strip $(OLED_ENABLE)), yes)
	DEFERRED_EXEC_ENABLE = yes
	SRC += $(USER_PATH)/oled/oled.c
endif
