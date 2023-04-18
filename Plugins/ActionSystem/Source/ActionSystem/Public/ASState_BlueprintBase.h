#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ASState_Base.h"
#include "ASState_BlueprintBase.generated.h"

class UAnimInstance;

UCLASS(Abstract, Blueprintable)
class ACTIONSYSTEM_API UASState_BlueprintBase : public UASState_Base {
    GENERATED_BODY()
public:
    UASState_BlueprintBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float NewRate);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendSpaceInput(FVector NewBlendInput);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float DeltaTime, UAnimInstance* AnimInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginPlay(UAnimInstance* AnimInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimTimeLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimTime() const;
    
};

