#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "Engine/EngineTypes.h"
#include "PhotoModecDitherManageData.h"
#include "PhotoModeCamera.generated.h"

class AActor;
class UCapsuleComponent;
class UDataTable;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API APhotoModeCamera : public ACameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MAX_SPEED_H;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ACCELERATION_H;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MAX_SPEED_V;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ACCELERATION_V;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MAX_ROTATE_SPEED;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ACCELERATION_ROTATE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MAX_ANGLE_V;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ROTATE_SPEED_ROLL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MAX_ROTATE_ROLL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MAX_MOVE_RANGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MIN_FOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MAX_FOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV_ADD_VALUE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RANGE_LIMIT_SLIDE_ANGLE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BACKGROUND_SLIDE_ANGLE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BACKGROUND_SLIDE_OFFSET;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BACKGROUND_STEPUP_HEIGHT;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* DitherCapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* HumanDitherCapsuleComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DITHER_INTERP_TIME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DIR_DITHER_CHECK_RANGE_OFFSET;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DIR_DITHER_CHECK_SCREEN_OFFSET_LEFT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DIR_DITHER_CHECK_SCREEN_OFFSET_RIGHT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DIR_DITHER_CHECK_SCREEN_OFFSET_TOP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DIR_DITHER_CHECK_SCREEN_OFFSET_BOTTOM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DirDitherDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhotoModecDitherManageData> DitherDataList;
    
public:
    APhotoModeCamera();
    UFUNCTION(BlueprintCallable)
    void ResetRollAngle();
    
    UFUNCTION(BlueprintCallable)
    void ResetFov();
    
    UFUNCTION(BlueprintCallable)
    void ResetCamera();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndDitherOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginDitherOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetCollisionRadius();
    
    UFUNCTION(BlueprintCallable)
    float GetCameraRollAngleMin();
    
    UFUNCTION(BlueprintCallable)
    float GetCameraRollAngleMax();
    
    UFUNCTION(BlueprintCallable)
    float GetCameraRollAngle();
    
    UFUNCTION(BlueprintCallable)
    float GetCameraFovMin();
    
    UFUNCTION(BlueprintCallable)
    float GetCameraFovMax();
    
    UFUNCTION(BlueprintCallable)
    float GetCameraFov();
    
    UFUNCTION(BlueprintCallable)
    void EndPhotoCamera();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DoEndPhotoCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DoBeginPhotoCamera();
    
public:
    UFUNCTION(BlueprintCallable)
    void DebugUseDebugParameter(bool bSet, float CheckAngle, float DitherAngle, float DistMin, float DistDefault, float DistMax, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawDirDitherInfo(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void DebugDisableOverlapDither(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void DebugDisableDirDither(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void DebugDirDitherForceCheck(bool bUnder, bool bSpine);
    
    UFUNCTION(BlueprintCallable)
    void BeginPhotoCamera();
    
    UFUNCTION(BlueprintCallable)
    void AddCameraRollAngle(float addValue);
    
    UFUNCTION(BlueprintCallable)
    void AddCameraFov(float addValue);
    
};

