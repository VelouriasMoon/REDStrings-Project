#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EventFacialCaptureRenderSettings.h"
#include "EventFacialCaptureRenderFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UEventFacialCaptureRenderFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEventFacialCaptureRenderFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void ConvertEventFacialCaptureRenderSettingsToMaterialParameters(const FEventFacialCaptureRenderSettings& Setting, TArray<FName>& ParameterNames, TArray<float>& ParameterValues);
    
    UFUNCTION(BlueprintCallable)
    static FEventFacialCaptureRenderSettings AddEventFacialCaptureRenderSettings(const FEventFacialCaptureRenderSettings& BaseSetting, const FEventFacialCaptureRenderSettings& OverrideSetting);
    
};

