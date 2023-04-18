#pragma once
#include "CoreMinimal.h"
#include "EEnemyFindPlayerType.generated.h"

UENUM(BlueprintType)
enum class EEnemyFindPlayerType : uint8 {
    NonBattle,
    Notice,
    Battle,
    Lost,
};

