#pragma once
#include "CoreMinimal.h"
#include "RenderingSettingsFloat.h"
#include "RenderingSettings.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FRenderingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideTranslucencyResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRenderingSettingsFloat TranslucencyResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideSSRResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRenderingSettingsFloat SSRResolution;
    
};

