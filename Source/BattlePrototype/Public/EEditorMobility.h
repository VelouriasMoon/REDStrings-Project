#pragma once
#include "CoreMinimal.h"
#include "EEditorMobility.generated.h"

UENUM(BlueprintType)
enum class EEditorMobility : uint8 {
    Static,
    Stationary,
    Movable,
};

