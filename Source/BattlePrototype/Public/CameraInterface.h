#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "Camera/PlayerCameraManager.h"
#include "EPlayerCameraMode.h"
#include "CameraInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UCameraInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API ICameraInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetPlayerCameraViewTarget(float BlendTime, EViewTargetBlendFunction BlendFunc, float BlendExp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetPlayerCameraRotation(FRotator Rot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetPlayerCameraMode(EPlayerCameraMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetPlayerCameraLocation(FVector Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetPlayerCameraFieldOfView(float FOV);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetPlayerCameraDirection(FVector Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetRemoteActorRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetRemoteActorLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FRotator GetPlayerCameraRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EPlayerCameraMode GetPlayerCameraMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetPlayerCameraLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetPlayerCameraFieldOfView();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetPlayerCameraDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetCameraLookAtPos();
    
};

