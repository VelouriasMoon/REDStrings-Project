#pragma once
#include "CoreMinimal.h"
#include "EWireNeonPlayerState.generated.h"

UENUM(BlueprintType)
enum class EWireNeonPlayerState : uint8 {
    Standard,
    Drive,
    BrainField,
    NexusDrive,
    Max,
};

