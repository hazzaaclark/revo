/* Copyright (C) 2023 Harry Clark */

/* Mario Kart Wii DIscord Rich Presence */

/* THIS FILE PERTAINS TO THE MAIN FUNCTIONALITY OF THE */
/* OS' THREADDING AND HEAP STACK ORGANISATION */

/* NESTED INCLUDES */

#include "os.h"
#include "dolphin.h"

/* EXTERNAL C COMPILER LOGIC HANDLER */

extern "C"
{
	THREAD* GET_CURRENT_THREAD();
	HEAP_ALLOCATION::ALLOC_HEAP* GET_ALLOCATABLE_SPACE();
}