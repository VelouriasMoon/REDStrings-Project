#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "HCHitResult.h"
#include "BlownAwayComponent.generated.h"

class AActor;
class UBlownAwayComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UBlownAwayComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isBlowOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _guardBlowPowerRate;
    
public:
    UBlownAwayComponent();
    UFUNCTION(BlueprintCallable)
    void SetIsBlowOnDamage(bool blowEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBlownAwayComponent* GetBlownAwayComponentFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBlowImpulse(const AActor* attackActor, FRotator blowAngle, float blowPower) const;
    
    UFUNCTION(BlueprintCallable)
    void AddDamageBlowImpulse(const FHCHitResult& HitResult, bool IsGuard);
    
};

