#pragma once
#include "CoreMinimal.h"
#include "OptimizeMaterialOverrideSetting.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FOptimizeMaterialOverrideSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOveride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UMaterialInterface*, UMaterialInterface*> Materials;
    
};

