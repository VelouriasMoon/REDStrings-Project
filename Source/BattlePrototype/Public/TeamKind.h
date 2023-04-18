#pragma once
#include "CoreMinimal.h"
#include "TeamKind.generated.h"

UENUM(BlueprintType)
enum class TeamKind : uint8 {
    Player,
    Enemy,
    Mob,
};

