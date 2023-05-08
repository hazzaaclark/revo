/* Copyright (C) 2023 Harry Clark */

/* Mario Kart Wii Discord Rich Presence */

/* THIS FILE PERTAINS TO THE FUNCTIONALITY OF THE DISCORD API */
/* AND ALL OF THE METHODS PERTAINING TO IT */

#ifndef DISCORD
#define DISCORD

/* NESTED INCLUDES */

#include "common.h"
#include "dolphin.h"

#ifndef DISCORD_LIB
#define DISCORD_EXPORT DECLSPEC 
#endif

#ifdef __cplusplus
extern "C" {}
#endif

#ifndef DISCORD_REPLY_HANDLES
#define DISCORD_REPLY_HANDLES

#define DISCORD_REPLY_NO 0
#define DISCORD_REPLY_YES 1
#define DISCORD_REPLY_IGNORE 2
#define DISCORD_PARTY_PRIVATE 3
#define DISCORD_PARTY_PUBLIC 4

#endif

#define DISCORD_APP_ID 993591242724212800

typedef struct DISCORD_RICH_PRESENCE
{
	const char* STATE;
	const char* DETAILS;
	S64 START;
	S64 END;
	const char* LARGE_IMAGE_KEY;
	const char* LARGE_IMAGE_TEXT;
	const char* SMALL_IMAGE_KEY;
	const char* SMALL_IMAGE_TEXT;
	S8 INSTANCE;
};

typedef struct DISCORD_USER
{
	const char* USER_ID;
	const char* USERNAME;
	const char* DISCRIMNATOR;
	const char* AVATAR;
};

typedef struct DISCORD_EVENT_HANDLERS
{
	typedef void(*READY)(const DISCORD_USER* REQUEST);
	typedef void(*DISCONNECTED)(int ERROR_CODE, const char* MESSAGE);
	typedef void(*MALFUNCTION)(int ERROR_CODE, const char* MESSAGE);
};


DISCORD_EXPORT void DISCORD_INIT_CLIENT(U64 APP_ID, DISCORD_EVENT_HANDLERS* HANDLERS, U32 REGISTER);
DISCORD_EXPORT void DISCORD_RUN_CALLBACKS();
DISCORD_EXPORT void DISCORD_UPDATE(UNK INSTANCE, DISCORD_RICH_PRESENCE* PRESENCE);
VOID_FUNCTION(DISCORD_CLEAR);
VOID_FUNCTION(DISCORD_UPDATE_HANDLERS);
VOID_FUNCTION(DISCORD_SHUTDOWN);

#endif
