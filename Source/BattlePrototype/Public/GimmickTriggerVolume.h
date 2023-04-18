#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Volume.h"
#include "EMapGimmickFinishDir.h"
#include "EMapGimmickPlayerPlace.h"
#include "GimmickTriggerVolume.generated.h"

class AActor;
class AMapGimmickManager;
class AMapGimmickObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AGimmickTriggerVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMapGimmickObject* TargetMapGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMapGimmickManager* MapGimmickManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapGimmickPlayerPlace PositionToGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOverlapAllPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOverlapPartner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapGimmickFinishDir FinishAnimationDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateIconOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUseLimitIcon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle _TimerHandle;
    
public:
    AGimmickTriggerVolume();
    UFUNCTION(BlueprintCallable)
    void OnActorHitFunc(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEndOverlapFunc(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlapFunc(AActor* OverlappedActor, AActor* OtherActor);
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsInPlayer() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void DelayCollisionOn();
    
};

