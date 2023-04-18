#pragma once
#include "CoreMinimal.h"
#include "DataupSearchResultInfo.h"
#include "DataupSearchResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FDataupSearchResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataupSearchResultInfo> resultList;
};

