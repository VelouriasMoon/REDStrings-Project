#pragma once
#include "CoreMinimal.h"
#include "ESubQuestRewardType.h"
#include "SubquestRewardData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FSubquestRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubQuestRewardType RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RewardId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardNum;
    
};

