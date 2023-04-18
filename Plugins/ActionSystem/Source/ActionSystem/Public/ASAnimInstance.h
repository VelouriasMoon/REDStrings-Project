#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ASDamageState.h"
#include "EDamageState.h"
#include "ASAnimInstance.generated.h"

class UASAnimNotify_StateChange;
class UASStateMachine;

UCLASS(Blueprintable, NonTransient)
class ACTIONSYSTEM_API UASAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DamageStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DamageState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FASDamageState DamageCommand;
    
public:
    UASAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetDynamicSubMachine(const FString& AnimNodeName, const FString& StateName, const UASStateMachine* StateMachineAsset);
    
    UFUNCTION(BlueprintCallable)
    void SendCommand(const FString& Command, const bool bForce);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStateChange(const FString& PreviousStateName, const FString& NextStateName);
    
    UFUNCTION(BlueprintCallable)
    void JumpMachineState(const FString& MachinName, const FString& StateName);
    
    UFUNCTION(BlueprintCallable)
    void JumpDamageState(TEnumAsByte<EDamageState> State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHitShift();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTag(const FName& Tag) const;
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_StateChange(UASAnimNotify_StateChange* Notify);
    
};

