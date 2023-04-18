#pragma once
#include "CoreMinimal.h"
#include "EEnemyThinkActionType.generated.h"

UENUM(BlueprintType)
enum class EEnemyThinkActionType : uint8 {
    Default,
    Move,
    Action,
    Attack,
    Unique,
};

