#pragma once
#include "CoreMinimal.h"
#include "EAjitoMemberTalkStateType.generated.h"

UENUM(BlueprintType)
enum class EAjitoMemberTalkStateType : uint8 {
    AJITOSTATE_TALK_LOOP,
    AJITOSTATE_TALK_START,
    AJITOSTATE_TALK_START_END,
    AJITOSTATE_TALK_MAX UMETA(Hidden),
};

