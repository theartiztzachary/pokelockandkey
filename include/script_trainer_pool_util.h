#ifndef GUARD_SCRIPT_TRAINER_POOL_UTIL_H
#define GUARD_SCRIPT_TRAINER_POOL_UTIL_H

const struct TrainerMon *CombinePools(const struct Trainer *trainer);
int GetClassPoolSize(const enum TrainerClassID trainerClass);
int GetRoutePoolSize(const enum TrainerUnlockedAt unlockedAt);

#endif // GUARD_SCRIPT_TRAINER_POOL_UTIL_H
