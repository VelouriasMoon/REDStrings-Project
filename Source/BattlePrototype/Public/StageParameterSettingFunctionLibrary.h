#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StageParameterSettings.h"
#include "StageParameterSettingFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UStageParameterSettingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStageParameterSettingFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void ConvertStageSettingToMaterialParameters(const FStageParameterSettings& Settings, TArray<FName>& ParamScalarNames, TArray<float>& ParamScalars, TArray<FName>& ParamVectorNames, TArray<FLinearColor>& ParamVectors);
    
};

