#pragma once
#include "CoreMinimal.h"
#include "Engine.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ASCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ACTIONSYSTEM_API UASCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UASCharacterMovementComponent();
    UFUNCTION(BlueprintCallable)
    void SetImpulse(FVector Impulse, bool bVelocityChange);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectMove(FVector MoveVelocity, bool bForceMaxSpeed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SendAnimCommand(const FString& Command, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnimTag(FName Tag) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastNavMoveVelocity() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCurveMove();
    
};

