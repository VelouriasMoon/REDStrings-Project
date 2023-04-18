#pragma once
#include "CoreMinimal.h"
#include "EPsychicObjectButtonType.generated.h"

UENUM(BlueprintType)
enum class EPsychicObjectButtonType : uint8 {
    Throw,
    Drop,
    Swing,
    Unique,
    ThrowAll,
    Max,
};

