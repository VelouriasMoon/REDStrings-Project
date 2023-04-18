#pragma once
#include "CoreMinimal.h"
#include "EChangeMinimapStateType.generated.h"

UENUM(BlueprintType)
enum class EChangeMinimapStateType : uint8 {
    OnRepop,
    OnAccess,
    OnItemGet,
};

