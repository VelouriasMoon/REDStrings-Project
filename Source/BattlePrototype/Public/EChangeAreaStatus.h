#pragma once
#include "CoreMinimal.h"
#include "EChangeAreaStatus.generated.h"

UENUM(BlueprintType)
enum class EChangeAreaStatus : uint8 {
    Invalid,
    RequestedAreaChange,
    StartDynamicLevelUnload,
    StartLBPortalLevelLoad,
    StartLevelsLoad,
    StartLevelVisibleOn,
    StartEventAssetLoad,
    PreStartGame,
    InScene,
    Num,
};

