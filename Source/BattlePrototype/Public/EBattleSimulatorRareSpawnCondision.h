#pragma once
#include "CoreMinimal.h"
#include "EBattleSimulatorRareSpawnCondision.generated.h"

UENUM(BlueprintType)
enum class EBattleSimulatorRareSpawnCondision : uint8 {
    None,
    EnemyDamage,
    PlayerDamage,
    BrainCrash,
    ClearTime,
    UseItem,
    PlayerBadStatus,
    Kill_Drive,
    Kill_CombinationVision,
    Kill_UniqueObject,
    EnemyBadStatus,
    HitUniqueObject,
    EnemyHpRate,
};

