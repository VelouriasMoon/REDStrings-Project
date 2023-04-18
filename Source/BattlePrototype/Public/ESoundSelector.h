#pragma once
#include "CoreMinimal.h"
#include "ESoundSelector.generated.h"

UENUM(BlueprintType)
enum class ESoundSelector : uint8 {
    None,
    TrackTransition,
    Max,
};

