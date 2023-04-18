#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SimpleMulticastDelegateBPDelegate.h"
#include "JumpComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UJumpComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMulticastDelegateBP OnStartJump;
    
public:
    UJumpComponent();
    UFUNCTION(BlueprintCallable)
    void ReceiveOnGround();
    
    UFUNCTION(BlueprintCallable)
    void InputJump();
    
};

