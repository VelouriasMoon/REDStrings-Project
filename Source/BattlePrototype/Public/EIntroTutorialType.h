#pragma once
#include "CoreMinimal.h"
#include "EIntroTutorialType.generated.h"

UENUM(BlueprintType)
enum class EIntroTutorialType : uint8 {
    Invalid,
    Move,
    Jump,
    PKAttack,
    LockOn,
    WPAttack,
    Step,
    TargetChange,
    UpAttack,
    Dash,
    StepIn,
    ChaseAttack,
    SpecialAttack,
};

