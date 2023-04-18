#pragma once
#include "CoreMinimal.h"
#include "EEnemyTickPriorityType.generated.h"

UENUM(BlueprintType)
enum class EEnemyTickPriorityType : uint8 {
    Default,
    Everytime,
    SometimeTop,
    SometimeMiddle,
    SometimeBottom,
};

