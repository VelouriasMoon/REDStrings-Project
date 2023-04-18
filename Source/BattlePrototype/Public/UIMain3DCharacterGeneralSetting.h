#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
//-FallbackName=Rotator
#include "UIMain3DCharacterGeneralSetting.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FUIMain3DCharacterGeneralSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionalLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DirectionalLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator DirectionalLightRotation;
    
};

