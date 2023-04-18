#pragma once
#include "CoreMinimal.h"
#include "EUIMain3DPlayerAnimationType.generated.h"

UENUM(BlueprintType)
enum class EUIMain3DPlayerAnimationType : uint8 {
    MPAT_Party,
    MPAT_Weapon,
    MPAT_Costume,
    MPAT_Max,
};

