#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "EDirectionOfRotation.h"
#include "AutoAimComponent.generated.h"

class AActor;
class UAutoAimComponent;
class UMeshComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UAutoAimComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _aimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _aimSpeedInternalLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _maxAimAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isInternalLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isToCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isToBrainCrash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _offsetDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDirectionOfRotation _directionOfRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _frontDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isToWeakPoint;
    
public:
    UAutoAimComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateRotateAim(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    float UpdateFromDirectionOfRotation(float Rot, float Sign);
    
public:
    UFUNCTION(BlueprintCallable)
    void PauseAutoAim(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void LockLocation(bool bLock, FVector NewLockLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBindOwnerTick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAutoAimComponent* GetAutoAimComponentFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void EndAutoAim(UObject* Notify);
    
    UFUNCTION(BlueprintCallable)
    void BeginAutoAimLocation(UObject* Notify, float aimSpeed, float maxAimAngle, FVector aimLocation, UMeshComponent* socketRotateMesh, FName SocketName, float offsetDegree, EDirectionOfRotation directionOfRotation, float frontDegree);
    
    UFUNCTION(BlueprintCallable)
    void BeginAutoAim(UObject* Notify, float aimSpeed, float maxAimAngle, bool isInternalLock, bool isToCamera, AActor* brainCrashActor, UMeshComponent* socketRotateMesh, FName SocketName, float offsetDegree, EDirectionOfRotation directionOfRotation, float frontDegree, float aimSpeedInternalLock, bool findAimTargetWhenNoTarget, bool isDetectTargetChange, bool isToWeakPoint);
    
};

