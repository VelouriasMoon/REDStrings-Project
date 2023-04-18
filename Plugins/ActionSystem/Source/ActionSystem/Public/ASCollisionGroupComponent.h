#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "ASCollisionGroupComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ACTIONSYSTEM_API UASCollisionGroupComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UASCollisionGroupComponent();
    UFUNCTION(BlueprintCallable)
    void StopAttack();
    
    UFUNCTION(BlueprintCallable)
    void StartAttack(int32 hitCount, float HitInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveCollision(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackEndOverlap(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackBeginOverlap(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& SweepResult);
    
};

