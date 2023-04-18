#pragma once
#include "CoreMinimal.h"
#include "EOptionDisplayEnemyDamage.generated.h"

UENUM(BlueprintType)
enum class EOptionDisplayEnemyDamage : uint8 {
    On,
    Off,
    Num,
    Default = 0x0,
    EOptionDisplayEnemyDamage_MAX = 0x3,
};

