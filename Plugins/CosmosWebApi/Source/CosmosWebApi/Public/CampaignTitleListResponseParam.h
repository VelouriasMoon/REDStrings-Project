#pragma once
#include "CoreMinimal.h"
#include "CampaignInfo.h"
#include "CampaignTitleListResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FCampaignTitleListResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCampaignInfo> campaignList;
};

