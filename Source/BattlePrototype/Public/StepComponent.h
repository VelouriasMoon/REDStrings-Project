#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "VectorArgumentDelegateDelegate.h"
#include "StepComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UStepComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVectorArgumentDelegate OnStartStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector _stepInputDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _stepDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _sprintMoveDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _sprintMoveDistance;
    
public:
    UStepComponent();
    UFUNCTION(BlueprintCallable)
    void StartStep(FVector StepDirection, float stepDistanceRate, bool bEnableSprintMomentum);
    
    UFUNCTION(BlueprintCallable)
    void InputStep(FVector StepDirection, float stepDistanceRate, bool bEnableSprintMomentum);
    
    UFUNCTION(BlueprintCallable)
    void EndStep();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalcDirectionWorldToActor(FVector worldDir) const;
    
};

