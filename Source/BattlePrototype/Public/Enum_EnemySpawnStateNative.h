#pragma once
#include "CoreMinimal.h"
#include "Enum_EnemySpawnStateNative.generated.h"

UENUM(BlueprintType)
enum class Enum_EnemySpawnStateNative : uint8 {
    None,
    Wait,
    Start,
    Update,
    End,
    Enum_MAX UMETA(Hidden),
};

