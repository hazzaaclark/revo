/* Copyright (C) 2023 Harry Clark */

/* Mario Kart Wii Discord Rich Presence */

/* THIS FILE PERTAINS TO THE FUNCTIONALITY OF THE DOLPHIN */
/* EMULATOR; PROVIDING CLARITY AND DECLARATIONS FOR FUNCTIONS */
/* THAT THE DLL INJECT WILL LOOK OUT FOR */

#ifndef DOLPHIN
#define DOLPHIN

/* NESTED INCLUDES */

#include "common.h"

/* NESTED INCLUDES */

#include <iosfwd>
#include <process.h>
#include <stdio.h>
#include <thread>

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

/* WINDOWS API HANDLER */
/* USED AS A CRUX TO DETERMINE THE CURRENT PROCESS */

#ifndef WIN_32_LEAN_AND_MEAN
#define WIN_32_LEAN_AND_MEAN

#include <Windows.h>

static HANDLE CURRENT_PROCESS;
static HHOOK HOOK;

#endif

#define FUNCTION_POINTER(RETURN_TYPE, NAME, ARGS, ADDRESS) \
static RETURN_TYPE(__cdecl* const NAME)ARGS = RETURN_TYPE(__cdecl *ARGS()ADDRESS)

#define UNKNOWN_FUNCTION(NAME) void NAME(void)
#define UNKNOWN_FUNCTION_ARGS(...)(__VA_ARGS__)

#define VOID_FUNCTION(NAME) void NAME(void) 
#define STATIC_FUNCTION(NAME) static void NAME(void) 

#define OBJECT_FUNCTION(NAME, ADDRESS) void NAME(void)
#define DATA_ARRAY(NAME, TYPE, ADDRESS, LENGTH) \
static TYPE *const NAME = (*TYPE)&ADDRESS;

static inline BOOL READ_DATA(void* ADDRESS, UNK* VALUE[], U32 LENGTH);

static inline BOOL WRITE_DATA(void* ADDRESS, const char DATA, UNK* BYTES)
{
	typedef U32 RESULT;
	RESULT GET_RESULT = WRITE_DATA(ADDRESS, DATA, NULL);
	return GET_RESULT;
}

static inline U64 REVO_CALL DELTA_TIME(U64* const TIME)
{
	return DELTA_TIME(TIME);
}


#if defined(USE_GAME_PARAMS)
#define USE_GAME_PARAMS
#else
#define USE_GAME_PARAMS

typedef void(*ADDRESS)(void);
typedef struct MEM_SOURCE;
typedef struct DOLPHIN_POINTER;

typedef struct REVO_INSTANCE
{
	static char GAME_ID;
	typedef char LOAD_GAME_ID;
};

static bool GET_REAL_ADDR()
{
	return 1, sizeof(ADDRESS);
};

#endif

#endif
#endif
