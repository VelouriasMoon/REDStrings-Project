#pragma once
#include "CoreMinimal.h"
#include "ETransitionRule.generated.h"

UENUM(BlueprintType)
enum ETransitionRule {
    TR_PlayEnd,
    TR_Command,
    TR_MovementMode,
    TR_Blueprint,
    TR_Custom,
    TR_MAX UMETA(Hidden),
};

