FallarborTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
	.byte 0

FallarborTown_OnTransition:
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	clearflag FLAG_CONTEST_SKETCH_CREATED
	end

FallarborTown_EventScript_ExpertM::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_ExpertMNormal::
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_Girl::
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
	end

FallarborTown_EventScript_Gentleman::
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
	end

FallarborTown_EventScript_Azurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_EventScript_BattleTentSign::
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_TownSign::
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_MoveTutorSign::
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_WorldLevelCyndaquil::
	lock
	msgbox FallarborTown_Text_WorldLevelCyndaquil, MSGBOX_NPC
	message FallarborTown_Text_WorldLevelCyndaquil_Question
	multichoice 25, 5, MULTI_WORLD_LEVEL, 0
	closemessage
	goto_if_eq VAR_RESULT, 0, SetWorldLevel0
	goto_if_eq VAR_RESULT, 1, SetWorldLevel1
	goto_if_eq VAR_RESULT, 2, SetWorldLevel2
	goto_if_eq VAR_RESULT, 3, SetWorldLevel3
	goto_if_eq VAR_RESULT, 4, SetWorldLevel4
	goto_if_eq VAR_RESULT, 5, SetWorldLevel5
	goto_if_eq VAR_RESULT, 6, SetWorldLevel6
	goto_if_eq VAR_RESULT, 7, SetWorldLevel7
	goto_if_eq VAR_RESULT, 8, SetWorldLevel8
	goto_if_eq VAR_RESULT, 9, SetWorldLevel9
	goto_if_eq VAR_RESULT, 10, SetWorldLevel10
	goto_if_eq VAR_RESULT, 11, SetWorldLevel11
	release
	end

SetWorldLevel0::
	setvar VAR_WORLD_DIFFICULTY, 0
	buffernumberstring STR_VAR_1, VAR_WORLD_DIFFICULTY
	goto WorldLevelChanged

SetWorldLevel1::
	setvar VAR_WORLD_DIFFICULTY, 1
	buffernumberstring STR_VAR_1, VAR_WORLD_DIFFICULTY
	goto WorldLevelChanged

SetWorldLevel2::
	setvar VAR_WORLD_DIFFICULTY, 2
	buffernumberstring STR_VAR_1, VAR_WORLD_DIFFICULTY
	goto WorldLevelChanged

SetWorldLevel3::
	setvar VAR_WORLD_DIFFICULTY, 3
	buffernumberstring STR_VAR_1, VAR_WORLD_DIFFICULTY
	goto WorldLevelChanged

SetWorldLevel4::
	setvar VAR_WORLD_DIFFICULTY, 4
	buffernumberstring STR_VAR_1, VAR_WORLD_DIFFICULTY
	goto WorldLevelChanged

SetWorldLevel5::
	setvar VAR_WORLD_DIFFICULTY, 5
	buffernumberstring STR_VAR_1, VAR_WORLD_DIFFICULTY
	goto WorldLevelChanged

SetWorldLevel6::
	setvar VAR_WORLD_DIFFICULTY, 6
	buffernumberstring STR_VAR_1, VAR_WORLD_DIFFICULTY
	goto WorldLevelChanged

SetWorldLevel7::
	setvar VAR_WORLD_DIFFICULTY, 7
	buffernumberstring STR_VAR_1, VAR_WORLD_DIFFICULTY
	goto WorldLevelChanged

SetWorldLevel8::
	setvar VAR_WORLD_DIFFICULTY, 8
	buffernumberstring STR_VAR_1, VAR_WORLD_DIFFICULTY
	goto WorldLevelChanged

SetWorldLevel9::
	setvar VAR_WORLD_DIFFICULTY, 9
	buffernumberstring STR_VAR_1, VAR_WORLD_DIFFICULTY
	goto WorldLevelChanged

SetWorldLevel10::
	setvar VAR_WORLD_DIFFICULTY, 10
	buffernumberstring STR_VAR_1, VAR_WORLD_DIFFICULTY
	goto WorldLevelChanged

SetWorldLevel11::
	setvar VAR_WORLD_DIFFICULTY, 11
	buffernumberstring STR_VAR_1, VAR_WORLD_DIFFICULTY
	goto WorldLevelChanged

WorldLevelChanged::
	msgbox FallarborTown_Text_WorldLevelCyndaquil_Changed, MSGBOX_DEFAULT
	release
	end

FallarborTown_Text_ShadyCharactersCozmosHome:
	.string "Something's happening,\n"
	.string "and I don't like it!\p"
	.string "I've seen shady characters wandering\n"
	.string "in and out of PROF. COZMO's home…$"

FallarborTown_Text_RegionKnownForMeteors:
	.string "This region's been known for meteors\n"
	.string "since the olden days.\p"
	.string "They say METEOR FALLS was gouged out\n"
	.string "by a falling meteorite long ago.$"

FallarborTown_Text_MyPreciousAzurill:
	.string "See! Take a look!\n"
	.string "This is my precious AZURILL!\p"
	.string "It's slick and smooth and plushy, too!$"

FallarborTown_Text_Azurill:
	.string "AZURILL: Rooreelooo.$"

FallarborTown_Text_HaveYouChallengedFlannery:
	.string "Have you already challenged FLANNERY,\n"
	.string "the LEADER of LAVARIDGE GYM?\p"
	.string "The girl's grandfather was famous.\n"
	.string "He was one of the ELITE FOUR in the\l"
	.string "POKéMON LEAGUE at one point.\p"
	.string "It wouldn't surprise me to see FLANNERY\n"
	.string "become a great TRAINER in her own\l"
	.string "right.$"

FallarborTown_Text_BattleTentSign:
	.string "BATTLE TENT FALLARBOR SITE\n"
	.string "“May the Greatest Teams Gather!”$"

FallarborTown_Text_TownSign:
	.string "FALLARBOR TOWN\n"
	.string "“A farm community with small gardens.”$"

FallarborTown_Text_MoveTutorSign:
	.string "MOVE TUTOR'S HOUSE\n"
	.string "“New moves taught to POKéMON.”$"

FallarborTown_Text_WorldLevelCyndaquil:
	.string "Currently, the World Level is {STR_VAR_1}.\n"
	.string "Nice!$"

FallarborTown_Text_WorldLevelCyndaquil_Question:
	.string "What would you like to change it to?$"

FallarborTown_Text_WorldLevelCyndaquil_Changed:
	.string "The World Level is now {STR_VAR_1}.\n"
	.string "Let's hope this works.$"