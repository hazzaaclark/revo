/* Copyright (C) 2023 Harry Clark */

/* Mario Kart Wii Discord Rich Presence */

/* THIS FILE PERTAINS TO THE FUNCTIONALITY OF THE MENU STATE */

#ifndef MENU
#define MENU

/* NESTED INCLUDES */

#include "common.h"

typedef enum MENU_STATE : U32
{
	GRAND_PRIX = 0x1E,
	TIME_TRIALS = 0x1F,
	VS_1P = 0x20,
	VS_2P = 0x21,
	VS_3P = 0x22,
	VS_4P = 0x23,

	WIIMMFI = 0x68,
	WIIMMFI_2P = 0x69,
	WIIMMFI_WAIT = 0x6A,
	WIIMMFI_WAIT_2P = 0x6B,
};

#endif
