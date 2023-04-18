#pragma once
#include "CoreMinimal.h"
#include "MaterialSwitchCacheData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FMaterialSwitchCacheData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> BaseMaterial;
    
};

