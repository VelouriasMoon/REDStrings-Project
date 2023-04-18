#pragma once
#include "CoreMinimal.h"
#include "RSGameModeBase.h"
#include "RSGameMode.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API ARSGameMode : public ARSGameModeBase {
    GENERATED_BODY()
public:
    ARSGameMode();
    UFUNCTION(BlueprintCallable)
    void StopLoadingScreenSlate2();
    
    UFUNCTION(BlueprintCallable)
    void OnTimerReleaseLoadingScreen2();
    
    UFUNCTION(BlueprintCallable)
    void OnTimerReleaseLoadingScreen();
    
};

