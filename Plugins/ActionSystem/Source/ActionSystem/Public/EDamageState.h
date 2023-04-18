#pragma once
#include "CoreMinimal.h"
#include "EDamageState.generated.h"

UENUM(BlueprintType)
enum EDamageState {
    DS_StandLightFront,
    DS_StandLightBack,
    DS_StandLightLeft,
    DS_StandLightRight,
    DS_StandMiddleFront,
    DS_StandMiddleBack,
    DS_StandMiddleLeft,
    DS_StandMiddleRight,
    DS_StandHighFront,
    DS_StandHighBack,
    DS_StandHighLeft,
    DS_StandHighRight,
    DS_SupineLight,
    DS_SupineMiddleFront,
    DS_SupineMiddleBack,
    DS_SupineMiddleLeft,
    DS_SupineMiddleRight,
    DS_SupineHighFront,
    DS_SupineHighBack,
    DS_SupineHighLeft,
    DS_SupineHighRight,
    DS_ProneLight,
    DS_ProneMiddleFront,
    DS_ProneMiddleBack,
    DS_ProneMiddleLeft,
    DS_ProneMiddleRight,
    DS_ProneHighFront,
    DS_ProneHighBack,
    DS_ProneHighLeft,
    DS_ProneHighRight,
    DS_MAX UMETA(Hidden),
};

