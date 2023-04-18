#pragma once
#include "CoreMinimal.h"
#include "EBattlefieldStat.generated.h"

UENUM(BlueprintType)
enum class EBattlefieldStat : uint8 {
    INIT,
    START,
    EXEC,
    END,
    NONE,
    NUM,
};

