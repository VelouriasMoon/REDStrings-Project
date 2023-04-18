#pragma once
#include "CoreMinimal.h"
#include "ENpcDriveCheckType.generated.h"

UENUM(BlueprintType)
enum class ENpcDriveCheckType : uint8 {
    BattleStart,
    TargetDamageReaction,
    DriveMax,
    PlayerHP30,
    PlayerHP20,
    PlayerHP10,
    CrashVision,
    DefeatedCombinationVision,
    DefeatedCombinationVisionAndPlayerDrive,
};

