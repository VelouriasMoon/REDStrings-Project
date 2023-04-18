#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
//-FallbackName=Vector
#include "BlendableVolumeManager.h"
#include "StageParameterSettings.h"
#include "StageParameterSettingVolumeManager.generated.h"

class AActor;
class AStageEffectParameterSettingVolumeManager;
class UMaterialParameterCollection;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API AStageParameterSettingVolumeManager : public ABlendableVolumeManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageParameterSettings Parameter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStageEffectParameterSettingVolumeManager* EffectManager;
    
public:
    AStageParameterSettingVolumeManager();
    UFUNCTION(BlueprintCallable)
    void SetUseReferenceLocationMode(bool Use);
    
    UFUNCTION(BlueprintCallable)
    void SetupMPC(UMaterialParameterCollection* Collection, const FStageParameterSettings& Settings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupActorInternal(const AActor* Actor, FVector Location, const TArray<FName>& ParamScalarNames, const TArray<float>& ParamScalars, const TArray<FName>& ParamVectorNames, const TArray<FLinearColor>& ParamVectors);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugDisableCache(bool DisableCache);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAppendActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RecalcSceneLightVector();
    
    UFUNCTION(BlueprintCallable)
    AStageEffectParameterSettingVolumeManager* GetEffectManager();
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdateActor(AActor* Actor, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void ForceAllUpdateOption(bool bUpdatePlayer, bool bUpdateAppendActor);
    
    UFUNCTION(BlueprintCallable)
    void ForceAllUpdate();
    
    UFUNCTION(BlueprintCallable)
    void ConvertSettingToParameters(const FStageParameterSettings& Settings, TArray<FName>& ParamScalarNames, TArray<float>& ParamScalars, TArray<FName>& ParamVectorNames, TArray<FLinearColor>& ParamVectors);
    
    UFUNCTION(BlueprintCallable)
    void ClearParameter(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    FStageParameterSettings CalcParameterEffect(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    FStageParameterSettings CalcParameter(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void AddAppendActor(AActor* Actor);
    
};

