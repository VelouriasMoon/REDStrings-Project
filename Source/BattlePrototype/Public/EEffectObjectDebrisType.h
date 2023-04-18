#pragma once
#include "CoreMinimal.h"
#include "EEffectObjectDebrisType.generated.h"

UENUM(BlueprintType)
enum class EEffectObjectDebrisType : uint8 {
    Small,
    Medium,
    Large,
    Num,
};

