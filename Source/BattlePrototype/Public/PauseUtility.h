#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "PauseUtility.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UPauseUtility : public UObject {
    GENERATED_BODY()
public:
    UPauseUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRedPaused(const UObject* WorldContextObject, int32 PauseFlag, bool bPaused);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetRedPaused(const UObject* WorldContextObject, int32& ReturnValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DumpRedActorPauseSettings(const UObject* WorldContextObject);
    
};

