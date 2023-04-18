#pragma once
#include "CoreMinimal.h"
#include "ClearConditions.h"
#include "QuestParams.h"
#include "ConditionQuestParams.generated.h"

USTRUCT(BlueprintType)
struct FConditionQuestParams : public FQuestParams {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClearConditions> conditions_;
    
public:
};

