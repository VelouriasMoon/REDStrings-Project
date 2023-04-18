#pragma once
#include "CoreMinimal.h"
#include "CampaignInfo.h"
#include "CampaignInfoResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FCampaignInfoResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignInfo CampaignInfo;
};

