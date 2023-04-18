#pragma once
#include "CoreMinimal.h"
#include "GetItemInfo.h"
#include "GotLoginBonus.generated.h"

USTRUCT(BlueprintType)
struct FGotLoginBonus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString loginBonusId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGetItemInfo> GetItemList;
};

