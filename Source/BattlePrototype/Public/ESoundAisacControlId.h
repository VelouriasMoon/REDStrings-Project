#pragma once
#include "CoreMinimal.h"
#include "ESoundAisacControlId.generated.h"

UENUM(BlueprintType)
enum class ESoundAisacControlId : uint8 {
    None,
    SAS_Accelerate,
    Pitch_down,
    AisacControl02,
    AisacControl03,
    AisacControl04,
    AisacControl05,
    AisacControl06,
    AisacControl07,
    AisacControl08,
    AisacControl09,
    Distance,
    AisacControl11,
    AisacControl12,
    AisacControl13,
    Drive,
    Battle_Location,
    Max,
};

