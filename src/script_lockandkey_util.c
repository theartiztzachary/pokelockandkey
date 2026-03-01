#include "global.h"
#include "constants/vars.h"
#include "event_data.h"
#include "data.h"

//OH BOY THANKS C
#include "src/data/routeparties/dewford_slateport.h";

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

void CombinePools(const struct Trainer *trainer)
{
    const struct TrainerMon *poolparty;





    //combine the two pools into one
    //set pool size based on the array and return that array

};


