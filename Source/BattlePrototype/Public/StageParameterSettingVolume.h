#pragma once
#include "CoreMinimal.h"
#include "BlendableVolume.h"
#include "StageParameterSettings.h"
#include "StageParameterSettingVolume.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AStageParameterSettingVolume : public ABlendableVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FStageParameterSettings Settings;
    
    AStageParameterSettingVolume();
};

