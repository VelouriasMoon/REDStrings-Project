#pragma once
#include "CoreMinimal.h"
#include "ETextColor.generated.h"

UENUM(BlueprintType)
enum class ETextColor : uint8 {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    BLUE_GREEN,
    PARAMETER_YELLOW,
    PARAMETER_RED,
    PARAMETER_BLUE,
    RARITY_2,
    RARITY_3,
    RARITY_4,
    LOADING_RED,
    MISSION_RED,
};

