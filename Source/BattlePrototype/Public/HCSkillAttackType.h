#pragma once
#include "CoreMinimal.h"
#include "HCSkillAttackType.generated.h"

UENUM(BlueprintType)
enum class HCSkillAttackType : uint8 {
    Default,
    Physics,
    Psychic,
    Obj,
    Etc,
    MapGimmick,
};

