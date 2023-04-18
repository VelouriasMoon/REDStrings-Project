#pragma once
#include "CoreMinimal.h"
#include "EPlayerCameraMode.generated.h"

UENUM(BlueprintType)
enum class EPlayerCameraMode : uint8 {
    PlayerCamera,
    CutEvent,
    SceneEvent,
    Max,
};

