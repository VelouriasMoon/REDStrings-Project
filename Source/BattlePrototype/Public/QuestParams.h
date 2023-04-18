#pragma once
#include "CoreMinimal.h"
#include "QuestProgressState.h"
#include "QuestParams.generated.h"

USTRUCT(BlueprintType)
struct FQuestParams {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    QuestProgressState questProgressState_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isNew_;
    
public:
};

