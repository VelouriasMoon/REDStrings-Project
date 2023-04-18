#pragma once
#include "CoreMinimal.h"
#include "ESubQuestRewardType.h"
#include "SubquestRewardRawData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FSubquestRewardRawData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubQuestRewardType RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RewardId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardNum;
    
};

