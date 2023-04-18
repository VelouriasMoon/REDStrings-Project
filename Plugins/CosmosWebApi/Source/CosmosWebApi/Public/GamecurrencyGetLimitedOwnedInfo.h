#pragma once
#include "CoreMinimal.h"
#include "GamecurrencyGetLimitedOwnedInfo.generated.h"

USTRUCT(BlueprintType)
struct FGamecurrencyGetLimitedOwnedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 limitCurrencyNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString chargedFlag;
};

