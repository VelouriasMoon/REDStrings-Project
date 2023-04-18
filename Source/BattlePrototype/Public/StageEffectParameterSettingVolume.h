#pragma once
#include "CoreMinimal.h"
#include "BlendableVolume.h"
#include "StageEffectParameterSettings.h"
#include "StageEffectParameterSettingVolume.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AStageEffectParameterSettingVolume : public ABlendableVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FStageEffectParameterSettings Settings;
    
    AStageEffectParameterSettingVolume();
};

