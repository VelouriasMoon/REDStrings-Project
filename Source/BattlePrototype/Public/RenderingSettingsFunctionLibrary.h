#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RenderingSettings.h"
#include "RenderingSettingsFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URenderingSettingsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URenderingSettingsFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetupRenderingSettingsTranslucencyResolution(UObject* WorldContextObject, const FRenderingSettings& Settings);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetupRenderingSettingsSSRResolution(UObject* WorldContextObject, const FRenderingSettings& Settings);
    
    UFUNCTION(BlueprintCallable)
    static FRenderingSettings MergeRenderingSettings(const FRenderingSettings& DefaultSettings, const FRenderingSettings& OverrideSettings);
    
};

