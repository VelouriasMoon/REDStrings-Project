#pragma once
#include "CoreMinimal.h"
#include "ESaveLoadSubType.generated.h"

UENUM(BlueprintType)
enum class ESaveLoadSubType : uint8 {
    NormalMode,
    EXMode,
};

