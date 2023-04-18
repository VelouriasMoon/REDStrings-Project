#pragma once
#include "CoreMinimal.h"
#include "ERSParticleSystemAttachRotationOffMode.generated.h"

UENUM(BlueprintType)
enum class ERSParticleSystemAttachRotationOffMode : uint8 {
    RotationOffComponent,
    RotationOffParent,
};

