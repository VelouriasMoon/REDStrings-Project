#pragma once
#include "CoreMinimal.h"
#include "GetItemInfo.h"
#include "FesGetRewardResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FFesGetRewardResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString workId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGetItemInfo> GetItemList;
};

