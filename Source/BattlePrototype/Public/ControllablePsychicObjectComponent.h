#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ControllablePsychicObjectComponent.generated.h"

class ARSCharacterBase;
class UPlayerInputBaseComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UControllablePsychicObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelerationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowDownSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTurnSlowDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSlowDownAngleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSlowDownAngleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSlowDownMaxSpeedRate;
    
    UControllablePsychicObjectComponent();
    UFUNCTION(BlueprintCallable)
    void EndControl();
    
    UFUNCTION(BlueprintCallable)
    bool BeginControl(ARSCharacterBase* InControlOwner, UPlayerInputBaseComponent* InInputComponent, float InitializeSpeed);
    
};

