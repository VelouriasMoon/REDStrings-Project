#pragma once
#include "CoreMinimal.h"
#include "FHitEffectPriority.generated.h"

UENUM(BlueprintType)
enum class FHitEffectPriority : uint8 {
    Other,
    Npc,
    Enemy,
    MainPlayer,
    Special,
};

