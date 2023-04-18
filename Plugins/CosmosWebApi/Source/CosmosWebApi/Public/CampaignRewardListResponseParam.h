#pragma once
#include "CoreMinimal.h"
#include "RewardInfo.h"
#include "CampaignRewardListResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FCampaignRewardListResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRewardInfo> rewardList;
};

