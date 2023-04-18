#pragma once
#include "CoreMinimal.h"
#include "ERefPosePluginEnum.generated.h"

UENUM(BlueprintType)
enum class ERefPosePluginEnum : uint8 {
    VE_Animated,
    VE_Rest,
    VE_MAX UMETA(Hidden),
};

