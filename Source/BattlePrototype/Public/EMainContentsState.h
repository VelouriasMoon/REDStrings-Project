#pragma once
#include "CoreMinimal.h"
#include "EMainContentsState.generated.h"

UENUM(BlueprintType)
enum class EMainContentsState : uint8 {
    None,
    Open,
    Loop,
    Close,
    Information,
};

