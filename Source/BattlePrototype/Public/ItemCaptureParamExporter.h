#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ItemDataTableRaw.h"
#include "ItemCaptureParamExporter.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UItemCaptureParamExporter : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UItemCaptureParamExporter();
private:
    UFUNCTION(BlueprintCallable)
    static void ExportItemDataTableType(const FItemDataTableRaw& ItemDataTableRaw, const FString& outputJsonPath);
    
};

