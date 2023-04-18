#pragma once
#include "CoreMinimal.h"
#include "EGeneralDistance.generated.h"

UENUM(BlueprintType)
enum class EGeneralDistance : uint8 {
    Near,
    Normal,
    Far,
};

