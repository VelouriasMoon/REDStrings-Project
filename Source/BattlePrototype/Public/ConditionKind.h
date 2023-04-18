#pragma once
#include "CoreMinimal.h"
#include "ConditionKind.generated.h"

UENUM(BlueprintType)
enum class ConditionKind : uint8 {
    Flames,
    Ice,
    Tumble,
    DamageFly,
    Faint,
    Destroy,
};

