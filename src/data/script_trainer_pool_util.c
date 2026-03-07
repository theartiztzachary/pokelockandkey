#include "global.h"



const struct TrainerMon *CombinePools(u16 trainerId)
{

    // const struct Trainer gTrainers[DIFFICULTY_COUNT][TRAINERS_COUNT] =
    // {
    //     #include "data/trainers.h"
    // };
    
    const struct TrainerMon *poolparty;
    const struct TrainerMon *classpool;
    const struct TrainerMon *routepool;
    u8 classlength;
    u8 routelength;
    u8 currentTrainerClass = GetTrainerClassFromId(trainerId);
    u8 currentTrainerRoute = GetTrainerUnlockedFromId(trainerId);

    switch(currentTrainerClass)
    {
        case 0:
            classpool = 
            { 
                #include "data/classparties/hiker.h"
            };
            break;
        case 1:
            classpool = 
            {
                #include "data/classparties/team_aqua.h"
            };
            break;
        case 2:
            classpool =
            {
                #include "data/classparties/pkmn_breeder.h"
            };
            break;
        case 3:
            classpool =
            {
                #include "data/classparties/cooltrainer.h"
            };
            break;
        case 4:
            classpool = 
            {
                #include "data/classparties/bird_keeper.h"
            };
            break;
        case 5:
            classpool =
            {
                #include "data/classparties/collector.h"
            };
            break;
        case 6:
            classpool =
            {
                #include "data/classparties/swimmer_m.h"
            };
            break;
        case 7:
            classpool = 
            {
                #include "data/classparties/team_magma.h"
            };
            break;
        case 8:
            classpool =
            {
                #include "data/classparties/expert.h"
            };
            break;
        case 9:
            classpool = 
            {
                #include "data/classparties/aqua_admin.h"
            };
            break;
        case 10:
            classpool = 
            {
                #include "data/classparties/black_belt.h"
            };
            break;
        case 11:
            classpool =
            {
                #include "data/classparties/aqua_leader.h"
            };
            break;
        case 12:
            classpool = 
            {
                #include "data/classparties/hex_maniac.h"
            };
            break;
        case 11:
            classpool =
            {
                #include "data/classparties/aroma_lady.h"
            };
            break;
        case 12:
            classpool =
            {
                #include "data/classparties/ruin_maniac.h"
            };
            break;
        case 13:
            classpool =
            {
                #include "data/classparties/interviewer.h"
            };
            break;
        case 14:
            classpool =
            {
                #include "data/classparties/tuber_f.h"
            };
            break;
        case 15:
            classpool =
            {
                #include "data/classparties/tuber_m.h"
            };
            break;
        case 16:
            classpool =
            {
                #include "data/classparties/lady.h"
            };
            break;
        case 17:
            classpool =
            {
                #include "data/classparties/beauty.h"
            };
            break;
        case 18:
            classpool =
            {
                #include "data/classparties/rich_boy.h"
            };
            break;
        case 19:
            classpool =
            {
                #include "data/classparties/pokemaniac.h"
            };
            break;
        case 20:
            classpool =
            {
                #include "data/classparties/guitarist.h"
            };
            break;
        case 21:
            classpool =
            {
                #include "data/classparties/kindler.h"
            };
            break;
        case 22:
            classpool =
            {
                #include "data/classparties/camper.h"
            };
            break;
        case 23:
            classpool = 
            {
                #include "data/classparties/picnicker.h"
            };
            break;
        case 24:
            classpool =
            {
                #include "data/classparties/bug_maniac.h"
            };
            break;
        case 25:
            classpool =
            {
                #include "data/classparties/psychic.h"
            };
            break;
        case 26:
            classpool =
            {
                #include "data/classparties/gentleman.h"
            };
            break;
        case 27:
            classpool =
            {
                #include "data/classparties/elite_four.h"
            };
            break;
        case 28:
            classpool =
            {
                #include "data/classparties/leader.h"
            };
            break;
        case 29:
            classpool =
            {
                #include "data/classparties/school_kid.h"
            };
            break;
        case 30:
            classpool =
            {
                #include "data/classparties/sr_and_jr.h"
            };
            break;
        case 31:
            classpool =
            {
                #include "data/classparties/winstrate.h"
            };
            break;
        case 32:
            classpool =
            {
                #include "data/classparties/pokefan.h"
            };
            break;
        case 33:
            classpool =
            {
                #include "data/classparties/youngster.h"
            };
            break;
        case 34:
            classpool =
            {
                #include "data/classparties/champion.h"
            };
            break;
        case 35:
            classpool =
            {
                #include "data/classparties/fisherman.h"
            };
            break;
        case 36:
            classpool =
            {
                #include "data/classparties/triathlete.h"
            };
            break;
        case 37:
            classpool =
            {
                #include "data/classparties/dragon_tamer.h"
            };
            break;
        case 38:
            classpool =
            {
                #include "data/classparties/ninja_boy.h"
            };
            break;
        case 39:
            classpool =
            {
                #include "data/classparties/battle_girl.h"
            };
            break;
        case 40:
            classpool =
            {
                #include "data/classparties/parasol_lady.h"
            };
            break;
        case 41:
            classpool =
            {
                #include "data/classparties/swimmer_f.h"
            };
            break;
        case 42:
            classpool =
            {
                #include "data/classparties/twins.h"
            };
            break;
        case 43:
            classpool =
            {
                #include "data/classparties/sailor.h"
            };
            break;
        case 44:
            classpool =
            {
                #include "data/classparties/cooltrainer_2.h"
            };
            break;
        case 45:
            classpool =
            {
                #include "data/classparties/magma_admin.h"
            };
            break;
        case 46:
            classpool = 
            {
                #include "data/classparties/rival.h"
            };
            break;
        case 47:
            classpool =
            {
                #include "data/classparties/bug_catcher.h"
            };
            break;
        case 48:
            classpool =
            {
                #include "data/classparties/pkmn_ranger.h"
            };
            break;
        case 49:
            classpool =
            {
                #include "data/classparties/magma_leader.h"
            };
            break;
        case 50:
            classpool =
            {
                #include "data/classparties/lass.h"
            };
            break;
        case 51:
            classpool =
            {
                #include "data/classparties/young_couple.h"
            };
            break;
        case 52:
            classpool =
            {
                #include "data/classparties/old_couple.h"
            };
            break;
        case 53:
            classpool =
            {
                #include "data/classparties/sis_and_bro.h"
            };
            break;
        case 54:
            classpool =
            {
                #include "data/classparties/salon_maiden.h"
            };
        case 55:
            classpool =
            {
                #include "data/classparties/arena_tycoon.h"
            };
            break;
        case 56:
            classpool =
            {
                #include "data/classparties/factory_head.h"
            };
            break;
        case 57:
            classpool =
            {
                #include "data/classparties/pike_queen.h"
            };
            break;
        case 58:
            classpool =
            {
                #include "data/classparties/pyramid_king.h"
            };
            break;
        case 59:
            classpool =
            {
                #include "data/classparties/rs_protag.h"
            };
            break;
        default:
            classpool =
            {
                #include "data/classparties/collector.h"
            };
            break;
    }

    switch (currentTrainerRoute)
    {
        case 0:
            routepool =
            {
                #include "data/routeparties/fallarbor_rustboro.h"
            };
            break;
        case 1:
            routepool =
            {
                #include "data/routeparties/fallarbor_lavaridge.h"
            };
            break;
        case 2:
            routepool =
            {
                #include "data/routeparties/rustboro_mauville.h"
            };
            break;
        case 3:
            routepool =
            {
                #include "data/routeparties/lavaridge_mauville.h"
            };
            break;
        case 4:
            routepool =
            {
                #include "data/routeparties/rustboro_petalburg.h"
            };
            break;
        case 5:
            routepool =
            {
                #include "data/routeparties/petalburg_dewford.h"
            };
            break;
        case 6:
            routepool =
            {
                #include "data/routeparties/dewford_slateport.h"
            };
            break;
        case 7:
            routepool =
            {
                #include "data/routeparties/petalburg_slateport.h"
            };
            break;
        case 8:
            routepool =
            {
                #include "data/routeparties/slateport_mauville.h"
            };
            break;
        case 9:
            routepool =
            {
                #include "data/routeparties/lavaridge_fortree.h"
            };
            break;
        case 10:
            routepool =
            {
                #include "data/routeparties/mauville_mtpyre.h"
            };
            break;
        case 11:
            routepool =
            {
                #include "data/routeparties/fortree_mtpyre.h"
            };
            break;
        case 12:
            routepool =
            {
                #include "data/routeparties/mtpyre_lilycove.h"
            };
            breka;
        case 13:
            routepool =
            {
                #include "data/routeparties/lilycove_mossdeep.h"
            };
            break;
        case 14:
            routepoool =
            {
                #include "data/routeparties/slateport_mossdeep.h"
            };
            break;
        case 15:
            routepool =
            {
                #include "data/routeparties/fallarbor.h"
            };
            break;
        case 16:
            routepool =
            {
                #include "data/routeparties/rustboro.h"
            };
            break;
        case 17:
            routepool =
            {
                #include "data/routeparties/petalburg.h"
            };
            break;
        case 18:
            routepool =
            {
                #include "data/routeparties/dewford.h"
            };
            break;
        case 19:
            routepool = 
            {
                #include "data/routeparties/slateport.h"
            };
            break;
        case 20:
            routepool =
            {
                #include "data/routeparties/mauville.h"
            };
            break;
        case 21:
            routepool =
            {
                #include "data/routeparties/lavaridge.h"
            };
            break;
        case 22:
            routepool =
            {
                #include "data/routeparties/fortree.h"
            };
            break;
        case 23:
            routepool =
            {
                #include "data/routeparties/mtpyre.h"
            };
            break;
        case 24:
            routepool =
            {
                #include "data/routeparties/lilycove.h"
            };
            break;
        case 25:
            routepool =
            {
                #include "data/routeparties/mossdeep.h"
            };
            break;
        case 26:
            routepool =
            {
                #include "data/routeparties/sootopolis.h"
            };
            break;
        default:
            routepool =
            {
                #include "data/routeparties/fallarbor_rustboro.h"
            };
            break;
    }

    size_t classlength = sizeof(classpool) / sizeof(classpool[0]);
    size_t routelength = sizeof(routepool) / sizeof(routepool[0]);
    poolparty = (TrainerMon*)malloc(sizeof(TrainerMon) * classlength * routelength);
    memcpy(poolparty, classpool, classlength * sizeof(TrainerMon));
    memcpy(poolpary + classlength, routepool, routepool * sizeof(TrainerMon));
    
    return poolparty;

};