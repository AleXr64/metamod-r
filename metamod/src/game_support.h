#pragma once

#include "types_meta.h"
#include "metamod.h"

// Information we have about each game/mod DLL.
struct game_modinfo_t
{
	const char *name;		// name (the game dir)
	const char *linux_so;		// filename of linux shared lib
	const char *win_dll;		// filename of win32 dll
	const char *osx_dylib;		// filename os osx dylib
	const char *desc;		// our long-name description
};

mBOOL setup_gamedll(gamedll_t *gamedll);