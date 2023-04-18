#pragma once
#include "CoreMinimal.h"
#include "EAnimeInterlockingState.generated.h"

UENUM(BlueprintType)
enum class EAnimeInterlockingState : uint8 {
    Success,
    Loading,
    Error,
    Invalid,
};

