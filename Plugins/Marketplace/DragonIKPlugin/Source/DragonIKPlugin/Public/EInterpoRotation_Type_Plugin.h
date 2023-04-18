#pragma once
#include "CoreMinimal.h"
#include "EInterpoRotation_Type_Plugin.generated.h"

UENUM(BlueprintType)
enum class EInterpoRotation_Type_Plugin : uint8 {
    ENUM_DivisiveRot_Interp,
    ENUM_LegacyRot_Interp,
    ENUM_MAX UMETA(Hidden),
};

