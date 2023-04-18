#pragma once
#include "CoreMinimal.h"
#include "EPerformShotType.generated.h"

UENUM(BlueprintType)
enum class EPerformShotType : uint8 {
    InterceptChance,
    BrainCrashLastChance,
    JustAvoid,
    SAS_SeeThrough,
    SAS_Accelerator,
    PsychicUnique,
    PsychicCombo,
    RecoverNPC,
    ENPC_SeeThrough,
    Max,
};

