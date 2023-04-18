#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SimpleMulticastDelegateBPDelegate.h"
#include "DeadStateMediatorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UDeadStateMediatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _deadStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _deadKeepSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _disableAutoRevive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMulticastDelegateBP OnRevive;
    
public:
    UDeadStateMediatorComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateDead();
    
    UFUNCTION(BlueprintCallable)
    bool TryStartDead();
    
    UFUNCTION(BlueprintCallable)
    void StartDead();
    
    UFUNCTION(BlueprintCallable)
    void SetDisableAutoRevibeAfterDead();
    
    UFUNCTION(BlueprintCallable)
    bool IsAbleDead();
    
};

