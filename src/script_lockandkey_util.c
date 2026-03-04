#include "global.h"
#include "constants/vars.h"
#include "event_data.h"
#include "data.h"

void IncrementPlayerKeys(void)
{
    u16 i;
    i = *GetVarPointer(VAR_NUMBER_OF_KEYS);
    i += 1;
    VarSet(VAR_NUMBER_OF_KEYS, i);

};

void DecrementPlayerKeys(void)
{

    u16 i;
    i = *GetVarPointer(VAR_NUMBER_OF_KEYS);
    i -= 1;
    VarSet(VAR_NUMBER_OF_KEYS, i);

};

void IncrementWorldLevel(void)
{
    u16 i;
    i = *GetVarPointer(VAR_WORLD_DIFFICULTY);
    i += 1;
    VarSet(VAR_WORLD_DIFFICULTY, i);

};

void RollBossParties(void)
{

};

void CombinePools(u16 trainerId)
{
    const struct TrainerMon *poolparty;
    const struct TrainerMon *classpool;
    const struct TrainerMon *routepool;
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
            
    }
    


    //combine the two pools into one
    //set pool size based on the array and return that array

};


