#pragma once
#include "CoreMinimal.h"
#include "EHpDownLimitType.generated.h"

UENUM(BlueprintType)
enum class EHpDownLimitType : uint8 {
    NotUse,
    Rate,
    Immediate,
};

