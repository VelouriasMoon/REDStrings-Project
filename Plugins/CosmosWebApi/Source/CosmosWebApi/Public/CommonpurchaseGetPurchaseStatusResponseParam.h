#pragma once
#include "CoreMinimal.h"
#include "CommonpurchaseGetPurchaseStatusResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FCommonpurchaseGetPurchaseStatusResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString purchaseInfoId;
};

