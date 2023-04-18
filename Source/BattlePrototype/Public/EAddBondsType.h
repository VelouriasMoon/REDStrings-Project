#pragma once
#include "CoreMinimal.h"
#include "EAddBondsType.generated.h"

UENUM(BlueprintType)
enum class EAddBondsType : uint8 {
    KillEnemy,
    Revive,
    Recovery,
};

