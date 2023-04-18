#pragma once
#include "CoreMinimal.h"
#include "EBattleSituationActionType.h"
#include "ActionParameter.generated.h"

USTRUCT(BlueprintType)
struct FActionParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSituationActionType ActionType;
    
};

