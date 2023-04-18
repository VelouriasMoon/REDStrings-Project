#pragma once
#include "CoreMinimal.h"
#include "EPlayerBattleParticleType.generated.h"

UENUM(BlueprintType)
enum class EPlayerBattleParticleType : uint8 {
    None,
    Normal,
    Drive,
    BrainField,
};

