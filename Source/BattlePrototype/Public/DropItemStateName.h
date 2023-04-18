#pragma once
#include "CoreMinimal.h"
#include "DropItemStateName.generated.h"

UENUM(BlueprintType)
enum class DropItemStateName : uint8 {
    dsNon,
    dsDrop,
    dsLanding,
    dsAdsorption,
};

