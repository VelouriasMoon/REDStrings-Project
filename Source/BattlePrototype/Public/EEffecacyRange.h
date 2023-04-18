#pragma once
#include "CoreMinimal.h"
#include "EEffecacyRange.generated.h"

UENUM(BlueprintType)
enum class EEffecacyRange : uint8 {
    Invalid,
    FriendSimple,
    FriendAll,
    EnemySimple,
    EnemyAll,
    All,
    Num,
};

