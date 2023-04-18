#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BattlefieldFenceInterface.generated.h"

class USplineComponent;

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UBattlefieldFenceInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IBattlefieldFenceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBattlefieldVisibleForce(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBattlefieldEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USplineComponent* GetBattlefieldSpline();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetBattlefieldEnable();
    
};

