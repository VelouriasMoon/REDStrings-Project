#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//-FallbackName=Vector
#include "Engine/EngineTypes.h"
#include "EEnemyTribe.h"
#include "ENpcDriveCheckType.h"
#include "ESASHologramAttackTiming.h"
#include "EmLostActionInfo.h"
#include "EnemyMoveAnimKind.h"
#include "BattleEnemyInterface.generated.h"

class AActor;
class ARSCharacterBase;
class UCapsuleComponent;
class UCurveFloat;
class UEnemyAiComponentBase;
class UEnemyAnimControllerComponent;
class UEnemyScriptComponent;
class UHateTargetComponent;
class USearchingComponent;

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UBattleEnemyInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IBattleEnemyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOutRangeFade_Native(float ToTargetLenge, bool ForceDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateMoveMaxSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateFall_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDamageAnim_Native(bool& DamageEnd, bool& DamageDownEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SwitchDispCore_Native(bool DisplayOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StoreWeakState_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StopCrashChanceLoopEffect_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartVanish_Native(float VanishSec, float StartVanish, float EndVanish);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartReactionDilation_CallFromCPP(uint8 ReactionKind, bool bAddDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartFallIfFlyingIF(bool& bDummy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartDamageFloating_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetWeakEmissiveOff_Native(const FString& WeakSlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetUseWaitNoInterpolation_Native(bool Use);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetTickEnableMeshOnly(bool bMeshOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetReserveAction_Native(uint8 Action, float Param00, float Param01);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetLanding_Native(bool bLanding);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetIsMoveAnim_Native(bool NewIsMoveAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetIsLaunchDown_Native(bool NewIsLaunchDown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetIsLandCheck_Native(bool NewIsLandCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetIsBrainAccess_Native(bool NewIsBrainAccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetIdleMove_Native(bool IsIdle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetHp_Native(int32 HP);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetEnemyConsiderDownDead(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetDownTimer_Native(float NewTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetDamageCollisionDisable_Native(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SafeDestroy_Native(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RestoreWeakState_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RestoreWeakEmissive_Native(const FString& WeakSlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetStateReceivedExecuteAi_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetCore_Native(AActor* Enemy, bool RemoveCore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetAction_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivedNotifyAnimEnd_Native(bool& Received);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OutputLogCrashChanceEnd_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnNotifyPlayerDead();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitCrashVisionAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnEndCrashChance_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndAnimDieIF(bool& bDummy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnCrashVisionDead();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LeaveBrainCrashAccess_Native(ARSCharacterBase* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LaunchDown_Native(bool& IsEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool KickCrashChanceLoopEffect_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsWeakUiDamageHit_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsUpdateEnemyTickEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsUpdateEnemySpawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsUniqueAroundEffectPause() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsTickDisableCondition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsSuspendFollowAttackInterface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsSpawned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsReflectContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPressDown_Native() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPossibleTargetAttack_CallFromCPP(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsNotFindPlayer_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsMotionEnd_Native(bool& ReturnValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsLaunchDown_Native() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInvincible_Native() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsIgnoreLandingCheck_Native(bool& bIgnoreLandingCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsFlyEnemyCheck_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsExecLowProcess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnemyStateAttack_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnemySpawn_Interface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsEnemyLandingCheck_Native(bool& bHit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnemyFalling_Interface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnemyDamageDown_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnemyConsiderDownDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDisableUroAction_Interface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDisableDownMotionInterface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDamageMotionEnd_Native() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCheckSameCompareGroundLoaction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCheckLookTargetTick(FVector Start, FVector End) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCheckLookScrollTick(FVector Start, FVector End);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCheckHeightChangeTick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBrainSuccess_Native() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsBrainCrashMiss_Native(bool& IsMiss);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBossEnemy_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetUniqueTickEnableRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetTopHeightLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetTargetCharacter_Native() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USearchingComponent* GetSearchingComponent_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetPressDownLoop_Native() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetNewDamageFloating_Native() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetLostData_Native(float& LostMoveTimeMin, float& LostMoveTimeMax, float& LostMoveRotationRate, float& SpeedScale, bool& IsNoMoveAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetLostActionInfoList_Native(TArray<FEmLostActionInfo>& LostActionInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetIsLandCheck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetIsJumpEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetHitObjectType_Native(TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UHateTargetComponent* GetHateTarget_Native() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetFall_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetFailedFall_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EEnemyTribe GetEnemyTribe();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UEnemyScriptComponent* GetEnemyScriptComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UEnemyAnimControllerComponent* GetEnemyAnimControllerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UEnemyAiComponentBase* GetEnemyAiComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EnemyMoveAnimKind GetDownUpMoveAnimKind_Native() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetDownTimer_Native() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetDebugEnemyDownInfinity_Native() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetDamageHitDirectionIF() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetCurrentTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCurrentActionTime_Native(float& ActionTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCapsuleComponent* GetCapsuleComponent_Native() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FlyDown_Native(bool& IsEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EntryBrainCrashAccess_Native(ARSCharacterBase* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnemyUpdateEvDitherNative(float DeltaSec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnemyStartEvDitherNative(bool bDisp, float DitherTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnemyEndEvDitherNative(bool bDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EndDamageFloating_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnableFitGroundTmp_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnableAllWeak_Native(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DropFlyingEnemy_Native(AActor* Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DisableFitGroundTmp_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DeadStart_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DamageMotionEnd_Native(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DamageFloatEnd_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckSASHologramAttack_Native(ESASHologramAttackTiming Timing, ARSCharacterBase* RequestCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckNpcDrive_Native(ENpcDriveCheckType CheckType, AActor* EnemyActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CameraAttentionEnd_Native(UCurveFloat* FovCurveOut);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CallFuncDamageDownStart_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CallFuncDamageDownLoop_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CallFuncDamageDownEnd_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CallDead_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BrainCrashLock_Native();
    
};

