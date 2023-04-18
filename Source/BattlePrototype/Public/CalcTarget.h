#pragma once
#include "CoreMinimal.h"
#include "CalcTarget.generated.h"

UENUM(BlueprintType)
enum class CalcTarget : uint8 {
    Player,
    NPC,
    Enemy,
    Object,
    Level,
    Num,
};

