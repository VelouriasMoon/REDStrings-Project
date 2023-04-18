#pragma once
#include "CoreMinimal.h"
#include "OptimizeMaterialSettingMesh.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FOptimizeMaterialSettingMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MIDs;
    
};

