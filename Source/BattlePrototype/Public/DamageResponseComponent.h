#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageResponceDelegateDelegate.h"
#include "HCHitResult.h"
#include "DamageResponseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UDamageResponseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageResponceDelegate SpawnGuardEffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageResponceDelegate SpawnHitEffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageResponceDelegate OnDamaging;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageResponceDelegate SpawnDamageHitEffect;
    
public:
    UDamageResponseComponent();
    UFUNCTION(BlueprintCallable)
    int32 OnDamageDirectAttack(bool bUseFixDamage, int32 fixDamage, const FHCHitResult& HitResult, bool isForceCritical);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageAfter();
    
    UFUNCTION(BlueprintCallable)
    int32 OnDamageActorHit(const FHCHitResult& HitResult, bool IsGuard, bool isForceCritical, bool IsArmor, bool isRatio, bool isAccumurateRatio, bool isFixCalcCrash);
    
};

