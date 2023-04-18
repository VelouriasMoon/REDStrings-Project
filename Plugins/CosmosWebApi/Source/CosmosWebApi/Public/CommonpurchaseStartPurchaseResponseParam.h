#pragma once
#include "CoreMinimal.h"
#include "CommonpurchaseStartPurchaseResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FCommonpurchaseStartPurchaseResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString purchaseInfoId;
};

