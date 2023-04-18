#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "BlendableVolumeManager.h"
#include "StageEffectParameterSettings.h"
#include "StageEffectParameterSettingVolumeManager.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class BATTLEPROTOTYPE_API AStageEffectParameterSettingVolumeManager : public ABlendableVolumeManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageEffectParameterSettings Parameter;
    
    AStageEffectParameterSettingVolumeManager();
    UFUNCTION(BlueprintCallable)
    FStageEffectParameterSettings CalcParameter(const FVector& Location);
    
};

