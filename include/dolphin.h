/* Copyright (C) 2023 Harry Clark */

/* Mario Kart Wii Discord Rich Presence */

/* THIS FILE PERTAINS TO THE FUNCTIONALITY OF THE DOLPHIN */
/* EMULATOR; PROVIDING CLARITY AND DECLARATIONS FOR FUNCTIONS */
/* THAT THE DLL INJECT WILL LOOK OUT FOR */

#ifndef DOLPHIN
#define DOLPHIN

/* NESTED INCLUDES */

#include "common.h"
#include "discord.h"

/* NESTED INCLUDES */

#include <cstdio>
#include <stdio.h>
#include <stdlib.h>


/* USING THE C CONVENTION CALL SCHEMA */
/* I CAN DYNAMICALLY LOAD THE PROGRAM */
/* PROVIDED THAT THE ARGS HAVE BEEN SATISFIED */

#define EMUALAION_MEM_SIZE 0x2000000 const
#define EMUALTION_MEM_BASE 0x80000000 const
#define ID "RMCE01"

/* WE CALL THE DECLSPEC STORAGE CLASS */
/* TO CREATE THE COROUTINES FOR THE DLL INJECTION */

extern DECLSPEC U32 REVO_CALL REVO_INIT(U32 FLAGS);
extern DECLSPEC U32 REVO_CALL REVO_SUSPEND(void);

#ifndef PROCESS_MEMORY
#define PROCESS_MEMORY

REVO_CALL U64 DELTA_TIME(const U64* TIME)
{
	return DELTA_TIME(TIME);
}

#endif

#if defined(DOLPHIN_UTILS)
#define DOLPHIN_UTILS
#else
#define DOLPHIN_UTILS

#define DOL_IPC_OK                                  0
#define DOL_IPC_ACCESS                             -1
#define DOL_IPC_BUSY                               -2
#define DOL_IPC_INVAL                              -4
#define DOL_IPC_NO_ENT                             -6
#define DOL_IPC_EQU_FULL                           -8
#define DOL_IPC_END_MEM                           -22

#define DOL_IOS_OPEN                                0
#define DOL_IOS_READ                                1 << 0
#define DOL_IOS_WRITE                               1 << 1
#define DOL_IOS_RW          (DOL_IOS_READ | DOL_IOS_WRITE)

typedef struct DOL_IOCTRL
{
	typedef void(*DATA)(void);
	typedef U32 SIZE;

	typedef S32 DOLPHIN_SIG; // FLAG TO DETERMINE DOLPHIN BUILD (DEBUG)
};

typedef struct DOL_IOS
{
	typedef S32 IOS_COMMAND;
	static U32* IOS_OPEN();
	static S32 IOS_CLOSE(S32 HANDLER);
	static S32 IOS_IO(S32 HANLDER, IOS_COMMAND COMMAND, void* INPUT, U32 INPUT_SIZE, void* OUTPUT, U32 OUTPUT_SIZE);
	static S32 IOS_IO_VECTOR(S32 HANDLER, IOS_COMMAND COMMAND, U32 INPUT_COUNT, U32 OUTPUT_COUNT, DOL_IOCTRL* IO);
};

typedef struct IOS_RESULT
{
	IOS_RESULT* DISCORD_SET(const char* APP_ID);
	IOS_RESULT* DISCORD_CLEAR();
};

#endif

#endif
