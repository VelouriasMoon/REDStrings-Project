#pragma once
#include "CoreMinimal.h"
#include "EHorizonUIInputMode.generated.h"

UENUM(BlueprintType)
enum class EHorizonUIInputMode : uint8 {
    Invalidated,
    GameAndUI,
    UIOnly,
    GameOnly,
};

