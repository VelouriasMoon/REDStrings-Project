#pragma once
#include "CoreMinimal.h"
#include "CommonpurchaseGetCatalogInfo.h"
#include "CommonpurchaseGetCatalogResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FCommonpurchaseGetCatalogResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommonpurchaseGetCatalogInfo> catalogList;
};

