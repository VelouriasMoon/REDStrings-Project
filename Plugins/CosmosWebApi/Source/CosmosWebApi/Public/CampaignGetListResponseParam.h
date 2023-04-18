#pragma once
#include "CoreMinimal.h"
#include "CampaignInfo.h"
#include "CampaignGetListResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FCampaignGetListResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCampaignInfo> campaignList;
};

