#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovementPropertyMediator.generated.h"

class AActor;
class ACharacter;
class UCharacterMovementComponent;
class UMovementPropertyMediator;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UMovementPropertyMediator : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionSpeedRateMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMaxWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMaxFlySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWalkSpeedRateMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWalkSpeedRateMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _defaultStepStartSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _defaultStepDeclaration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _stepSpeedRateMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _stepSpeedRateMax;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* OwnerMovement;
    
public:
    UMovementPropertyMediator();
    UFUNCTION(BlueprintCallable)
    void SetStepSpeedRate(const FName& ClaimantName, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementCollisionIgnorePawn(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxWalkSpeedRate(const FName& ClaimantName, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxWalkSpeed(const FName& ClaimantName, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxFlySpeedRate(const FName& ClaimantName, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxFlySpeed(const FName& ClaimantName, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetFlying(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void SetActionSpeedRate(const FName& ClaimantName, float SpeedRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMovementPropertyMediator* GetMovementPropertyMediatorComponentFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void EnableMovement(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void DisableMovement(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ClearStepSpeedRate(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ClearMovementCollisionIgnorePawn(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ClearMaxWalkSpeedRate(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ClearMaxFlySpeedRate(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ClearFlyingForce();
    
    UFUNCTION(BlueprintCallable)
    void ClearFlying(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void ClearActionSpeedRate(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTouchGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcDistanceToGround() const;
    
};

