#pragma once
#include "CoreMinimal.h"
#include "TssInfo.h"
#include "TssReadListResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FTssReadListResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTssInfo> tssDataList;
};

