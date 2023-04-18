#pragma once
#include "CoreMinimal.h"
#include "HCRestictedHitStopType.generated.h"

UENUM(BlueprintType)
enum class HCRestictedHitStopType : uint8 {
    None,
    Short,
    Middle,
    Large,
    XLarge,
    XXLarge,
};

