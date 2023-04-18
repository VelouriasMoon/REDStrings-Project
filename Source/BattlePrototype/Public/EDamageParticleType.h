#pragma once
#include "CoreMinimal.h"
#include "EDamageParticleType.generated.h"

UENUM(BlueprintType)
enum class EDamageParticleType : uint8 {
    None,
    Normal,
    Normal_Fire,
    Normal_Electric,
    ch0200,
    ch0200_Fire,
    ch0200_Electric,
    Npc,
    Npc_Fire,
    Npc_Electric,
    Object,
    Object_Fire,
    Object_Electric,
    MapGimmick,
    MapGimmick_Fire,
    MapGimmick_Electric,
    Num,
};

