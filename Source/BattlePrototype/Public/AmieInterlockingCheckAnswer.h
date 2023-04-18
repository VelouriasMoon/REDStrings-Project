#pragma once
#include "CoreMinimal.h"
#include "AmieInterlockingCheckAnswer.generated.h"

USTRUCT(BlueprintType)
struct FAmieInterlockingCheckAnswer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Answer;
    
};

