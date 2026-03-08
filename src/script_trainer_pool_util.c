#include "global.h"
#include "data.h"

//pool length variables
//class
const int hikerLength = 1;
const int team_aquaLength = 1;
const int pkmn_breederLength = 1;
const int cooltrainerLength = 1;
const int bird_keeperLength = 1;
const int collectorLength = 1;
const int swimmer_mLength = 1;
const int team_magmaLength = 1;
const int expertLength = 1;
const int aqua_adminLength = 1;
const int black_beltLength = 1;
const int aqua_leaderLength = 1;
const int hex_maniacLength = 1;
const int aroma_ladyLength = 1;
const int ruin_maniacLength = 1;
const int interviewerLength = 1;
const int tuber_fLength = 1;
const int tuber_mLength = 1;
const int ladyLength = 1;
const int beautyLength = 1;
const int rich_boyLength = 1;
const int pokemaniacLength = 1;
const int guitaristLength = 1;
const int kindlerLength = 1;
const int camperLength = 1;
const int picnickerLength = 1;
const int bug_maniacLength = 1;
const int psychicLength = 1;
const int gentlemanLength = 1;
const int elite_fourLength = 1;
const int leaderLength = 1;

//initialize pools
const struct TrainerMon ClassParty_Hiker[1] =
{
    #include "data/classparties/hiker.h"
};

const struct TrainerMon ClassParty_Team_Aqua[1] =
{
    #include "data/classparties/team_aqua.h"
};

const struct TrainerMon ClassParty_Pkmn_Breeder[1] =
{
    #include "data/classparties/pkmn_breeder.h"
};

const struct TrainerMon ClassParty_Cooltrainer[1] =
{
    #include "data/classparties/cooltrainer.h"
};

const struct TrainerMon ClassParty_Bird_Keeper[1] =
{
    #include "data/classparties/bird_keeper.h"
};

const struct TrainerMon ClassParty_Collector[1] =
{
    #include "data/classparties/collector.h"
};

const struct TrainerMon ClassParty_Swimmer_M[1] =
{
    #include "data/classparties/swimmer_m.h"
};

const struct TrainerMon ClassParty_Team_Magma[1] =
{
    #include "data/classparties/team_magma.h"
};

const struct TrainerMon ClassParty_Expert[1] =
{
    #include "data/classparties/expert.h"
};

const struct TrainerMon ClassParty_Aqua_Admin[1] =
{
    #include "data/classparties/aqua_admin.h"
};

const struct TrainerMon ClassParty_Black_Belt[1] =
{
    #include "data/classparties/black_belt.h"
};

const struct TrainerMon ClassParty_Aqua_Leader[1] =
{
    #include "data/classparties/aqua_leader.h"
};

const struct TrainerMon ClassParty_Hex_Maniac[1] =
{
    #include "data/classparties/hex_maniac.h"
};

const struct TrainerMon ClassParty_Aroma_Lady[1] =
{
    #include "data/classparties/aroma_lady.h"
};

const struct TrainerMon ClassParty_Ruin_Maniac[1] =
{
    #include "data/classparties/ruin_maniac.h"
};

const struct TrainerMon ClassParty_Interviewer[1] =
{
    #include "data/classparties/interviewer.h"
};

const struct TrainerMon ClassParty_Tuber_F[1] =
{
    #include "data/classparties/tuber_f.h"
};

const strct TrainerMon ClassParty_Tuber_M[1] =
{
    #include "data/classparties/tuber_m.h"
};

const struct TrainerMon ClassParty_Lady[1] =
{
    #include "data/classparties/lady.h"
};

const struct TrainerMon ClassParty_Beauty[1] =
{
    #include "data/classparties/beauty.h"
};

const struct TrainerMon ClassParty_Rich_Boy[1] =
{
    #include "data/classparties/rich_boy.h"
};

const struct TrainerMon ClassParty_Pokemaniac[1] =
{
    #include "data/classparties/pokemaniac.h"
};

const struct TrainerMon ClassParty_Guitarist[1] =
{
    #include "data/classparties/guitarist.h"
};

const struct TrainerMon ClassParty_Kindler[1] =
{
    #include "data/classparties/kindler.h"
};

const struct TrainerMon ClassParty_Camper[1] =
{
    #include "data/classparties/camper.h"
};

const struct TrainerMon ClassParty_Picnicker[1] =
{
    #include "data/classparties/picnicker.h"
};

const struct TrainerMon ClassParty_Bug_Maniac[1] =
{
    #include "data/classparties/bug_maniac.h"
};

const struct TrainerMon ClassParty_Psychic[1] =
{
    #include "data/classparties/psychic.h"
};

const struct TrainerMon ClassParty_Gentleman[1] =
{
    #include "data/classparties/gentleman.h"
};

const struct TrainerMon ClassParty_Elite_Four[1] =
{
    #include "data/classparties/elite_four.h"
};

const struct TrainerMon ClassParty_Leader[1] =
{
    #include "data/classparties/leader.h"
};

//functions
int GetClassPoolSize(u16 trainerId)
{
    u8 currentTrainerClass = GetTrainerClassFromId(trainerId);

    switch(currentTrainerClass)
    {
        case 0: //hiker
            return hikerLength;
            break;
        case 1: //team aqua (grunt)
            return team_aquaLength;
            break;
        case 2: //pkmn breeder
            return pkmn_breederLength;
            break;
        case 3: //cool trainer
            return cooltrainerLength;
            break;
        case 4: //bird keeper
            return bird_keeperLength;
            break;
        case 5: //collector
            return collectorLength;
            break;
        case 6: //swimmer m
            return swimmer_mLength;
            break;
        case 7: //team magma (grunt)
            return team_magmaLength;
            break;
        case 8: //expert
            return expertLength;
            break;
        case 9: //aqua admin
            return aqua_adminLength;
            break;
        case 10: //black belt
            return black_beltLength;
            break;
        case 11: //aqua leader 
            return aqua_leaderLength;
            break;
        case 12: //hex maniac
            return hex_maniacLength;
            break;
        case 13: //aroma lady
            return aroma_ladyLength;
            break;
        case 14: //ruin maniac
            return ruin_maniacLength;
            break;
        case 15: //interviewer
            return interviewerLength;
            break;
        case 16: //tuber f
            return  tuber_fLength;
            break;
        case 17: //tuber m
            return tuber_mLength;
            break;
        case 18: //lady
            return ladyLength;
            break;
        case 19: //beauty
            return beautyLength;
            break;
        case 20: //rich_boy
            return rich_boyLength;
            break;
        case 21: //pokemaniac
            return pokemaniacLength;
            break;
        case 22: //guitarist
            return guitaristLength;
            break;
        case 23: //kindler
            return kindlerLength;
            break;
        case 24: //camper
            return camperLength;
            break;
        case 25: //picnicker
            return picnickerLength;
            break;
        case 26: //bug maniac
            return bug_maniacLength;
            break;
        case 27: //psychic
            return psychicLength;
            break;
        case 28: //gentleman
            return gentlemanLength;
            break;
        case 29: //elite four
            return elite_fourLength;
            break;
        case 30: //leader
            return leaderLength;
            break;
    };

    return 1;
};

int GetRoutePoolSize(u16 trainerId) 
{
    u8 currentTrainerRoute = GetTrainerUnlockedFromId(trainerId);

    switch (currentTrainerRoute)
    {

    };

    return 1;

};

const struct TrainerMon *CombinePools(u16 trainerId)
{
    
    u8 currentTrainerClass = GetTrainerClassFromId(trainerId);
    u8 currentTrainerRoute = GetTrainerUnlockedFromId(trainerId);
    u8 classPoolSize = GetClassPoolSize(trainerId);
    u8 routePoolSize = GetRoutePoolSize(trainerId);

    const struct TrainerMon *poolparty[classPoolSize + routePoolSize];

    switch(currentTrainerClass)
    {
        case 0: //hiker
            memcpy(poolparty, ClassParty_Hiker, classPoolSize);
            break;
        case 1: //team aqua (grunt)
            memcpy(poolparty, ClassParty_Team_Aqua, classPoolSize);
            break;
        case 2: //pkmn breeder
            memcpy(poolparty, ClassParty_Pkmn_Breeder, classPoolSize);
            break;
        case 3: //cool trainer
            memcpy(poolparty, ClassParty_Cooltrainer, classPoolSize);
            break;
        case 4: //bird keeper
            memcpy(poolpary, ClassParty_Bird_Keeper, classPoolSize);
            break;
        case 5: //collector
            memcpy(poolparty, ClassParty_Collector, classPoolSize);
            break;
        case 6: //swimmer m
            memcpy(poolparty, ClassParty_Swimmer_M, classPoolSize);
            break;
        case 7: //team magma (grunt)
            memcpy(poolparty, ClassParty_Team_Magma, classPoolSize);
            break;
        case 8: //expert
            memcpy(poolparty, ClassParty_Expert, classPoolSize);
            break;
        case 9: //aqua admin
            memcpy(poolparty, ClassParty_Aqua_Admin, classPoolSize);
            break;
        case 10: // black belt
            memcpy(poolparty, ClassParty_Black_Belt, classPoolSize);
            break;
        case 11: // aqua leader
            memcpy(poolparty, ClassParty_Aqua_Leader, classPoolSize);
            break;
        case 12: // hex maniac
            memcpy(poolparty, ClassParty_Hex_Maniac, classPoolSize);
            break;
        case 13: //aroma lady
            memcpy(poolparty, ClassParty_Hex_Maniac, classPoolSize);
            break;
        case 14: //ruin maniac
            memcpy(poolparty, ClassParty_Ruin_Maniac, classPoolSize);
            break;
        case 15: //interviewer
            memcpy(poolparty, ClassParty_Interviewer, classPoolSize);
            break;
        case 16: //tuber f
            memcpy(poolparty, ClassParty_Tuber_F, classPoolSize);
            break;
        case 17: //tuber m
            memcpy(poolparty, ClassParty_Tuber_M, classPoolSize);
            break;
        case 18: //lady
            memcpy(poolparty, ClassParty_Lady, classPoolSize);
            break;
        case 19: //beauty
            memcpy(poolparty, ClassParty_Beauty, classPoolSize);
            break;
        case 20: //rich boy
            memcpy(poolparty, ClassParty_Rich_Boy, classPoolSize);
            break;
        case 21: //pokemaniac
            memcpy(poolparty, ClassParty_Pokemaniac, classPoolSize);
            break;
        case 22: //guitarist
            memcpy(poolparty, ClassParty_Guitarist, classPoolSize);
            break;
        case 23: //kindler
            memcpy(poolparty, ClassParty_Kindler, classPoolSize);
            break;
        case 24: //camper
            memcpy(poolparty, ClassParty_Camper, classPoolSize);
            break;
        case 25: //picnicker
            memcpy(poolparty, ClassParty_Picnicker, classPoolSize);
            break;
        case 26: //bug maniac
            memcpy(poolparty, ClassParty_Bug_Maniac, classPoolSize);
            break;
        case 27: //psychic
            memcpy(poolparty, ClassParty_Psychic, classPoolSize);
            break;
        case 28: //gentleman
            memcpy(poolparty, ClassParty_Gentleman, classPoolSize);
            break;
        case 29: //elite four
            memcpy(poolparty, ClassParty_Elite_Four, classPoolSize);
            break;
        case 30: //leader
            memcpy(poolparty, ClassParty_Leader, classPoolSize);
            break;
    };

    // switch(currentTrainerRoute)
    // {
    //     case 0: //
    //     memcpy(poolparty + classPoolSize, [routepool], routePoolSize * sizeof(TrainerMon));
    // };


    return *poolparty;
};

    //     case 29:
    //         classpool =
    //         {
    //             #include "data/classparties/school_kid.h"
    //         };
    //         break;
    //     case 30:
    //         classpool =
    //         {
    //             #include "data/classparties/sr_and_jr.h"
    //         };
    //         break;
    //     case 31:
    //         classpool =
    //         {
    //             #include "data/classparties/winstrate.h"
    //         };
    //         break;
    //     case 32:
    //         classpool =
    //         {
    //             #include "data/classparties/pokefan.h"
    //         };
    //         break;
    //     case 33:
    //         classpool =
    //         {
    //             #include "data/classparties/youngster.h"
    //         };
    //         break;
    //     case 34:
    //         classpool =
    //         {
    //             #include "data/classparties/champion.h"
    //         };
    //         break;
    //     case 35:
    //         classpool =
    //         {
    //             #include "data/classparties/fisherman.h"
    //         };
    //         break;
    //     case 36:
    //         classpool =
    //         {
    //             #include "data/classparties/triathlete.h"
    //         };
    //         break;
    //     case 37:
    //         classpool =
    //         {
    //             #include "data/classparties/dragon_tamer.h"
    //         };
    //         break;
    //     case 38:
    //         classpool =
    //         {
    //             #include "data/classparties/ninja_boy.h"
    //         };
    //         break;
    //     case 39:
    //         classpool =
    //         {
    //             #include "data/classparties/battle_girl.h"
    //         };
    //         break;
    //     case 40:
    //         classpool =
    //         {
    //             #include "data/classparties/parasol_lady.h"
    //         };
    //         break;
    //     case 41:
    //         classpool =
    //         {
    //             #include "data/classparties/swimmer_f.h"
    //         };
    //         break;
    //     case 42:
    //         classpool =
    //         {
    //             #include "data/classparties/twins.h"
    //         };
    //         break;
    //     case 43:
    //         classpool =
    //         {
    //             #include "data/classparties/sailor.h"
    //         };
    //         break;
    //     case 44:
    //         classpool =
    //         {
    //             #include "data/classparties/cooltrainer_2.h"
    //         };
    //         break;
    //     case 45:
    //         classpool =
    //         {
    //             #include "data/classparties/magma_admin.h"
    //         };
    //         break;
    //     case 46:
    //         classpool = 
    //         {
    //             #include "data/classparties/rival.h"
    //         };
    //         break;
    //     case 47:
    //         classpool =
    //         {
    //             #include "data/classparties/bug_catcher.h"
    //         };
    //         break;
    //     case 48:
    //         classpool =
    //         {
    //             #include "data/classparties/pkmn_ranger.h"
    //         };
    //         break;
    //     case 49:
    //         classpool =
    //         {
    //             #include "data/classparties/magma_leader.h"
    //         };
    //         break;
    //     case 50:
    //         classpool =
    //         {
    //             #include "data/classparties/lass.h"
    //         };
    //         break;
    //     case 51:
    //         classpool =
    //         {
    //             #include "data/classparties/young_couple.h"
    //         };
    //         break;
    //     case 52:
    //         classpool =
    //         {
    //             #include "data/classparties/old_couple.h"
    //         };
    //         break;
    //     case 53:
    //         classpool =
    //         {
    //             #include "data/classparties/sis_and_bro.h"
    //         };
    //         break;
    //     case 54:
    //         classpool =
    //         {
    //             #include "data/classparties/salon_maiden.h"
    //         };
    //     case 55:
    //         classpool =
    //         {
    //             #include "data/classparties/arena_tycoon.h"
    //         };
    //         break;
    //     case 56:
    //         classpool =
    //         {
    //             #include "data/classparties/factory_head.h"
    //         };
    //         break;
    //     case 57:
    //         classpool =
    //         {
    //             #include "data/classparties/pike_queen.h"
    //         };
    //         break;
    //     case 58:
    //         classpool =
    //         {
    //             #include "data/classparties/pyramid_king.h"
    //         };
    //         break;
    //     case 59:
    //         classpool =
    //         {
    //             #include "data/classparties/rs_protag.h"
    //         };
    //         break;
    //     default:
    //         classpool =
    //         {
    //             #include "data/classparties/collector.h"
    //         };
    //         break;
    // }

    // switch (currentTrainerRoute)
    // {
    //     case 0:
    //         routepool =
    //         {
    //             #include "data/routeparties/fallarbor_rustboro.h"
    //         };
    //         break;
    //     case 1:
    //         routepool =
    //         {
    //             #include "data/routeparties/fallarbor_lavaridge.h"
    //         };
    //         break;
    //     case 2:
    //         routepool =
    //         {
    //             #include "data/routeparties/rustboro_mauville.h"
    //         };
    //         break;
    //     case 3:
    //         routepool =
    //         {
    //             #include "data/routeparties/lavaridge_mauville.h"
    //         };
    //         break;
    //     case 4:
    //         routepool =
    //         {
    //             #include "data/routeparties/rustboro_petalburg.h"
    //         };
    //         break;
    //     case 5:
    //         routepool =
    //         {
    //             #include "data/routeparties/petalburg_dewford.h"
    //         };
    //         break;
    //     case 6:
    //         routepool =
    //         {
    //             #include "data/routeparties/dewford_slateport.h"
    //         };
    //         break;
    //     case 7:
    //         routepool =
    //         {
    //             #include "data/routeparties/petalburg_slateport.h"
    //         };
    //         break;
    //     case 8:
    //         routepool =
    //         {
    //             #include "data/routeparties/slateport_mauville.h"
    //         };
    //         break;
    //     case 9:
    //         routepool =
    //         {
    //             #include "data/routeparties/lavaridge_fortree.h"
    //         };
    //         break;
    //     case 10:
    //         routepool =
    //         {
    //             #include "data/routeparties/mauville_mtpyre.h"
    //         };
    //         break;
    //     case 11:
    //         routepool =
    //         {
    //             #include "data/routeparties/fortree_mtpyre.h"
    //         };
    //         break;
    //     case 12:
    //         routepool =
    //         {
    //             #include "data/routeparties/mtpyre_lilycove.h"
    //         };
    //         breka;
    //     case 13:
    //         routepool =
    //         {
    //             #include "data/routeparties/lilycove_mossdeep.h"
    //         };
    //         break;
    //     case 14:
    //         routepoool =
    //         {
    //             #include "data/routeparties/slateport_mossdeep.h"
    //         };
    //         break;
    //     case 15:
    //         routepool =
    //         {
    //             #include "data/routeparties/fallarbor.h"
    //         };
    //         break;
    //     case 16:
    //         routepool =
    //         {
    //             #include "data/routeparties/rustboro.h"
    //         };
    //         break;
    //     case 17:
    //         routepool =
    //         {
    //             #include "data/routeparties/petalburg.h"
    //         };
    //         break;
    //     case 18:
    //         routepool =
    //         {
    //             #include "data/routeparties/dewford.h"
    //         };
    //         break;
    //     case 19:
    //         routepool = 
    //         {
    //             #include "data/routeparties/slateport.h"
    //         };
    //         break;
    //     case 20:
    //         routepool =
    //         {
    //             #include "data/routeparties/mauville.h"
    //         };
    //         break;
    //     case 21:
    //         routepool =
    //         {
    //             #include "data/routeparties/lavaridge.h"
    //         };
    //         break;
    //     case 22:
    //         routepool =
    //         {
    //             #include "data/routeparties/fortree.h"
    //         };
    //         break;
    //     case 23:
    //         routepool =
    //         {
    //             #include "data/routeparties/mtpyre.h"
//         };
//         break;
//     case 24:
//         routepool =
//         {
//             #include "data/routeparties/lilycove.h"
//         };
//         break;
//     case 25:
//         routepool =
//         {
//             #include "data/routeparties/mossdeep.h"
//         };
//         break;
//     case 26:
//         routepool =
//         {
//             #include "data/routeparties/sootopolis.h"
//         };
//         break;
//     default:
//         routepool =
//         {
//             #include "data/routeparties/fallarbor_rustboro.h"
//         };
//         break;
// }

    
    
