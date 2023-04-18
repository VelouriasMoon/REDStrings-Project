#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E_SASKindNative.h"
#include "ManagerInterface.h"
#include "_SASParamNative.h"
#include "SASManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ASASManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
    ASASManager();
    UFUNCTION(BlueprintCallable)
    void ResetHudCustomTimeDilationAccelerateSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPlayingCutinExtra();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCutinPlayingNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetSASEffectFixParam(E_SASKindNative InKind, TArray<F_SASParamNative>& OutFixParam);
    
    
    // Fix for true pure virtual functions not being implemented
};

