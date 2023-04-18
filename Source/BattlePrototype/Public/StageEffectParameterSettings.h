#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "StageEffectParameterSettings.generated.h"

USTRUCT(BlueprintType)
struct FStageEffectParameterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_EffectColor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor EffectColor;
    
};

