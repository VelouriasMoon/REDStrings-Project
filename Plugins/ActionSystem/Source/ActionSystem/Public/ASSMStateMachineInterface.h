#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ASSMStateMachineInterface.generated.h"

UINTERFACE(Blueprintable)
class UASSMStateMachineInterface : public UInterface {
    GENERATED_BODY()
};

class IASSMStateMachineInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePreviousElapsedTime(float ElapsedTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsNeedResetStateMachine(float ElapsedTime, float ResetSecond);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetAndUpdateContinuousSameDamageReaction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddResetSecondRate();
    
};

