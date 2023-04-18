#pragma once
#include "CoreMinimal.h"
#include "ESoundFadeState.generated.h"

UENUM(BlueprintType)
enum class ESoundFadeState : uint8 {
    None,
    FadeIn,
    FadeInEnd,
    FadeOut,
    FadeOutEnd,
    End,
    Max,
};

