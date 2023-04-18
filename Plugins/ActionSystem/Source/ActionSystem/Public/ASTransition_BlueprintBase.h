#pragma once
#include "CoreMinimal.h"
#include "ASTransition_Base.h"
#include "EAnimCommandState.h"
#include "ASTransition_BlueprintBase.generated.h"

class UAnimInstance;

UCLASS(Abstract, Blueprintable)
class ACTIONSYSTEM_API UASTransition_BlueprintBase : public UASTransition_Base {
    GENERATED_BODY()
public:
    UASTransition_BlueprintBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReceiveCanEnter(UAnimInstance* AnimInstance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayEndForce() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimTimeLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EAnimCommandState> CheckCommandState(const FString& Command) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCommand(const FString& Command) const;
    
};

