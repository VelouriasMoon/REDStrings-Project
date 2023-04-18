#pragma once
#include "CoreMinimal.h"
#include "EPerformShotState.generated.h"

UENUM(BlueprintType)
enum class EPerformShotState : uint8 {
    PerformShotState_Invalid,
    PerformShotState_Start,
    PerformShotState_Loop,
    PerformShotState_Finish,
    PerformShotState_MAX UMETA(Hidden),
};

