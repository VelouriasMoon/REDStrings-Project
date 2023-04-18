#pragma once
#include "CoreMinimal.h"
#include "ESASEffectTiming.generated.h"

UENUM(BlueprintType)
enum class ESASEffectTiming : uint8 {
    Passive,
    Active,
    PassiveWithFriend,
};

