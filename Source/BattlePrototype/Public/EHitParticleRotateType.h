#pragma once
#include "CoreMinimal.h"
#include "EHitParticleRotateType.generated.h"

UENUM(BlueprintType)
enum class EHitParticleRotateType : uint8 {
    Default,
    CameraY,
    Random,
};

