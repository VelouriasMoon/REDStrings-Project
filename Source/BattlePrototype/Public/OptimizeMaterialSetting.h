#pragma once
#include "CoreMinimal.h"
#include "OptimizeMaterialOverrideSetting.h"
#include "OptimizeMaterialSettingMesh.h"
#include "OptimizeMaterialSetting.generated.h"

USTRUCT(BlueprintType)
struct FOptimizeMaterialSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FOptimizeMaterialOverrideSetting> SlotMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimizeMaterialOverrideSetting OtherSlotMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimizeMaterialSettingMesh> Meshes;
    
};

