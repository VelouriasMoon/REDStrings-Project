#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "HCHitResult.h"
#include "DamageArrayComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UDamageArrayComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDamageArrayComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRangeCheck(FVector vecStart, FVector vecEnd, FVector vecForward, float Range) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHCHitResult> HitResultMaxDamagePriorityMultiActor(const TArray<FHCHitResult>& HitResult, bool& IsPartsInvinsible) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHCHitResult> HitResultMaxDamageMultiActor(const TArray<FHCHitResult>& HitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHCHitResult HitResultMaxDamage(const TArray<FHCHitResult>& HitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHCHitResult> HitResultDamageSort(const TArray<FHCHitResult>& HitResult, bool isDes) const;
    
};

