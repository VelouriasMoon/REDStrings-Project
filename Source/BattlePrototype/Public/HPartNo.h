#pragma once
#include "CoreMinimal.h"
#include "HPartNo.generated.h"

UENUM(BlueprintType)
enum class HPartNo : uint8 {
    Default,
    Head,
    UpperBody,
    LowerBody,
    RightHand,
    LeftHand,
    RightFoot,
    LeftFoot,
    WeakPoint,
    AddPart1,
    AddPart2,
    AddPart3,
    AddPart4,
    AddPart5,
};

