#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "RSPartyPlayerKind.h"
#include "FinishMoveActor.generated.h"

class ACameraActor;
class UCameraComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AFinishMoveActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TEnumAsByte<RSPartyPlayerKind::Type> targetPartyType_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString targetSocketName_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float zoomParam_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float targetLocationInterpolation_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float targetFOVInterpolation_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float cameraLocationInterpolation_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* finishMoveCamera_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float sequenceRate_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* gameCameraComponet_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* gameCameraActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isLookingForEnemy_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector enemyLocation_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator cameraRotatBeforeSwitch_;
    
    AFinishMoveActor();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SlowSpeedEventEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SlowSpeedEvent();
    
    UFUNCTION(BlueprintCallable)
    void SetCameraTick(bool bActivate);
    
    UFUNCTION(BlueprintCallable)
    FVector GetBeforeLocation();
    
    UFUNCTION(BlueprintCallable)
    void FinishMoveUpdate();
    
    UFUNCTION(BlueprintCallable)
    void FinishMoveBegin(bool isChangeBeforeData, FVector beforePos, float beforeFOV);
    
};

