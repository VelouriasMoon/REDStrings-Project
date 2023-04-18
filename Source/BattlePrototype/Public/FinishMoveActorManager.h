#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ManagerInterface.h"
#include "FinishMoveActorManager.generated.h"

class ARSLevelSequenceActor;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AFinishMoveActorManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* fmActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCallingEffectFinish_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSLevelSequenceActor* rsLevelSequencer_;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString sequencePath_;
    
    AFinishMoveActorManager();
    UFUNCTION(BlueprintCallable)
    void SpawnAndSwapFinishMoveActor();
    
    UFUNCTION(BlueprintCallable)
    void SetSequencePlayRate(float NewRate);
    
    UFUNCTION(BlueprintCallable)
    void RotateCameraYawAfterEvent(float rotYaw);
    
    UFUNCTION(BlueprintCallable)
    void RestartFinishMoveSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RestartFinishMove();
    
    UFUNCTION(BlueprintCallable)
    void PauseFinishMoveSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PauseFinishMove();
    
    UFUNCTION(BlueprintCallable)
    float GetSequenceRate();
    
    UFUNCTION(BlueprintCallable)
    void FinishMoveUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishMoveEnd();
    
    UFUNCTION(BlueprintCallable)
    void FinishMoveBegin();
    
    
    // Fix for true pure virtual functions not being implemented
};

