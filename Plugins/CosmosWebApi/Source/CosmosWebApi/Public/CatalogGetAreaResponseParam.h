#pragma once
#include "CoreMinimal.h"
#include "AreaInfo.h"
#include "CatalogGetAreaResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FCatalogGetAreaResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAreaInfo> areaList;
};
