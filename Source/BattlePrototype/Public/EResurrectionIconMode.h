#pragma once
#include "CoreMinimal.h"
#include "EResurrectionIconMode.generated.h"

UENUM(BlueprintType)
enum class EResurrectionIconMode : uint8 {
    End,
    Near,
    Active,
    Execute,
};

