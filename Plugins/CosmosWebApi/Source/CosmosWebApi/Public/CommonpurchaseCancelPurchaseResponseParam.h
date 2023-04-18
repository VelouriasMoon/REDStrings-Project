#pragma once
#include "CoreMinimal.h"
#include "CommonpurchaseCancelPurchaseResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FCommonpurchaseCancelPurchaseResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
};

