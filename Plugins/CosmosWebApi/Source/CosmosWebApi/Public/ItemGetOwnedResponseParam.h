#pragma once
#include "CoreMinimal.h"
#include "OwnedItemInfo.h"
#include "ItemGetOwnedResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FItemGetOwnedResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOwnedItemInfo> itemList;
};

