#pragma once
#include "CoreMinimal.h"
#include "RewardInfo.h"
#include "RewardEarnResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FRewardEarnResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRewardInfo> rewardList;
};

