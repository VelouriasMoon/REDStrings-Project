#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "PsychokinesisedComponent.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPsychokinesisedComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPsychokinesisedComponent();
    UFUNCTION(BlueprintCallable)
    void MoveRootComponent(const FVector& Delta, FHitResult& OutHit, bool bSweep, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    static void MakeRotatorAxisAndAngle(FRotator& outRot, FVector Axis, float angleDegree);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAxisAndAngleFromRotator(FVector& Axis, float& angleDegree, FRotator Rot);
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawRotator(FRotator Rot, FVector centerPos, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void CalcAngularVelocityToTarget(FVector& AngularVelocity, USceneComponent* directionComp, const FVector TargetLocation);
    
};

