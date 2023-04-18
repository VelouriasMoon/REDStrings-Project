#pragma once
#include "CoreMinimal.h"
#include "EBattleSituationType.generated.h"

UENUM(BlueprintType)
enum class EBattleSituationType : uint8 {
    Normal,
    Superiority,
    Inferiority,
};

