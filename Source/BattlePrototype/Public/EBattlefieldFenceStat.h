#pragma once
#include "CoreMinimal.h"
#include "EBattlefieldFenceStat.generated.h"

UENUM(BlueprintType)
enum class EBattlefieldFenceStat : uint8 {
    START,
    EXEC,
    END,
    NONE,
    NUM,
};

