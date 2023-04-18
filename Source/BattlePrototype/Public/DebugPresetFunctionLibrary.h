#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DebugPresetFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UDebugPresetFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebugPresetFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void InitalizePreset(UObject* WorldContextObject, FName Name);
    
};

