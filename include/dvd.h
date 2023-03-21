/* Copyright (C) 2023 Harry Clark */

/* Mario Kart Wii Discord Rich Presence */

/* THIS FILE PERTAINS TO THE FUNCTIONALITY OF THE DVD */
/* STRUCTURE IN RELATION TO THE FUINCTIONALITY OF THE OS */

/* THIS IS TO FURTHER UNDERSTAND THE VARIOUS STATES OF THE */
/* DVD'S READ AND WRITE PROCESS */

#ifndef DVD
#define DVD

/* NESTED INCLUDES */

#include "common.h"
#include "dolphin.h"
#include "os.h"

typedef enum DVD_STATE
{
	CLEARED = 0,
	RIPPED = 1,
	DECOMP = 2,
	MOUNTED = 3,
};

typedef struct DVD_ARCHIVE{};
typedef struct MULTI_DVD : DVD_ARCHIVE{};
typedef struct RESOURCE_MANAGER : DVD_ARCHIVE{};

#endif
