#pragma once
#include "CoreMinimal.h"
#include "EGimmickHorrorType.generated.h"

UENUM(BlueprintType)
enum class EGimmickHorrorType : uint8 {
    GIMMICK_HORROR_TYPE_INVALID,
    GIMMICK_HORROR_TYPE_DISTANCE,
    GIMMICK_HORROR_TYPE_VISION,
    GIMMICK_HORROR_TYPE_DISTANCE2,
    GIMMICK_HORROR_TYPE_MAX UMETA(Hidden),
};

