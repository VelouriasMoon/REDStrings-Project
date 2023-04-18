#pragma once
#include "CoreMinimal.h"
#include "ItemMasterInfo.h"
#include "ItemGetMasterResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FItemGetMasterResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemMasterInfo> masterList;
};

