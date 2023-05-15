/* Copyright (C) 2023 Harry Clark */

/* Mario Kart Wii Discord Rich Presence */

/* THIS FILE PERTAINS TO THE MAIN FUNCTIONALITY */
/* FOR ACCESSING THE MEMORY ADDRESS OF THE RACE TRACKS */
/* AND THE CHARACTERS */

/* THIS INFORMATION WILL BE PARSED THROUGH THE API TO */
/* TO POINT TOWARDS WHICH TRACK AND CHARACTER THE USER */
/* IS USING */

/* NESTED INCLUDES */

#include "discord.h"
#include "dolphin.h"
#include "race.h"

/* LOAD THE DESIGNATED COURSES ACCORDING TO THE MEMORY ADDRESS */
/* OF THE COURSE SLOT IN RELATION TO THE SIZE OF THE COURSE NAME OBJECT */

/* THIS IS ASSUMING IF THIS ISN'T ALREADY WITHIN THE SCENE ARCHIVE HEAP */

static inline RACE_MANAGER::LOAD_COURSE* LOAD_COURSE(void)
{
	if(!RACE_MANAGER::SCENE_ARCHIVE)
	{
		RACE_MANAGER::RACE_FILENAME* FILE;
		FILE += FILENAME(&COURSE_ID_SLOT, sizeof(COURSE_NAME));

		return;
	}
};

/* GET THE COURSE NAME BASED ON A SWITCH CASE METHOD */
/* THIS WILL TAKE INTO ACCOUNT THE HEX VALUE OF THE COURSE FROM THE */
/* DESIGNATED ENUM IN THE HEADER FILE AND CALL BACK TO THE API */

static inline void GET_COURSE_NAME(RACE_MANAGER::RACE_INDEX INDEX, DISCORD_RICH_PRESENCE* PRESENCE)
{
	LOAD_COURSE();

	switch (INDEX)
	{

		/*-----------------------------------------------------*/
		/*                     MUSHROOM CUP                    */
		/*-----------------------------------------------------*/

	case COURSES::LUIGI_CIRCUIT:
		PRESENCE->LARGE_IMAGE_KEY = "Luigi Circuit";
		PRESENCE->LARGE_IMAGE_TEXT = "Going for Gold";
		break;

	case COURSES::MOO_MOO_MEADOWS:
		PRESENCE->LARGE_IMAGE_KEY = "Moo Moo Meadows";
		PRESENCE->LARGE_IMAGE_TEXT = "Avoiding Cows";
		break;

	case COURSES::MUSHROOM_GORGE:
		PRESENCE->LARGE_IMAGE_KEY = "Mushroom Gorge";
		PRESENCE->LARGE_IMAGE_TEXT = "Bouncing on Mushrooms";
		break;

	case COURSES::TOADS_FACTORY:
		PRESENCE->LARGE_IMAGE_KEY = "Toad's Factory";
		PRESENCE->LARGE_IMAGE_TEXT = "Disrupting the production of goods";
		break;

		/*-----------------------------------------------------*/
		/*                       FLOWER CUP                    */
		/*-----------------------------------------------------*/

	case COURSES::MARIO_CIRCUIT:
		PRESENCE->LARGE_IMAGE_KEY = "Mario Circuit";
		PRESENCE->LARGE_IMAGE_TEXT = "Racing around Peach's Castle";
		break;

	case COURSES::COCONUT_MALL:
		PRESENCE->LARGE_IMAGE_KEY = "Coconut Mall";
		PRESENCE->LARGE_IMAGE_TEXT = "Doing some Shopping";
		break;

	case COURSES::DK_SUMMIT:
		PRESENCE->LARGE_IMAGE_KEY = "DK Summit";
		PRESENCE->LARGE_IMAGE_TEXT = "Cranking 360's";
		break;

	case COURSES::WARIOS_GOLD_MINE:
		PRESENCE->LARGE_IMAGE_KEY = "Wario's Gold Mine";
		PRESENCE->LARGE_IMAGE_TEXT = "Dodging Minecarts";
		break;

		/*-----------------------------------------------------*/
		/*                       STAR CUP                      */
		/*-----------------------------------------------------*/

	case COURSES::DAISY_CIRCUIT:
		PRESENCE->LARGE_IMAGE_KEY = "Daisy Circuit";
		PRESENCE->LARGE_IMAGE_TEXT = "Cruising at Sunset";
		break;

	case COURSES::KOOPA_CAPE:
		PRESENCE->LARGE_IMAGE_KEY = "Koopa Cape";
		PRESENCE->LARGE_IMAGE_TEXT = "Riding the Waves";
		break;

	case COURSES::MAPLE_TREEWAY:
		PRESENCE->LARGE_IMAGE_KEY = "Maple Treeway";
		PRESENCE->LARGE_IMAGE_TEXT = "Frolicking through the Trees";
		break;

	case COURSES::GRUMBLE_VOLCANO:
		PRESENCE->LARGE_IMAGE_KEY = "Grumble Volcano";
		PRESENCE->LARGE_IMAGE_TEXT = "Racing through precarious conditions";
		break;

		/*-----------------------------------------------------*/
		/*                    SPECIAL CUP                      */
		/*-----------------------------------------------------*/

	case COURSES::DRY_DRY_RUINS:
		PRESENCE->LARGE_IMAGE_KEY = "Dry Dry Ruins";
		PRESENCE->LARGE_IMAGE_TEXT = "Racing in the scorching heat";
		break;

	case COURSES::MOONVIEW_HIGHWAY:
		PRESENCE->LARGE_IMAGE_KEY = "Moonview Highway";
		PRESENCE->LARGE_IMAGE_TEXT = "Dodging oncoming traffic";
		break;

	case COURSES::BOWSERS_CASTLE:
		PRESENCE->LARGE_IMAGE_KEY = "Bowser's Castle";
		PRESENCE->LARGE_IMAGE_TEXT = "Traversing tight corridors";
		break;

	case COURSES::RAINBOW_ROAD:
		PRESENCE->LARGE_IMAGE_KEY = "Rainbow Road";
		PRESENCE->LARGE_IMAGE_TEXT = "Riding the road of tranquility";
		break;


	default:
		printf("Invalid course index\n");
		INDEX = 0;
		break;
	}

	DISCORD_UPDATE();
	DISCORD_SHUTDOWN();
}
