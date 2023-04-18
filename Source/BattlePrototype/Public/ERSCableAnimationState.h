#pragma once
#include "CoreMinimal.h"
#include "ERSCableAnimationState.generated.h"

UENUM(BlueprintType)
enum class ERSCableAnimationState : uint8 {
    Normal,
    Sprint,
    Max,
};

