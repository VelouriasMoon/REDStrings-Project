#pragma once
#include "CoreMinimal.h"
#include "EAIBattleRange.generated.h"

UENUM(BlueprintType)
enum class EAIBattleRange : uint8 {
    Near,
    Middle,
    Far,
};

