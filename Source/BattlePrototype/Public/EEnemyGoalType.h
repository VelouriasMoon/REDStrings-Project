#pragma once
#include "CoreMinimal.h"
#include "EEnemyGoalType.generated.h"

UENUM(BlueprintType)
enum class EEnemyGoalType : uint8 {
    Invalid,
    Character,
    Location,
};

