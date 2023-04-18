#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OptimizeMaterialMultiCondition.h"
#include "OptimizeMaterialOverrideSetting.h"
#include "OptimizeMaterialSetting.h"
#include "OptimizeMaterialSettingMesh.h"
#include "OptimizeSwitchMaterialComponent.generated.h"

class UMeshComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UOptimizeSwitchMaterialComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimizeMaterialSettingMesh> MeshBaseSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimizeMaterialSetting> Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRuntime;
    
    UOptimizeSwitchMaterialComponent();
    UFUNCTION(BlueprintCallable)
    void SetSwitchActivate(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetMesh(UMeshComponent* InTargetMesh);
    
    UFUNCTION(BlueprintCallable)
    void RevertBaseMaterial();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwitchActivate() const;
    
    UFUNCTION(BlueprintCallable)
    int32 CheckScalarParameter(FName ParameterName, float ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    int32 CheckScalarArrayParameter(const TArray<FName>& ParameterName, const TArray<float>& ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    int32 CheckNowParameters();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMeshLayer(UMeshComponent* InTargetMesh, int32 MeshLayerID);
    
    UFUNCTION(BlueprintCallable)
    int32 AddSwitchSetting2(const TArray<FOptimizeMaterialMultiCondition>& MultiConditions, const TMap<FString, FOptimizeMaterialOverrideSetting>& SlotMaterials, const FOptimizeMaterialOverrideSetting& OtherSlotMaterial);
    
    UFUNCTION(BlueprintCallable)
    int32 AddMesh(UMeshComponent* InTargetMesh);
    
};

