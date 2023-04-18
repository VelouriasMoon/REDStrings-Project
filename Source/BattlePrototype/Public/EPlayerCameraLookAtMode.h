#pragma once
#include "CoreMinimal.h"
#include "EPlayerCameraLookAtMode.generated.h"

UENUM(BlueprintType)
enum class EPlayerCameraLookAtMode : uint8 {
    Normal,
    BattleLockOn,
    TestFixOffset,
    Max,
};

