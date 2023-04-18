#pragma once
#include "CoreMinimal.h"
#include "EnemyKind.generated.h"

UENUM(BlueprintType)
enum class EnemyKind : uint8 {
    Default,
    Kind1,
    Kind2,
    Kind3,
    Kind4,
    Simple1,
    Simple2,
    Simple3,
    Invalid,
};

