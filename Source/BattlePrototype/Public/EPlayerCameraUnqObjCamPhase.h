#pragma once
#include "CoreMinimal.h"
#include "EPlayerCameraUnqObjCamPhase.generated.h"

UENUM(BlueprintType)
enum class EPlayerCameraUnqObjCamPhase : uint8 {
    StartLerp,
    Idling,
    EndLerp,
    Max,
};

