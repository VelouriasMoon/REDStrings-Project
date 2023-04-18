#pragma once
#include "CoreMinimal.h"
#include "EBattleSimulatorEnemyDamageAddType.generated.h"

UENUM(BlueprintType)
enum class EBattleSimulatorEnemyDamageAddType : uint8 {
    Default,
    BrainCrash,
    Wince,
    Knockback,
};

