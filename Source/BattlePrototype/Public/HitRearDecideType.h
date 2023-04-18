#pragma once
#include "CoreMinimal.h"
#include "HitRearDecideType.generated.h"

UENUM(BlueprintType)
enum class HitRearDecideType : uint8 {
    OpponentActorLocation,
    AttackSourceActorLocation,
};

