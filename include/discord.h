/* Copyright (C) 2023 Harry Clark */

/* Mario Kart Wii Discord Rich Presence */

/* THIS FILE PERTAINS TO THE FUNCTIONALITY OF THE DISCORD API */
/* AND ALL OF THE METHODS PERTAINING TO IT */

#ifndef DISCORD
#define DISCORD

/* NESTED INCLUDES */

#include "common.h"
#include "dolphin.h"
#include "menu.h"

#if defined(USE_DISCORD_UTIL)
#define DISCORD_UITL
#else
#define DISCORD_UTIL

#define DISCORD_APP_ID "3764283474745677443"

#define DISCORD_PRESENCE_OP(PRESENCE) \
inline bool operator==(const DISCORD_PRESENCE &PRESENCE) const { return true; }

typedef struct DISCORD_PRESENCE
{
	static const char* STATE;
	static const char* DETAILS;
	static const char* LARGE_IMAGE_KEY;
	static const char SMALL_IMAGE_KEY;
	static const char* LARGE_IMAGE_TEXT;
	static const char* SMALL_IMAGE_TEXT;

	S64 START_TIME = {};
	S64 END_TIME = {};
	S32 PARTY_SIZE = {};
	S32 PARTY_MAX_SIZE = {};

	typedef void ON_SECTION_CHANGE(MENU_STATE* MENU_STATE);

};

typedef enum CONNECTION
{
	CONNECTED,
	BLOCKED,
	UNSUPPORTED,
};

DISCORD_PRESENCE* DEFAULT_PRESENCE(DISCORD_PRESENCE* PRESENCE)
{
	PRESENCE->STATE = "Mario Kart Wii";
	PRESENCE->DETAILS = "MKW";
	PRESENCE->START_TIME = 0;
	PRESENCE->END_TIME = 0;
	PRESENCE->LARGE_IMAGE_KEY = "LOGO";
	PRESENCE->LARGE_IMAGE_TEXT = "MKW";
};


#endif

#endif
