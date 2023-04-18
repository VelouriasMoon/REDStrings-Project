#pragma once
#include "CoreMinimal.h"
#include "HCCollisionHitTeam.generated.h"

UENUM(BlueprintType)
enum class HCCollisionHitTeam : uint8 {
    NotFriend,
    Friend,
    Both,
};

