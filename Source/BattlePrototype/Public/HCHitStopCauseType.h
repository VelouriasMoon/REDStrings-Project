#pragma once
#include "CoreMinimal.h"
#include "HCHitStopCauseType.generated.h"

UENUM(BlueprintType)
enum class HCHitStopCauseType : uint8 {
    Default,
    None,
    PsychicObjPullAttack,
    BrainFieldPsychicObjAttack,
    UniqueObjHitInvincible,
};

