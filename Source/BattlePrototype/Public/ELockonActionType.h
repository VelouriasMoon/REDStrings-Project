#pragma once
#include "CoreMinimal.h"
#include "ELockonActionType.generated.h"

UENUM(BlueprintType)
enum class ELockonActionType : uint8 {
    R1R3,
    R3,
    Num,
    Default = 0x0,
    ELockonActionType_MAX = 0x3,
};

