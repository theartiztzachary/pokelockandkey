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
const int school_kidLength = 1;
const int sr_and_jrLength = 1;
const int winstrateLength = 1;
const int pokefanLength = 1;
const int youngsterLength = 1;
const int championLength = 1;
const int fishermanLength = 1;
const int triathleteLength = 1;
const int dragon_tamerLength = 1;
const int ninja_boyLength = 1;
const int battle_girlLength = 1;
const int parasol_ladyLength = 1;
const int swimmer_fLength = 1;
const int twinsLength = 1;
const int sailorLength = 1;
const int cooltrainer_2Length = 1;
const int magma_adminLength = 1;
const int rivalLength = 1;
const int bug_catcherLength = 1;
const int pkmn_rangerLength = 1;
const int magma_leaderLength = 1;
const int lassLength = 1;
const int young_coupleLength = 1;
const int old_coupleLength = 1;
const int sis_and_broLength = 1;
const int salon_maidenLength = 1;
const int arena_tycoonLength = 1;
const int factory_headLength = 1;
const int pike_queenLength = 1;
const int pyramid_kingLength = 1;
const int rs_protagLength = 1;

//route
const int fallarbor_rustboroLength = 1;
const int fallarbor_lavaridgeLength = 1;
const int rustboro_mauvilleLength = 1;
const int lavaridge_mauvilleLength = 1;
const int rustboro_petalburgLength = 1;
const int petalburg_dewfordLength = 1;
const int dewford_slateportLength = 1;
const int petalburg_slateportLength = 1;
const int slateport_mauvilleLength = 1;
const int lavaridge_fortreeLength = 1;
const int mauville_mtpyreLength = 1;

//initialize pools
//class
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

const struct TrainerMon ClassParty_School_Kid[1] =
{
    #include "data/classparties/school_kid.h"
};

const struct TrainerMon ClassParty_Sr_And_Jr[1] =
{
    #include "data/classparties/sr_and_jr.h"
};

const struct TrainerMon ClassParty_Winstrate[1] =
{
    #include "data/classparties/winstrate.h"
};

const struct TrainerMon ClassParty_Pokefan[1] =
{
    #include "data/classparties/pokefan.h"
};

const struct TrainerMon ClassParty_Youngster[1] =
{
    #include "data/classparties/youngster.h"
};

const struct TrainerMon ClassParty_Champion[1] =
{
    #include "data/classparties/champion.h"
};

const struct TrainerMon ClassParty_Fisherman[1] =
{
    #include "data/classparties/fisherman.h"
};

const struct TrainerMon ClassParty_Triathlete[1] =
{
    #include "data/classparties/triathlete.h"
};

const struct TrainerMon ClassParty_Dragon_Tamer[1] =
{
    #include "data/classparties/dragon_tamer.h"
};

const struct TrainerMon ClassParty_Ninja_Boy[1] =
{
    #include "data/classparties/ninja_boy.h"
};

const struct TrainerMon ClassParty_Battle_Girl[1] =
{
    #include "data/classparties/battle_girl.h"
};

const struct TrainerMon ClassParty_Parasol_Lady[1] =
{
    #include "data/classparties/parasol_lady.h"
};

const struct TrainerMon ClassParty_Swimmer_F[1] =
{
    #include "data/classparties/swimmer_f.h"
};

const struct TrainerMon ClassParty_Twins[1] =
{
    #include "data/classparties/twins.h"
};

const struct TrainerMon ClassParty_Sailor[1] =
{
    #include "data/classparties/sailor.h"
};

const struct TrainerMon ClassParty_Cooltrainer_2[1] =
{
    #include "data/classparties/cooltrainer_2.h"
};

const struct TrainerMon ClassParty_Magma_Admin[1] =
{
    #include "data/classparties/magma_admin.h"
};

const struct TrainerMon ClassParty_Rival[1] =
{
    #include "data/classparties/rival.h"
};

const struct TrainerMon ClassParty_Bug_Catcher[1] =
{
    #include "data/classparties/bug_catcher.h"
};

const struct TrainerMon ClassParty_Pkmn_Ranger[1] =
{
    #include "data/classparties/pkmn_ranger.h"
};

const struct TrainerMon ClassParty_Magma_Leader[1] =
{
    #include "data/classparties/magma_leader.h"
};

const struct TrainerMon ClassParty_Lass[1] =
{
    #include "data/classparties/lass.h"
};

const struct TrainerMon ClassParty_Young_Couple[1] =
{
    #include "data/classparties/young_couple.h"
};

const struct TrainerMon ClassParty_Old_Couple[1] =
{
    #include "data/classparties/old_couple.h"
};

const struct TrainerMon ClassParty_Sis_And_Bro[1] =
{
    #include "data/classparties/sis_and_bro.h"
};

const struct TrainerMon ClassParty_Salon_Maiden[1] =
{
    #include "data/classparties/salon_maiden.h"
};

const struct TrainerMon ClassParty_Arena_Tycoon[1] =
{
    #include "data/classparties/arena_tycoon.h"
};

const struct TrainerMon ClassParty_Factory_Head[1] =
{
    #include "data/classparties/factory_head.h"
};

const struct TrainerMon ClassParty_Pike_Queen[1] =
{
    #include "data/classparties/pike_queen.h"
};

const struct TrainerMon ClassParty_Pyramid_King[1] =
{
    #include "data/classparties/pyramid_king.h"
};

const struct TrainerMon ClassParty_Rs_Protag[1] =
{
    #include "data/classparties/rs_protag.h"
};

//routes
const struct TrainerMon RouteParty_Fallarbor_Rustboro[1] =
{
    #include "data/routeparties/fallarbor_rustboro.h"
};

const struct TrainerMon RouteParty_Fallarbor_Lavaridge[1] =
{
    #include "data/routeparties/fallarbor_lavaridge.h"
};

const struct TrainerMon RouteParty_Rustboro_Mauville[1] =
{
    #include "data/routeparties/rustboro_mauville.h"
};

const struct TrainerMon RouteParty_Lavaridge_Mauville[1] =
{
    #include "data/routeparties/lavaridge_mauville.h"
};

const struct TrainerMon RouteParty_Rustboro_Petalburg[1] =
{
    #include "data/routeparties/rustboro_petalburg.h"
};

const struct TrainerMon RouteParty_Petalburg_Dewford[1] =
{
    #include "data/routeparties/petalburg_dewford.h"
};

const struct TrainerMon RouteParty_Dewford_Slateport[1] =
{
    #include "data/routeparties/dewford_slateport.h"
};

const struct TrainerMon RouteParty_Petalburg_Slateport[1] =
{
    #include "data/routeparties/petalburg_slateport.h"
};

const struct TrainerMon RouteParty_Slateport_Mauville[1] =
{
    #include "data/routeparties/slateport_mauville.h"
};

const struct TrainerMon RouteParty_Lavaridge_Fortree[1] =
{
    #include "data/routeparties/lavaridge_fortree.h"
};

const struct TrainerMon RouteParty_Mauville_Mtpyre[1] =
{
    #include "data/routeparties/mauville_mtpyre.h"
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
        case 31: //school kid
            return school_kidLength;
            break;
        case 32: // sr and jr
            return sr_and_jrLength;
            break;
        case 33: //winstrate
            return winstrateLength;
            break;
        case 34: //pokefan
            return pokefanLength;
            break;
        case 35: //youngster
            return youngsterLength;
            break;
        case 36: //champion
            return championLength;
            break;
        case 37: //fisherman
            return fishermanLength;
            break;
        case 38: //triathlete
            return triathleteLength;
            break;
        case 39: //dragon tamer
            return dragon_tamerLength;
            break;
        case 40: //ninja boy
            return ninja_boyLength;
            break;
        case 41: //battle girl
            return battle_girlLength;
            break;
        case 42: //parasol lady
            return parasol_ladyLength;
            break;
        case 43: //swimmer f
            return swimmer_fLength;
            break;
        case 44: //twins
            return twinsLength;
            break;
        case 45: //sailor
            return sailorLength;
            break;
        case 46: //cool trainer 2
            return cooltrainer_2Length;
            break;
        case 47: //magma admin
            return magma_adminLength;
            break;
        case 48: //rival
            return rivalLength;
            break;
        case 49: //bug catcher
            return bug_catcherLength;
            break;
        case 50: //pkmn ranger
            return pkmn_rangerLength;
            break;
        case 51: //magma leader
            return magma_leaderLength;
            break;
        case 52: //lass
            return lassLength;
            break;
        case 53: //young couple
            return young_coupleLength;
            break;
        case 54: //old couple
            return old_coupleLength;
            break;
        case 55: //sis and bro
            return sis_and_broLength;
            break;
        case 56: //salon maiden
            return salon_maidenLength;
            break;
        case 57: //arena tycoon
            return arena_tycoonLength;
            break;
        case 58: //factory head
            return factory_headLength;
            break;
        case 59: //pike queen
            return pike_queenLength;
            break;
        case 60: //pyramid king
            return pyramid_kingLength;
            break;
        case 61: //rs protag
            return rs_protagLength;
            break;
        default:
            return 1;
            break;
    };

    return 1;
};

int GetRoutePoolSize(u16 trainerId) 
{
    u8 currentTrainerRoute = GetTrainerUnlockedFromId(trainerId);

    switch (currentTrainerRoute)
    {
        case 0:
            return fallarbor_rustboroLength;
            break;
        case 1:
            return fallarbor_lavaridgeLength;
            break;
        case 2:
            return rustboro_mauvilleLength;
            break;
        case 3:
            return lavaridge_mauvilleLength;
            break;
        case 4:
            return rustboro_petalburgLength;
            break;
        case 5:
            return petalburg_dewfordLength;
            break;
        case 6:
            return dewford_slateportLength;
            break;
        case 7:
            return petalburg_slateportLength;
            break;
        case 8:
            return slateport_mauvilleLength;
            break;
        case 9:
            return lavaridge_fortreeLength;
            break;
        case 10:
            return mauville_mtpyreLength;
            break;
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
        case 31: //school kid
            memcpy(poolparty, ClassParty_School_Kid, classPoolSize);
            break;
        case 32: //sr and jr
            memcpy(poolparty, ClassParty_Sr_And_Jr, classPoolSize);
            break;
        case 33: //winstrate
            memcpy(poolparty, ClassParty_Winstrate, classPoolSize);
            break;
        case 34: //pokefan
            memcpy(poolparty, ClassParty_Pokefan, classPoolSize);
            break;
        case 35: //youngster
            memcpy(poolparty, ClassParty_Youngster, classPoolSize);
            break;
        case 36: //champion
            memcpy(poolparty, ClassParty_Champion, classPoolSize);
            break;
        case 37: //fisherman
            memcpy(poolparty, ClassParty_Fisherman, classPoolSize);
            break;
        case 38: //triathlete
            memcpy(poolparty, ClassParty_Triathlete, classPoolSize);
            break;
        case 39: //dragon tamer
            memcpy(poolparty, ClassParty_Dragon_Tamer, classPoolSize);
            break;
        case 40: //ninja boy
            memcpy(poolparty, ClassParty_Ninja_Boy, classPoolSize);
            break;
        case 41: //battle girl
            memcpy(poolparty, ClassParty_Battle_Girl, classPoolSize);
            break;
        case 42: //parasol lady
            memcpy(poolparty, ClassParty_Parasol_Lady, classPoolSize);
            break;
        case 43: //swimmer f
            memcpy(poolparty, ClassParty_Swimmer_F, classPoolSize);
            break;
        case 44: //twins
            memcpy(poolparty, ClassParty_Twins, classPoolSize);
            break;
        case 45: //sailor
            memcpy(poolparty, ClassParty_Sailor, classPoolSize);
            break;
        case 46: //cool trainer 2
            memcpy(poolparty, ClassParty_Cooltrainer_2, classPoolSize);
            break;
        case 47: //magma admin
            memcpy(poolparty, ClassParty_Magma_Admin, classPoolSize);
            break;
        case 48: //rival
            memcpy(poolparty, ClassParty_Rival, classPoolSize);
            break;
        case 49: //bug catchter
            memcpy(poolparty, ClassParty_Bug_Catcher, classPoolSize);
            break;
        case 50: //pkmn ranger
            memcpy(poolparty, ClassParty_Pkmn_Ranger, classPoolSize);
            break;
        case 51: //magma leader
            memcpy(poolparty, ClassParty_Magma_Leader, classPoolSize);
            break;
        case 52: //lass
            memcpy(poolparty, ClassParty_Lass, classPoolSize);
            break;
        case 53: //young couple
            memcpy(poolparty, ClassParty_Young_Couple, classPoolSize);
            break;
        case 54: //old couple
            memcpy(poolparty, ClassParty_Old_Couple, classPoolSize);
            break;
        case 55: //sis and bro
            memcpy(poolparty, ClassParty_Sis_And_Bro, classPoolSize);
            break;
        case 56: //salon maiden
            memcpy(poolparty, ClassParty_Salon_Maiden, classPoolSize);
            break;
        case 57: //arena tycoon
            memcpy(poolparty, ClassParty_Arena_Tycoon, classPoolSize);
            break;
        case 58: //factory head
            memcpy(poolparty, ClassParty_Factory_Head, classPoolSize);
            break;
        case 59: //pike queen
            memcpy(poolparty, ClassParty_Pike_Queen, classPoolSize);
            break;
        case 60: //pyramid king
            memcpy(poolparty, ClassParty_Pyramid_King, classPoolSize);
            break;
        case 61: //rs protag
            memcpy(poolparty, ClassParty_Rs_Protag, classPoolSize);
            break;
        default: 
            memcpy(poolparty, ClassParty_Fisherman, classPoolSize);
            break;
    };

    switch(currentTrainerRoute)
    {
        case 0: // fallarbor_rustboro
            memcpy(poolparty + classPoolSize, RouteParty_Fallarbor_Rustboro, routePoolSize);
            break;
        case 1: //fallarbor_lavardige
            memcpy(poolparty + classPoolSize, RouteParty_Fallarbor_Lavaridge, routePoolSize);
            break;
        case 2: //rustboro_mauville
            memcpy(poolparty + classPoolSize, RouteParty_Rustboro_Mauville, routePoolSize);
            break;
        case 3: //lavaridge_mauville
            memcpy(poolparty + classPoolSize, RouteParty_Lavaridge_Mauville, routePoolSize);
            break;
        case 4: //rustboro_petalburg
            memcpy(poolparty + classPoolSize, RouteParty_Rustboro_Petalburg, routePoolSize);
            break;
        case 5: //petalburg_dewford
            memcpy(poolparty + classPoolSize, RouteParty_Petalburg_Dewford, routePoolSize);
            break;
        case 6: //dewford_slateport
            memcpy(poolparty + classPoolSize, RouteParty_Dewford_Slateport, routePoolSize);
            break;
        case 7: //petalburg_slateport
            memcpy(poolparty + classPoolSize, RouteParty_Petalburg_Slateport, routePoolSize);
            break;
        case 8: //slateport_mauville
            memcpy(poolparty + classPoolSize, RouteParty_Slateport_Mauville, routePoolSize);
            break;
        case 9: //lavaridge_fortree
            memcpy(poolparty, classPoolSize, RouteParty_Lavaridge_Fortree, routePoolSize);
            break;
        case 10: //mauville_mtpyre
            memcpy(poolparty, classPoolSize, RouteParty_Mauville_Mtpyre, routePoolSize);
            break;
    };


    return *poolparty;
};

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

    
    
