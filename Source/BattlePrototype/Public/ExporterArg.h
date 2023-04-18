#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ExporterArg.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UExporterArg : public UObject {
    GENERATED_BODY()
public:
    UExporterArg();
    UFUNCTION(BlueprintCallable)
    static void SetStartAutoExporter(bool isStartAuto);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStartAutoExporter();
    
};

