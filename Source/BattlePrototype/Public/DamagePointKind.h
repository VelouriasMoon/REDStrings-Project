#pragma once
#include "CoreMinimal.h"
#include "DamagePointKind.generated.h"

UENUM(BlueprintType)
enum class DamagePointKind : uint8 {
    Default,
    Enemy,
};

