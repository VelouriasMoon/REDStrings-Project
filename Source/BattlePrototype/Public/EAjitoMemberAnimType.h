#pragma once
#include "CoreMinimal.h"
#include "EAjitoMemberAnimType.generated.h"

UENUM(BlueprintType)
enum class EAjitoMemberAnimType : uint8 {
    AJITOANIM_IDLE_LOOP1,
    AJITOANIM_IDLE_START1,
    AJITOANIM_IDLE_END1,
    AJITOANIM_IDLE_LOOP2,
    AJITOANIM_IDLE_START2,
    AJITOANIM_IDLE_END2,
    AJITOANIM_TALK_LOOP,
    AJITOANIM_TALK_START,
    AJITOANIM_TALK_END,
    AJITOANIM_MAX UMETA(Hidden),
};

