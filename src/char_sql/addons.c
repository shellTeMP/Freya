// Copyright (c) Freya Development Team - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#include <config.h>

#include <stdlib.h>
#include <string.h>

#include "../common/addons.h"
#include "addons.h"

void init_localcalltable(void) {
#ifdef DYNAMIC_LINKING
	local_table = malloc(LFNC_COUNT * 4);
	// put here list of exported functions...
#endif
}

