#pragma once
#include "CoreMinimal.h"
#include "EEvaluateActorType.generated.h"

UENUM(BlueprintType)
enum class EEvaluateActorType : uint8 {
    Enemy,
    Player,
    Friend,
};

