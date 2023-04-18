#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ASCharacterBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ACTIONSYSTEM_API AASCharacterBase : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicateState, meta=(AllowPrivateAccess=true))
    TArray<int32> ReplicateState;
    
public:
    AASCharacterBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStateChange(int32 MachineIndex, int32 PreviousState, int32 NextState);
    
    UFUNCTION(BlueprintCallable)
    void SendAnimCommand(const FString& Command, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStateChange(const FString& PreviousStateName, const FString& NextStateName);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicateState();
    
    UFUNCTION(BlueprintCallable)
    void JumpMachineState(const FString& MachinName, const FString& StateName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnimTag(FName Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAnimTags() const;
    
};

