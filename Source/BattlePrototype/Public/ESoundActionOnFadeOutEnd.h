#pragma once
#include "CoreMinimal.h"
#include "ESoundActionOnFadeOutEnd.generated.h"

UENUM(BlueprintType)
enum class ESoundActionOnFadeOutEnd : uint8 {
    None,
    Stop,
    Pause,
};

