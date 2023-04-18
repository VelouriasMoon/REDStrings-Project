#pragma once
#include "CoreMinimal.h"
#include "ETrgEffMode.generated.h"

UENUM(BlueprintType)
enum class ETrgEffMode : uint8 {
    Off,
    Feedback,
    Weapon,
    Vibration,
};

