#pragma once
#include "CoreMinimal.h"
#include "GiftInfo.h"
#include "GiftBoxOpenResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FGiftBoxOpenResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGiftInfo> giftList;
};

