#pragma once
#include "CoreMinimal.h"
#include "EMapGimmickFinishDir.generated.h"

UENUM(BlueprintType)
enum class EMapGimmickFinishDir : uint8 {
    MGDIR_FORWARD,
    MGDIR_RIGHT,
    MGDIR_LEFT,
    MGDIR_BACK,
    Num,
};

