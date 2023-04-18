#pragma once
#include "CoreMinimal.h"
#include "EEnemyAttractType.generated.h"

UENUM(BlueprintType)
enum class EEnemyAttractType : uint8 {
    Invalid,
    SmallEnemy,
    MediumEnemy,
    LargeEnemy,
    FixEnemy,
};

