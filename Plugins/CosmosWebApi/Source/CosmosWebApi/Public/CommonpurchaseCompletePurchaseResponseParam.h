#pragma once
#include "CoreMinimal.h"
#include "CommonpurchaseCompletePurchaseResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FCommonpurchaseCompletePurchaseResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
};

