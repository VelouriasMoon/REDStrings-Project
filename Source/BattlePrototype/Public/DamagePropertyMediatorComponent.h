#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "HitZeroEffectAndSE.h"
#include "DamagePropertyMediatorComponent.generated.h"

class AActor;
class UDamagePropertyMediatorComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UDamagePropertyMediatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> _damagePrimitives;
    
public:
    UDamagePropertyMediatorComponent();
    UFUNCTION(BlueprintCallable)
    void SetHitZeroEffectSE(const FName& ClaimantName, const FHitZeroEffectAndSE& effectSE);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageRate(const FName& ClaimantName, float DamageRate);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageCollisionDisable(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void SetCacheCollisionType(int32 Index, TEnumAsByte<ECollisionEnabled::Type> Type);
    
    UFUNCTION(BlueprintCallable)
    void SetBlowRate(const FName& ClaimantName, float BlowRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHitZeroEffectAndSE GetTotalHitZeroEffectSE() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDamagePropertyMediatorComponent* GetDamagePropertyMediatorComponentFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCacheCollisionTypeNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCacheCollisionTypeIndex(UPrimitiveComponent* pPrimitive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ECollisionEnabled::Type> GetCacheCollisionType(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ClearHitZeroEffectSE(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ClearDamageRate(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ClearDamageCollisionDisable(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ClearBlowRate(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcTotalDamageRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcTotalBlowRate() const;
    
};

