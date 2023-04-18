#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "Engine/EngineTypes.h"
#include "ASCollisionCapsuleComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ACTIONSYSTEM_API UASCollisionCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UASCollisionCapsuleComponent();
    UFUNCTION(BlueprintCallable)
    void OnAttackEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

