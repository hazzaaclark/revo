/* Copyright (C) 2023 Harry Clark */

/* Mario Kart Wii Discord Rich Presence */

/* THIS FILE PERTAINS TO THE PROCESSES OF THE EMULATION ITSELF AS */
/* THIS WILL INITILISE METHODS FOR THE GAME RELATIVE TO THE HEADER FILE */

/* NESTED INCLUDES */

#include "dolphin.h"

/* USING THE DEFINE DIRECTIVE IN THE RESPECTIVE HEADER FILE */
/* THIS FUNCTION WILL CONSTRUCT A NEW INSTANCE OF THE MEMORY POINTER */
/* GIVEN AN ADDRESS IN EMULATED MEMORY */

#ifdef USE_GAME_PARAMS

static inline DOLPHIN_POINTER* GET_DOLPHIN_INSTANCE(LONG ADDR_ACCESS, 
	                                                MEM_SOURCE* MEMORY,
	                                                ADDRESS* GET_ADDRESS)
{
	GET_ADDRESS += 1, sizeof(ADDR_ACCESS);

	if (MEMORY != NULL)
	{
		return;
	}

	else
	{
		calloc(1, sizeof(MEMORY));
	}
}

#endif
