#pragma once
#include "CoreMinimal.h"
#include "EDamageSEType.generated.h"

UENUM(BlueprintType)
enum class EDamageSEType : uint8 {
    None,
    Normal,
    Object,
    Npc,
    MapGimmick,
    Num,
};

