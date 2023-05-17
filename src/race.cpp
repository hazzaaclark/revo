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
		RACE_MANAGER::RACE_FILENAME* LOAD_COURSE_NAME;
		LOAD_COURSE_NAME += FILENAME(&COURSE_ID_SLOT, sizeof(COURSE_NAME));

		RACE_MANAGER::SCENE_INIT* INIT_SCENE;
		INIT_SCENE += true;

		return;
	}
};

/* LOAD THE DESIGNATED CHARACTER SELECTED FROM THE MENU ACCORDDING TO THE */
/* RELATIVE MEMORY ADDRESS OF THE CHARACTER ID SLOT */

/* THIS FUNCTION FOLLOWS THE SAME FUNCTIONALITY AS THE FUNCTION ABOVE */

static inline CHARACTER_MANAGER::NAME* LOAD_CHARACTERS(void)
{
	if (!RACE_MANAGER::SCENE_ARCHIVE)
	{
		CHARACTER_MANAGER::LOAD_NAME* LOAD_CHAR_NAME;
		CHARACTERS* CHAR_ID;
		LOAD_CHAR_NAME += FILENAME(&CHAR_ID_SLOT, sizeof(CHARACTER_NAME));

		CHAR_ID += 1, sizeof(CHARACTER_NAME_SIZE());

		return;
	}
};

/* CREATE A CONST UNMALLUABLE OBJECT THAT DETEMINES AND ALLOCS THE SIZE OF THE */
/* CHARACTER NAME IN RELATION TO THE SIZE OF THE OBJECT DEFINED ABOVE */

static const S32* CHARACTER_NAME_SIZE()
{
	calloc(1, sizeof(CHARACTER_NAME));
}


/* GET THE COURSE NAME BASED ON A SWITCH CASE METHOD */
/* THIS WILL TAKE INTO ACCOUNT THE HEX VALUE OF THE COURSE FROM THE */
/* DESIGNATED ENUM IN THE HEADER FILE AND CALL BACK TO THE API */

static inline void GET_COURSE_NAME(RACE_MANAGER::RACE_INDEX INDEX, DISCORD_RICH_PRESENCE* PRESENCE)
{
	LOAD_COURSE();
	LOAD_CHARACTERS();

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

		/*-----------------------------------------------------*/
		/*                      SHELL CUP                      */
		/*-----------------------------------------------------*/

	case COURSES::GCN_PEACH_BEACH:
		PRESENCE->LARGE_IMAGE_KEY = "GCN Peach Beach";
		PRESENCE->LARGE_IMAGE_TEXT = "Cruising along the shore";
		break;

	case COURSES::DS_YOSHI_FALLS:
		PRESENCE->LARGE_IMAGE_KEY = "DS Yoshi Falls";
		PRESENCE->LARGE_IMAGE_TEXT = "Circling the Yoshi Egg";
		break;

	case COURSES::SNES_GHOST_VALLEY_2:
		PRESENCE->LARGE_IMAGE_KEY = "SNES Ghost Valley 2";
		PRESENCE->LARGE_IMAGE_TEXT = "Ooooo scary Boo's";
		break;

	case COURSES::N64_MARIO_RACEWAY:
		PRESENCE->LARGE_IMAGE_KEY = "N64 Mario Raceway";
		PRESENCE->LARGE_IMAGE_TEXT = "and the crowd goes wild!";
		break;

		/*-----------------------------------------------------*/
		/*                     BANANA CUP                      */
		/*-----------------------------------------------------*/

	case COURSES::N64_SHERBET_LAND:
		PRESENCE->LARGE_IMAGE_KEY = "N64 Sherbet Land";
		PRESENCE->LARGE_IMAGE_TEXT = "Racing on Thin Ice";
		break;

	case COURSES::GBA_SHY_GUY_BEACH:
		PRESENCE->LARGE_IMAGE_KEY = "GBA Shy Guy Beach";
		PRESENCE->LARGE_IMAGE_TEXT = "The Pirates attack!";
		break;

	case COURSES::DS_DELFINO_SQUARE:
		PRESENCE->LARGE_IMAGE_KEY = "DS Delfino Square";
		PRESENCE->LARGE_IMAGE_TEXT = "Cruising around Isle Delfino";
		break;

	case COURSES::GCN_WALUIGI_STADIUM:
		PRESENCE->LARGE_IMAGE_KEY = "GCN Waluigi Stadium";
		PRESENCE->LARGE_IMAGE_TEXT = "Causing mayhem in Waluigi's Stadium";
		break;

		/*-----------------------------------------------------*/
		/*                       LEAF CUP                      */
		/*-----------------------------------------------------*/

	case COURSES::DS_DESERT_HILLS:
		PRESENCE->LARGE_IMAGE_KEY = "DS Desert Hills";
		PRESENCE->LARGE_IMAGE_TEXT = "Racing in the scorching heat (again)";
		break;

	case COURSES::GBA_BOWSER_CASTLE_3:
		PRESENCE->LARGE_IMAGE_KEY = "GBA Bowser Castle 3";
		PRESENCE->LARGE_IMAGE_TEXT = "Cutting those lava corners tight";
		break;

	case COURSES::N64_DKS_JUNGLE_PARKWAY:
		PRESENCE->LARGE_IMAGE_KEY = "N64 DK Jungle Parkway";
		PRESENCE->LARGE_IMAGE_TEXT = "Racing through DK's biome";
		break;

	case COURSES::GCN_MARIO_CIRCUIT:
		PRESENCE->LARGE_IMAGE_KEY = "GCN Mario Circuit";
		PRESENCE->LARGE_IMAGE_TEXT = "Avoiding Piranha's and Chain Chomps";
		break;

		/*-----------------------------------------------------*/
		/*                  LIGHTNING CUP                      */
		/*-----------------------------------------------------*/

	case COURSES::SNES_MARIO_CIRCUIT_3:
		PRESENCE->LARGE_IMAGE_KEY = "SNES Mario Circuit 3";
		PRESENCE->LARGE_IMAGE_TEXT = "Avoiding Oil spillings";
		break;

	case COURSES::DS_PEACH_GARDENS:
		PRESENCE->LARGE_IMAGE_KEY = "DS Peach Gardens";
		PRESENCE->LARGE_IMAGE_TEXT = "Weaving through flower beds";
		break;

	case COURSES::GCN_DK_MOUNTAIN:
		PRESENCE->LARGE_IMAGE_KEY = "GCN DK Mountain";
		PRESENCE->LARGE_IMAGE_TEXT = "Dodging the on-coming boulders";
		break;

	case COURSES::N64_BOWSERS_CASTLE:
		PRESENCE->LARGE_IMAGE_KEY = "N64 Bowser's Castle";
		PRESENCE->LARGE_IMAGE_TEXT = "The Final Stetch";
		break;


	default:
		printf("Invalid course index\n");
		INDEX = 0;
		break;
	}

	DISCORD_UPDATE();
	DISCORD_SHUTDOWN();
}
