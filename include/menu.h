/* Copyright (C) 2023 Harry Clark */

/* Mario Kart Wii Discord Rich Presence */

/* THIS FILE PERTAINS TO THE FUNCTIONALITY OF THE MENU STATE */

#ifndef MENU
#define MENU

/* NESTED INCLUDES */

#include "common.h"

typedef enum MENU_STATE : U32
{
	IN_RACE              = 0,
	MAIN_MENU            = 1,
	MODE_SELECT          = 2,
	CHARACTER_SELECT     = 3,
	TRACK_SELECT         = 4,
	ENGINE_CLASS         = 5,
	CLEARED              = 6,
};

#endif
