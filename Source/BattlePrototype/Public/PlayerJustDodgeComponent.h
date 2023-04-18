#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "PlayerJustDodgeComponent.generated.h"

class UCapsuleComponent;
class UHitCheckComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerJustDodgeComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JUST_DODGE_TIME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JUST_DODGE_GAMESPEED_RATE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JUST_DODGE_INVINSIBLE_TIME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JUST_DODGE_RADIUS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JUST_DODGE_RADIUS_RANGEATTACK;
    
public:
    UPlayerJustDodgeComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckJustDodge();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CalcJustDodgeByLocation(const FVector& Location, const FVector& UpDir, const FVector& Offset, float Height, float Radius, UHitCheckComponent* HitCheck, float CheckScale, float CheckRangeScale);
    
    UFUNCTION(BlueprintCallable)
    bool CalcJustDodge(UCapsuleComponent* BaseCapsule, UHitCheckComponent* HitCheck, const FVector& Offset, float CheckScale, float CheckRangeScale);
    
};

