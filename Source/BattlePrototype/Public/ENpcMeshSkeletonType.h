#pragma once
#include "CoreMinimal.h"
#include "ENpcMeshSkeletonType.generated.h"

UENUM(BlueprintType)
enum class ENpcMeshSkeletonType : uint8 {
    Man,
    Woman,
    Child,
    Special,
    Max,
};

