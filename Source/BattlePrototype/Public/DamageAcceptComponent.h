#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageAnimParam.h"
#include "DamageHitDelegateDelegate.h"
#include "DamagePointKind.h"
#include "DamagePopupDelegateDelegate.h"
#include "HCHitResult.h"
#include "StartDamageAnimDelegateDelegate.h"
#include "DamageAcceptComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UDamageAcceptComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartDamageAnimDelegate StartDamageAnim;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamagePopupDelegate DamagePopup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageHitDelegate DamageHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageAnimParam ReservedDamageAnimParam;
    
public:
    UDamageAcceptComponent();
    UFUNCTION(BlueprintCallable)
    void TakeDamageSimple(int32 Damage, int32 ReduceGuard, bool isDispDamagePoint, bool isPercentDamage);
    
    UFUNCTION(BlueprintCallable)
    void TakeDamage(const FHCHitResult& HitResult, int32 Damage, float crashDamage, bool isDispDamagePoint, bool IsAnimDamage, bool IsDown);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartDamageAnim(const FHCHitResult& HitResult, int32 Damage, bool IsDown) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    DamagePointKind DecideDamagePointKind() const;
    
};

