/* Copyright (C) 2023 Harry Clark */

/* Mario Kart Wii Discord Rich Presence */

/* THIS FILE PERTAINS TO THE FUNCTIONALITY OF THE DISCORD API */
/* AND ALL OF THE METHODS PERTAINING TO IT */

#ifndef DISCORD
#define DISCORD

/* NESTED INCLUDES */

#include "common.h"
#include "dolphin.h"

#if defined(DISCORD_LIB)
#define DISCORD_EXPORT DECLSPEC (dllexport)
#else
#define DISCORD_EXPORT DECLSPEC (dllimport)
#endif

#ifdef __cplusplus
extern "C" {}
#endif

typedef struct DISCORD_RICH_PRESENCE
{
	typedef const char* STATE;
	typedef const char* DETAILS;
	typedef S64 START;
	typedef S64 END;
	typedef const char* LARGE_IMAGE_KEY;
	typedef const char* LARGE_IMAGE_TEXT;
	typedef const char* SMALL_IMAGE_KEY;
	typedef const char* SMALL_IMAGE_TEXT;
	typedef S8 INSTANCE;
};

typedef struct DISCORD_USER
{
	typedef const char* USER_ID;
	typedef const char* USERNAME;
	typedef const char* DISCRIMNATOR;
	typedef const char* AVATAR;
};

typedef struct DISCORD_EVENT_HANDLERS
{
	typedef void(*READY)(const DISCORD_USER* REQUEST);
	typedef void(*DISCONNECTED)(int ERROR_CODE, const char* MESSAGE);
	typedef void(*MALFUNCTION)(int ERROR_CODE, const char* MESSAGE);
};

#endif
