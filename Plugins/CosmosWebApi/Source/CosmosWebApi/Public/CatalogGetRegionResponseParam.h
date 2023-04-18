#pragma once
#include "CoreMinimal.h"
#include "CosmosRegionInfo.h"
#include "CatalogGetRegionResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FCatalogGetRegionResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCosmosRegionInfo> regionList;
};

