#pragma once
#include "CoreMinimal.h"
#include "EHATETYPE.generated.h"

UENUM(BlueprintType)
enum EHATETYPE {
    Attack,
    FirstAttack,
    DownPlayer,
    DownFriend,
    DownOthers,
    FirstPlayer,
    FirstFriend,
    FirstOthers,
    TargetLockTime,
    TargetLockRange,
    TargetLockUpdateTime,
    TargetLockNearTime,
    TargetLockNearRange,
    TargetLockNearUpdateTime,
    FreeHateNum1,
    FreeHateNum2,
    FreeHateNum3,
    Provoke,
    DecreaseAccumulationHate,
    DecreaseTemporaryHate,
    PlayerHateRate,
    NpcHateRate,
    DefaultBerserkHateRate,
    SubHateRate,
    FlameAddHate,
    ElecAddHate,
    FloodedAddHate,
    OilAddHate,
    ConfusionAddHate,
    Basis,
    BasisDistance,
    BasisPlayer,
};

