#pragma once
#include "CoreMinimal.h"
#include "EClearGetterReleaseType.generated.h"

UENUM(BlueprintType)
enum class EClearGetterReleaseType : uint8 {
    eInitial,
    eProgress,
    eGameClear,
    eMissionRelease,
    eEnemyDefeated,
    eAssaultVision,
    eCombinationVision,
    eProtectVision,
    eCrashVision,
    eNexusDrive,
    eExNewGame,
    eGetItem,
};

