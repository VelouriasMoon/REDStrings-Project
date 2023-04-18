#pragma once
#include "CoreMinimal.h"
#include "EDebugCharacterPresetState.generated.h"

UENUM(BlueprintType)
enum class EDebugCharacterPresetState : uint8 {
    NotEntry,
    Entry,
    Remove,
};

