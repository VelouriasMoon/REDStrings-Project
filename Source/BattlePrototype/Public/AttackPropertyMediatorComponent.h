#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttackPropertyMediatorComponent.generated.h"

class AActor;
class UAttackPropertyMediatorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UAttackPropertyMediatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAttackPropertyMediatorComponent();
    UFUNCTION(BlueprintCallable)
    void SetAttackRate(const FName& ClaimantName, float AttackRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAttackPropertyMediatorComponent* GetAttackPropertyMediator(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAttackPropertyMediatorComponent* FindAttackPropertyMediator(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ClearAttackRate(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcTotalAttackRate() const;
    
};

