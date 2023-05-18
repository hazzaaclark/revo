/* Copyright (C) 2023 Harry Clark */

/* Mario Kart Wii Discord Rich Presence */

/* THIS FILE PERTAINS TO THE PROCESSES OF THE EMULATION ITSELF AS */
/* THIS WILL INITILISE METHODS FOR THE GAME RELATIVE TO THE HEADER FILE */

/* NESTED INCLUDES */

#include "dolphin.h"
#include "menu.h"
#include "dvd.h"

/* USING THE DEFINE DIRECTIVE IN THE RESPECTIVE HEADER FILE */
/* THIS FUNCTION WILL CONSTRUCT A NEW INSTANCE OF THE MEMORY POINTER */
/* GIVEN AN ADDRESS IN EMULATED MEMORY */

#ifdef USE_GAME_PARAMS

static inline DOLPHIN_POINTER* GET_DOLPHIN_INSTANCE(LONG ADDR_ACCESS, 
	                                                MEM_SOURCE* MEMORY,
	                                                ADDRESS* GET_ADDRESS)
{
	GET_ADDRESS += 1, sizeof(ADDR_ACCESS);

	if (MEMORY != NULL) return;
	calloc(1, sizeof(MEMORY));
}

static inline REVO_INSTANCE* GET_REVO_INSTANCE(void)
{
	if (!REVO_INSTANCE::GAME_ID)
	{
		REVO_INSTANCE::LOAD_GAME_ID* LOAD_GAME_ID;
		LOAD_GAME_ID += (1, sizeof(ID));

		return;
	};
};

/* CREATE A HANDLE EXCEPTION TO DETERMINE IF THE GAME IS LOADED */
/* RELATIVE TO THE RESPECTIVE BASE ADDRESS AND GAME ID */

static inline bool IS_PLAYING_MKW(HANDLE)
{
	if (!GET_REAL_ADDR())
	{
		if (ID == ID)
		{
			return true;
		}
		
		return false;
	}
}

#endif
