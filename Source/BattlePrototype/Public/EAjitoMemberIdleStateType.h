#pragma once
#include "CoreMinimal.h"
#include "EAjitoMemberIdleStateType.generated.h"

UENUM(BlueprintType)
enum class EAjitoMemberIdleStateType : uint8 {
    AJITOSTATE_IDLE,
    AJITOSTATE_IDLE_START,
    AJITOSTATE_IDLE_START_END,
    AJITOSTATE_MAX UMETA(Hidden),
};

