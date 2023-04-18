#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "ContinualMoveComponent.generated.h"

class AActor;
class UContinualMoveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UContinualMoveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UContinualMoveComponent();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateFunction(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartMove(const FName& ClaimantName, FVector frontVector, float initSpeed, float Acceleration, float endSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetInvalidMove(bool bInvalid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UContinualMoveComponent* GetContinualMoveComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ForceClearMove();
    
    UFUNCTION(BlueprintCallable)
    void ClearMove(const FName& ClaimantName);
    
};

