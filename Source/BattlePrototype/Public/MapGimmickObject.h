#pragma once
#include "CoreMinimal.h"
//-FallbackName=Transform
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "Engine/LatentActionManager.h"
#include "EMapGimmickFinishDir.h"
#include "EMapGimmickStateRequest.h"
#include "EMapGimmickStatusFunc.h"
#include "EMapGimmickType.h"
#include "EPlayerCaptureAnimPattern.h"
#include "EPlayerID.h"
#include "HCCollisionCommonInfo.h"
#include "HCSkillCommonInfo.h"
#include "HitEffectInterface.h"
#include "MapGimmickState.h"
#include "MapGimmickStateLevelSequence.h"
#include "PsychicObjectSearchInterface.h"
#include "RSPartyPlayerKind.h"
#include "MapGimmickObject.generated.h"

class AGimmickTriggerVolume;
class AMapGimmickManager;
class AMapGimmickObject;
class ARSLevelSequenceActor;
class UAnimMontage;
class UCurveFloat;
class UDataTable;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AMapGimmickObject : public AActor, public IPsychicObjectSearchInterface, public IHitEffectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMapGimmickManager* MapGimmickManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapGimmickType MapGimmickType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StateDefineTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InitialStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseWeightGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseBossGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOverlapBroadcastToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanUseGimmickFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ModelRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentStateStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapGimmickState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeInState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeTimeToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeCancelingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PsychicCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAdjustPlaceInCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LengthPlaceInCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAdjustPlaceInFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LengthPlaceInFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsePlayerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerCaptureAnimationInfoDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerCaptureLeftAnimationInfoDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerFinishAnimationInfoDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerKasaneCaptureRightAnimationInfoDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerKasaneCaptureLeftAnimationInfoDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerKasaneFinishAnimationInfoDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHCCollisionCommonInfo CollisionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHCSkillCommonInfo CollisionSkillInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapGimmickState> States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMapGimmickStateLevelSequence> StateLevelSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ARSLevelSequenceActor*> LevelSequenceActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSearchable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSearchUnique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSearchMapGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInForceIconArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInLimitIconArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCanceling;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSetupSequencePlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform PlayerTransBeforeSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CameraTransBeforeSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CameraTransAfterSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivateCameraBeginInterpSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ActivateCameraBeginInterpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEndPlaybackcameraSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivateCameraEndInterpSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ActivateCameraEndInterpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNeedTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCharging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExplodeNeedTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayerInVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanReuse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFailedByEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGimmickTriggerVolume*> HitVolumes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AGimmickTriggerVolume> LastHitVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapGimmickFinishDir LastHitVolumeDir;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _CanActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StateNeedTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlreadyExplode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDelayUpdateIconVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ToBeIconVisible;
    
public:
    AMapGimmickObject();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateWidgetGauge();
    
    UFUNCTION(BlueprintCallable)
    void SetUsing(bool Using);
    
    UFUNCTION(BlueprintCallable)
    void SetStateNeedTick(bool Need);
    
    UFUNCTION(BlueprintCallable)
    bool SetNeedTick(bool Need);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetLimitIconVisible(bool Visible, bool limit, bool IsSuccess);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFinished(bool Finished);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetIconVisible(bool Visible, bool IsSuccess, bool IsCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetIconGaugeEnableProxy(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetExplosionNeedTick(bool Need);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnablePhysicsPerBone(USkeletalMeshComponent* SkeletalMesh, FName BoneName, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnablePhysics(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableAttackCollision(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetCanActivate(bool NewCanActivate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetAttackCollisionActive(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetAlreadyExplode(bool Explode);
    
    UFUNCTION(BlueprintCallable)
    bool SetActive(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void ResetChargeTime();
    
    UFUNCTION(BlueprintCallable)
    bool RequestChangeState(EMapGimmickStateRequest Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PartnerOnEndTriggerVolumeOverlap(RSPartyPlayerKind::Type playerId, AGimmickTriggerVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void PartnerOnEndOverlapCallback(AGimmickTriggerVolume* Volume, AActor* OverlappedActor, AActor* OtherActor, TEnumAsByte<RSPartyPlayerKind::Type> playerId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PartnerOnBeginTriggerVolumeOverlap(RSPartyPlayerKind::Type playerId, AGimmickTriggerVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void PartnerOnBeginOverlapCallback(AGimmickTriggerVolume* Volume, AActor* OverlappedActor, AActor* OtherActor, TEnumAsByte<RSPartyPlayerKind::Type> playerId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateEndFunction(FName StateName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateBeginFunction(FName StateName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool OnMapGimmickChargeStart(AMapGimmickObject* GimmickActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool OnMapGimmickChargeEnd(AMapGimmickObject* GimmickActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool OnMapGimmickChargeCancel(AMapGimmickObject* GimmickActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnEndUseLimitIconVisibleOverlap();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnEndTriggerVolumeOverlap();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlapCallback(AGimmickTriggerVolume* Volume, AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnEndForceIconVisibleOverlap();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangeGimmickState(FName StateName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnBeginUseLimitIconVisibleOverlap();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnBeginTriggerVolumeOverlap();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapCallback(AGimmickTriggerVolume* Volume, AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnBeginForceIconVisibleOverlap();
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeGimmickStatus();
    
    UFUNCTION(BlueprintCallable)
    FMapGimmickState GetStateByName(FName StateName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPsychicCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UPrimitiveComponent* GetPrimitive() const;
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetPlayerStartAnimation(EPlayerCaptureAnimPattern Pattern, EPlayerID Player);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetPlayerLoopAnimation(EPlayerCaptureAnimPattern Pattern, EPlayerID Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetPlayerLookAtPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetPlayerLookAtComponent() const;
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetPlayerEndAnimation(EPlayerCaptureAnimPattern Pattern, EPlayerID Player);
    
    UFUNCTION(BlueprintCallable)
    float GetPlayerDeltaSecond();
    
    UFUNCTION(BlueprintCallable)
    float GetPlayerCustomDilation();
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetPlayerCancelAnimation(EPlayerCaptureAnimPattern Pattern, EPlayerID Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNextStateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNextCancelStateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetLookAtPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetLookAtComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetIconPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetIconComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetFinishMovementScale(EPlayerID Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCaptureMovementScale(EPlayerID Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UPrimitiveComponent* GetAttackCollisionPrimitive() const;
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void CustomDelay(UObject* worldContextObject_, float Duration, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable)
    FName ChangeToNextState();
    
    UFUNCTION(BlueprintCallable)
    FName ChangeToNextInCancelState();
    
    UFUNCTION(BlueprintCallable)
    FName ChangeState(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    bool CanCharge();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanAddDriveGauge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivate() const;
    
    UFUNCTION(BlueprintCallable)
    bool CallStateTickFunction(float DeltaTime, FName StateName);
    
    UFUNCTION(BlueprintCallable)
    bool CallStateEndFunction(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    bool CallStateCancelFunction(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    bool CallStateBeginFunction(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    bool CallFunctionByName(FName StateName, float DeltaTime, EMapGimmickStatusFunc Func);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CallbackUseThisGimmick(AMapGimmickObject* gimmick);
    
    
    // Fix for true pure virtual functions not being implemented
};

