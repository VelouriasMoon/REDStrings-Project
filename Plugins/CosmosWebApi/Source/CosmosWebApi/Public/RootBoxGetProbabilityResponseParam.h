#pragma once
#include "CoreMinimal.h"
#include "RootBoxCampaignInfo.h"
#include "RootBoxStatusInfo.h"
#include "RootBoxGetProbabilityResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FRootBoxGetProbabilityResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRootBoxCampaignInfo> CampaignInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRootBoxStatusInfo> rootboxStatusList;
};

