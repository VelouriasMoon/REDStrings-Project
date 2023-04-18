#pragma once
#include "CoreMinimal.h"
#include "GamecurrencyGetLimitedOwnedInfo.h"
#include "GamecurrencyGetLimitedOwnedResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FGamecurrencyGetLimitedOwnedResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGamecurrencyGetLimitedOwnedInfo> currencyList;
};

