#pragma once
#include "CoreMinimal.h"
#include "EGimmickObjectStatus.generated.h"

UENUM(BlueprintType)
enum class EGimmickObjectStatus : uint8 {
    GIMMICK_STATUS_NONE,
    GIMMICK_STATUS_OPEN,
    GIMMICK_STATUS_OPENING,
    GIMMICK_STATUS_CLOSE,
    GIMMICK_STATUS_CLOSING,
    GIMMICK_STATUS_NUM,
    GIMMICK_STATUS_MAX UMETA(Hidden),
};

