#pragma once
#include "CoreMinimal.h"
#include "ERSCableGravityType.generated.h"

UENUM(BlueprintType)
enum class ERSCableGravityType : uint8 {
    None,
    Capture,
    Run,
    Dash,
    HeavyGravity,
    BrainCrash,
};

