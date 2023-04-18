#pragma once
#include "CoreMinimal.h"
#include "MaterialSwitchCacheData.h"
#include "MaterialSwitchCache.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FMaterialSwitchCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialSwitchCacheData> DataList;
    
};

