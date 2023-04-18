#pragma once
#include "CoreMinimal.h"
#include "ELiftFloorInfoId.generated.h"

UENUM(BlueprintType)
enum class ELiftFloorInfoId : uint8 {
    Invalid,
    LC07 = 0x0,
    LC09,
};

