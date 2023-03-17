/* Copyright (C) 2023 Harry Clark */

/* Mario Kart Wii DIscord Rich Presence */

/* THIS FILE PERTAINS TO THE FUNCTIONALITY OF THE DOLPHIN */
/* EMULATOR; PROVIDING CLARITY AND DECLARATIONS FOR FUNCTIONS */
/* THAT THE DLL INJECT WILL LOOK OUT FOR */

#ifndef DOLPHIN
#define DOLPHIN

/* NESTED INCLUDES */

#include "common.h"

/* NESTED INCLUDES */

#include <stdio.h>
#include <iosfwd>
#include <thread>
#include <process.h>

/* USING THE C CONVENTION CALL SCHEMA */
/* I CAN DYNAMICALLY LOAD THE PROGRAM */
/* PROVIDED THAT THE ARGS HAVE BEEN SATISFIED */

#define EMUALAION_MEM_SIZE 0x2000000
#define EMUALTION_MEM_BASE 0x80000000

/* WE CALL THE DECLSPEC STORAGE CLASS */
/* TO CREATE THE COROUTINES FOR THE DLL INJECTION */

extern DECLSPEC U32 REVO_CALL REVO_INIT(U32 FLAGS);
extern DECLSPEC U32 REVO_CALL REVO_SUSPEND(void);

#ifndef PROCESS_MEMORY
#define PROCESS_MEMORY

typedef struct DOLPHIN_PROC
{
	typedef bool(*VALID_BASE_ADDR());
	typedef U32* BASE_ADDR(void);
	typedef U32* CONVERT_MEM_ADDR(U32* ADDRESS);
};

#endif

#ifndef MEMORY_MANAGEMENT
#define MEMORY_MANAGMENT

typedef void(*MEM_INIT)(void);
typedef void(*MEM_SUSPEND)(void);
typedef UNK* POINTER_POSITION;

/* CREATE A UNION TO ALLOCATE THE */
/* THE CURRENT POSITION OF THE MEMORY */

typedef struct MEMORY_ROUTER
{
	union ALLOCATION
	{
		ALLOCATION* GET(void);
		ALLOCATION* SET(void);
	};
};

#endif

#endif
