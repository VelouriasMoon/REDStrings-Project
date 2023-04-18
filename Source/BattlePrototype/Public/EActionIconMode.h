#pragma once
#include "CoreMinimal.h"
#include "EActionIconMode.generated.h"

UENUM(BlueprintType)
enum class EActionIconMode : uint8 {
    End,
    Near,
    Actionable,
    Decide,
};

