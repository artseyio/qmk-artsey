# Copyright (c) 2021 Mike "KemoNine" Crosson
# SPDX-License-Identifier: Apache-2.0

COMMAND_ENABLE = no
CONSOLE_ENABLE = no
EXTRAKEY_ENABLE = yes
MOUSEKEY_ENABLE = yes
NKRO_ENABLE = yes
SPACE_CADET_ENABLE = no
TERMINAL_ENABLE = no
VIA_ENABLE = no
LTO_ENABLE = no # We support arm qmk devices which are incompatabl with this avr specific option

# Work around limitation with userland and the way we have 'dynamic' direct wiring
#     This *should* live in config.h but KemoNine can't figure out how to check which keymap is in use at that level
PINS_HAND_LEFT = -DDIRECT_PINS="{ { F7, F6, F5, F4 }, { B6, B2, B3, B1 } }"
PINS_HAND_RIGHT = -DDIRECT_PINS="{ { F4, F5, F6, F7 }, { B1, B3, B2, B6 } }"
ifeq ($(KEYBOARD), artsey/thepaintbrush)
	ifeq ($(KEYMAP), left)
		OPT_DEFS += $(PINS_HAND_LEFT)
	endif
	ifeq ($(strip $(ARTSEY_HAND)), left)
	   OPT_DEFS += $(PINS_HAND_LEFT)
	endif

	ifeq ($(KEYMAP), right)
		OPT_DEFS += $(PINS_HAND_RIGHT)
	endif
	ifeq ($(strip $(ARTSEY_HAND)), right)
	   OPT_DEFS += $(PINS_HAND_RIGHT)
	endif
endif
