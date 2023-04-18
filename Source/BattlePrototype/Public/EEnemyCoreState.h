#pragma once
#include "CoreMinimal.h"
#include "EEnemyCoreState.generated.h"

UENUM(BlueprintType)
enum class EEnemyCoreState : uint8 {
    Free,
    Spawn,
    Stay,
    DestroyWait,
    Destroy,
    BrainCrash,
    BrainCrashVanish,
    BrainCrashEnd,
};

