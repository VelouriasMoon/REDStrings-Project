#pragma once
#include "CoreMinimal.h"
#include "EBattleEventType.generated.h"

UENUM(BlueprintType)
enum class EBattleEventType : uint8 {
    SPAWN_ENEMY_SUBGROUP,
    KILL_ENEMY_GROUP,
    NONE,
    NUM,
};

