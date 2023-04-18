#pragma once
#include "CoreMinimal.h"
#include "E_SASIconStatus.generated.h"

UENUM(BlueprintType)
enum class E_SASIconStatus : uint8 {
    Disable,
    Inactive,
    Active,
    E_MAX UMETA(Hidden),
};

