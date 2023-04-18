#pragma once
#include "CoreMinimal.h"
#include "EPlayerDownType.generated.h"

UENUM(BlueprintType)
enum class EPlayerDownType : uint8 {
    Front,
    Back,
    ShockFront,
    ShockBack,
    Dead,
    SpecialDown,
    BrainCrash,
    BrainFieldTimeUp,
};

