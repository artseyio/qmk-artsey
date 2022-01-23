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
ifneq ($(PLATFORM),CHIBIOS)
    ifneq ($(strip $(LTO_SUPPORTED)), no)
        LTO_ENABLE = yes
    endif
endif


# Work around limitation with userland and the way we have 'dynamic' direct wiring
#     This *should* live in config.h but KemoNine can't figure out how to check which keymap is in use at that level
ifeq ($(KEYBOARD), artsey/thepaintbrush)
	ifeq ($(KEYMAP), left)
		OPT_DEFS += -DDIRECT_PINS="{ { F7, F6, F5, F4 }, { B6, B2, B3, B1 } }"
	else
		ifeq ($(KEYMAP), right)
			OPT_DEFS += -DDIRECT_PINS="{ { F4, F5, F6, F7 }, { B1, B3, B2, B6 } }"
		else
			# Intentional error so folks need to know handedness / side of pcb is important for the pin/map layout
			OPT_DEFS += -DDIRECT_PINS="{ { 0, 0, 0, 0 }, { 0, 0, 0, 0 } }"
		endif
	endif
endif
