#pragma once
#include "CoreMinimal.h"
#include "EBattlefieldEventType.generated.h"

UENUM(BlueprintType)
enum class EBattlefieldEventType : uint8 {
    WIPEOUT_GROUP,
    CONTROL_BY_EVENT,
    RUSH_SUBGROUPS,
    WIPEOUT_KEEP_ENEMY_NUM,
    NUM,
};

