#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//-FallbackName=Vector
#include "HCSkillExtraType.h"
#include "HitCheckInterface.generated.h"

class AActor;
class UPrimitiveComponent;

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UHitCheckInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IHitCheckInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsOnGround(bool bIncludeObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsObstacleHitCheckToActor(AActor* pTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsObstacleHitCheck(UPrimitiveComponent* pPrimitive, AActor* pAttacker, FVector EndPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsIgnoreHitCheck(UPrimitiveComponent* pPrimitive, FVector hitPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsIgnoreAccelerator(HCSkillExtraType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDisableDamageHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCheckFriendlyFire(AActor* HitActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetHitCheckIgnoredActor();
    
};

