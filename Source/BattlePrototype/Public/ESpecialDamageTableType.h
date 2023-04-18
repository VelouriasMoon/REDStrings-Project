#pragma once
#include "CoreMinimal.h"
#include "ESpecialDamageTableType.generated.h"

UENUM(BlueprintType)
enum class ESpecialDamageTableType : uint8 {
    Player,
    Npc,
    Enemy,
};

