#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "CameraPropertyMediatorComponent.generated.h"

class AActor;
class UCameraPropertyMediatorComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UCameraPropertyMediatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchNoMove;
    
    UCameraPropertyMediatorComponent();
    UFUNCTION(BlueprintCallable)
    void SetTargetArmLengthPitchByObject(const UObject* Object, float Length, float Pitch, float KeepSec, float InterpSec, TEnumAsByte<EEasingFunc::Type> InterpType);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetArmLengthPitchByName(FName Name, float Length, float Pitch, float KeepSec, float InterpSec, TEnumAsByte<EEasingFunc::Type> InterpType);
    
    UFUNCTION(BlueprintCallable)
    void SetControlledCameraByOwner();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRestoreCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCameraPropertyMediatorComponent* GetCameraPropertyMediatorComponentFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ClearTargetArmLengthPitchByObject(const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void ClearTargetArmLengthPitchByName(FName Name);
    
};

