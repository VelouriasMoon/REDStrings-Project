#pragma once
#include "CoreMinimal.h"
#include "EPsychicObjectUniqueMontageIndex.generated.h"

UENUM(BlueprintType)
enum class EPsychicObjectUniqueMontageIndex : uint8 {
    Capture,
    CaptureFinish,
    FirstAttack,
    UniqueAttack1,
    UniqueAttack2,
    UniqueAttack3,
    InputFailure,
    Max,
};

