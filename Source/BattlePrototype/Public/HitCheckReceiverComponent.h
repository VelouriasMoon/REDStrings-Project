#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HitResultDelegateDelegate.h"
#include "HitCheckReceiverComponent.generated.h"

class AActor;
class UHitCheckReceiverComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UHitCheckReceiverComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResultDelegate DispatchHitAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResultDelegate DispatchHitDirectAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResultDelegate DispatchHitDamage;
    
    UHitCheckReceiverComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UHitCheckReceiverComponent* GetHitCheckReceiverComponentFromActor(AActor* Actor);
    
};

