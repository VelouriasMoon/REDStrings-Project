#pragma once
#include "CoreMinimal.h"
#include "EInterpoLocation_Type_Plugin.generated.h"

UENUM(BlueprintType)
enum class EInterpoLocation_Type_Plugin : uint8 {
    ENUM_DivisiveLoc_Interp,
    ENUM_LegacyLoc_Interp,
    ENUM_MAX UMETA(Hidden),
};

