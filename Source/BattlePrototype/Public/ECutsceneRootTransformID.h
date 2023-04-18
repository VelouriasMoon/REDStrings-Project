#pragma once
#include "CoreMinimal.h"
#include "ECutsceneRootTransformID.generated.h"

UENUM(BlueprintType)
enum class ECutsceneRootTransformID : uint8 {
    BrainField,
    Trigger,
    SpecialAttack,
    Extra,
    PsychicBattle_ElectricPole,
    BrainCrash,
    Max,
};

