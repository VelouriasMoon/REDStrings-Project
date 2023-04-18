#pragma once
#include "CoreMinimal.h"
#include "CommonpurchaseTokushoResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FCommonpurchaseTokushoResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString text;
};

