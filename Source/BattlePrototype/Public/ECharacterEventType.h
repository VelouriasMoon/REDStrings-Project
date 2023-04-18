#pragma once
#include "CoreMinimal.h"
#include "ECharacterEventType.generated.h"

UENUM(BlueprintType)
enum class ECharacterEventType : uint8 {
    SpawnEnemyGroup,
    KillEnemyGroup,
    SpawnEnemySubGroup,
    KillEnemySubGroup,
    Num,
};

