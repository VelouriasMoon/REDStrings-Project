#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "Math/Vector2D.h"
#include "Components/ActorComponent.h"
#include "AssassinAttackData.h"
#include "BrainFieldPsychicGaugeDirectionData.h"
#include "EAssassinAttackHit.h"
#include "EEffecacyType.h"
#include "EFindTargetBrainTalkType.h"
#include "EFriendLotType.h"
#include "EPlayerActionKind.h"
#include "EPlayerActionStatus.h"
#include "EPlayerBrainFieldDanger.h"
#include "EPlayerBrainFieldState.h"
#include "EPlayerCommonStatus.h"
#include "EPlayerID.h"
#include "EPlayerNeonNotifyType.h"
#include "EPlayerUpperActionStatus.h"
#include "ESASEffect.h"
#include "E_SASKindNative.h"
#include "FriendLotData.h"
#include "HCCollisionCommonInfo.h"
#include "HCSkillAttackType.h"
#include "HCSkillCommonInfo.h"
#include "PlayerBrainFieldData.h"
#include "PlayerBrainFieldHelpData.h"
#include "PlayerBrainFieldIntarvalEndDelegateDelegate.h"
#include "PlayerBrainFieldPsychicGaugeDelegateDelegate.h"
#include "PlayerBrainFieldStateDelegateDelegate.h"
#include "PlayerBrainFieldUpdateDelegateDelegate.h"
#include "PlayerBrainTalkHitCountDelegateDelegate.h"
#include "PlayerRegenerateDelegateDelegate.h"
#include "PlayerStuckDelegateDelegate.h"
#include "RequestLunaticBrainTalkDelegateDelegate.h"
#include "SASEffectState.h"
#include "Templates/SubclassOf.h"
#include "PlayerScriptComponent.generated.h"

class AActor;
class ARSCharacterBase;
class UAttackInputComponent;
class UCharacterMovementComponent;
class UCharactersParameterComponent;
class UMoveInputComponent;
class UParticleSystem;
class UPlayerAnimControllerComponent;
class UPlayerAsyncScriptComponent;
class UPlayerCameraComponent;
class UPlayerInputBaseComponent;
class URSParticleSystemComponentBase;
class URSStateManageComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerScriptComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSASEffectState SAS_Fire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSASEffectState SAS_Metal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSASEffectState SAS_SeeThrough;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSASEffectState SAS_Telepo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSASEffectState SAS_Stealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSASEffectState SAS_Electric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSASEffectState SAS_Copy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSASEffectState SAS_Accelerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSASEffectState SAS_Psychic_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSASEffectState SAS_Psychic_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSASEffectState SAS_Invalid;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> _LocationHistroy;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConfusionStickParam_InputTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConfusionStickParam_InputTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConfusionStickParam_IntervalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConfusionStickParam_IntervalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConfusionAttackParam_IntervalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConfusionAttackParam_IntervalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConfusionAttackParam_Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConfusionPsychicParam_Rate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRegenerateDelegate DispatchSkillRegenerateHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NeonNotifyTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URSParticleSystemComponentBase> NeonNotifyParticleComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* NeonNotifyParticle_DriveMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* NeonNotifyParticle_Dying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* NeonNotifyParticle_ActionFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NeonNotifyParticleAttach_SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NeonNotifyParticleAttach_Offset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerBrainFieldUpdateDelegate DispatchUpdateBrainField;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerBrainFieldStateDelegate DispatchBrainFieldState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerBrainFieldIntarvalEndDelegate DispatchBrainFieldIntervalEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestLunaticBrainTalkDelegate DispatchLunaticBrainTalk;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerBrainFieldPsychicGaugeDelegate DispatchBrainFieldPsychicGaugeChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStuckDelegate DispatchBackGroundStuck;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainFieldPsychicGaugeDirectionData> PsychicGaugeDirectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPlayerID> BrainFieldHelpedPlayerList;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerBrainTalkHitCountDelegate DispatchBrainTalkHitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param_BrainTalkHitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Param_BrainTalkHitCountClearIntarval;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<E_SASKindNative> BrainTalkHitCountCheckSASList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BRAINFIELDPSYCHIC_BOSS_RATE;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvoidWallCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StagnationCheckLocationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StagnationResetTime;
    
public:
    UPlayerScriptComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateMoveInputTrigger(bool bEnableAddMove, float MaxSpeedScale, float MoveInputScale, float MoveDeadEndDistance);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEnableActionCommon();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDisableAction();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCameraRotate(float DeltaSeconds, const FVector2D& FixCameraLeftStick, bool bLockTarget, bool bDisableCameraControl, bool bUseCutCamera, bool bUniqueObjectInput);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateBrainFieldInterval(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBrainField(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void SubUpperActionStatus(EPlayerUpperActionStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void SubPlayerStatus(EPlayerCommonStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void SubActionStatus(EPlayerActionStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void SetRunSpeedRate(float InRate);
    
    UFUNCTION(BlueprintCallable)
    void SetRestrictStagnationCheck(bool bRestrict);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseTimer(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxFlyingDodgeCount(int32 count);
    
    UFUNCTION(BlueprintCallable)
    void SetLotFriendData(EFriendLotType lotType, const FFriendLotData& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreFallTimer(float IgnoreTime);
    
    UFUNCTION(BlueprintCallable)
    void SetFlyingActionLimitDistance(float limitDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetCombinationVisionPenaltyDamageRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetCombinationVisionPenalty(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainFieldState(EPlayerBrainFieldState State);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainFieldExtraTime(float ExtraTime);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainFieldData(const FPlayerBrainFieldData& InData, const FPlayerBrainFieldData& InFirstBrainFieldData, const FPlayerBrainFieldHelpData& InHelpData, TArray<FBrainFieldPsychicGaugeDirectionData> PsychicGaugeData);
    
    UFUNCTION(BlueprintCallable)
    void SetBattling(bool bBattle);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackFlyingEnd();
    
    UFUNCTION(BlueprintCallable)
    void ResetStagnation();
    
    UFUNCTION(BlueprintCallable)
    void ResetHistory();
    
    UFUNCTION(BlueprintCallable)
    void PreTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void PostTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void PauseBrainFieldTimer(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    bool OverwriteAttackCollisionInfo_ForPlayer(UPARAM(Ref) FHCCollisionCommonInfo& refCommonInfo, UPARAM(Ref) FHCSkillCommonInfo& refSkill, bool bAddTelepoAttack);
    
    UFUNCTION(BlueprintCallable)
    bool OverwriteAttackCollisionInfo_ForHero(UPARAM(Ref) FHCCollisionCommonInfo& refCommonInfo, UPARAM(Ref) FHCSkillCommonInfo& refSkill, float SkillWeaponCrashScale, float SkillPsychicCrashScale, float SkillDriveCrashScale, float NPC_HERO_CRASH_RATE, bool bExJustDodgeFlag, float ExJustDodgeAttackRate, float ExJustDodgeCrashRate, float Skill_AerialAttackPsychicGaugeUp);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginAvoidWall(FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    void NextBrainFieldState();
    
    UFUNCTION(BlueprintCallable)
    void MainTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    EPlayerID LotFriendPlayer(EFriendLotType lotType, bool bDebugSuccess);
    
    UFUNCTION(BlueprintCallable)
    bool LotAssassinAttackLevelOffset(EAssassinAttackHit EffectiveType, int32 OwnerLevel, int32 TargetLevel, bool bSeeThrough, const FAssassinAttackData& CalcData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpperActionStatus(EPlayerUpperActionStatus Status) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsSubAttackButtonAttack(const FHCSkillCommonInfo& skillInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStagnation(bool bCheckLocation, FVector InCurrentLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSearchAbleActionIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunOrSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningAnimStateForAIMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRestrictStagnationCheck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerStatus(EPlayerCommonStatus Status) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInAerial() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsOverwriteAttackAutoAim();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitializedSASEffectFixParam(E_SASKindNative kind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsEnableSASEffect(E_SASKindNative kind, ESASEffect Effect, bool& OutEnable, float& OutParam0, float& OutParam1, float& OutParam2, float& OutParam3) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableSAS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableNpcAssist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDriveFullDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableActionUseItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableActionSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableActionPsychic(bool bPsychicEx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableActionJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableActionIdleWalkRun(bool bIgnoreExecTelepo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableActionDodge(bool bIgnoreBadStatus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableActionDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableActionCommon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableActionChangeBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableActionBrainFieldOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableActionBrainFieldClose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableActionBrainCrash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableActionAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableActionDodge(bool bIgnoreBadStatus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBrainFieldInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveSAS(E_SASKindNative kind) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveBrainFieldGameOverTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionStatus(EPlayerActionStatus Status) const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(bool bNpc, UCharacterMovementComponent* CharaMoveComp, UPlayerAnimControllerComponent* AnimControllerComp, UCharactersParameterComponent* CharactersParameterComp, URSStateManageComponent* StateManageComp, URSStateManageComponent* UpperStateManageComp, UPlayerInputBaseComponent* PlayerInputComp, UAttackInputComponent* AttackInputComp, UPlayerAsyncScriptComponent* PlayerAsyncComp, UMoveInputComponent* MoveInputComp, UPlayerCameraComponent* PlayerCameraComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSASEffectState GetSASEffectStateConst(E_SASKindNative kind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSASEffectState GetSASEffectState(E_SASKindNative kind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRecentAverageVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerAnimControllerComponent* GetPlayerAnimController() const;
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerAccessoryExtendParameter(EEffecacyType effectType, bool& bOutEquip, TArray<float>& outParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerAccessoryEffect(EEffecacyType effectType, bool& bOutEquip, float& OutParam) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetLocationHistory();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsDead_Native();
    
    UFUNCTION(BlueprintCallable)
    void GetConfusionStickInput(bool& bOverwriteInput, FVector2D& StickInput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetCameraRotation() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetBrainFieldWarningCount();
    
    UFUNCTION(BlueprintCallable)
    float GetBrainFieldTimeRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerBrainFieldState GetBrainFieldState() const;
    
    UFUNCTION(BlueprintCallable)
    float GetBrainFieldRemainTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerID GetBrainFieldHelpPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBrainFieldHelpedCount();
    
    UFUNCTION(BlueprintCallable)
    FName GetBrainFieldHelpBrainTalkID();
    
    UFUNCTION(BlueprintCallable)
    float GetBrainFieldGameOverTimeRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerBrainFieldDanger GetBrainFieldDangerLV() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSettingConfusionStick(float InputTime);
    
    UFUNCTION(BlueprintCallable)
    void ExcludeLotPlayer(EPlayerID ID, EFriendLotType lotType);
    
    UFUNCTION(BlueprintCallable)
    void EventDirectBrainFieldWarning();
    
    UFUNCTION(BlueprintCallable)
    void EndNeonNotify();
    
    UFUNCTION(BlueprintCallable)
    void EndConfusionStick();
    
    UFUNCTION(BlueprintCallable)
    void EndBrainField();
    
    UFUNCTION(BlueprintCallable)
    void EnableRegenerateHP(float RegenerateHPRate, float IntervalTime);
    
    UFUNCTION(BlueprintCallable)
    void DisableRegenerateHP();
    
    UFUNCTION(BlueprintCallable)
    void DisableBrainFieldLunaticBrainTalk(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void DebugNoBrainFieldHelp(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void DebugLotPlayerTest(EFriendLotType lotType, int32 count);
    
    UFUNCTION(BlueprintCallable)
    void DebugInfiniteBrainField(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void DebugCoverDamagePrintLog(bool bOutput);
    
    UFUNCTION(BlueprintCallable)
    void DebugBrainFieldHelpPlayerFix(EPlayerID FixPlayerID);
    
    UFUNCTION(BlueprintCallable)
    void DebugBrainFieldHelpForceSuccess(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void ClearUpperActionStatus();
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayerStatus();
    
    UFUNCTION(BlueprintCallable)
    void ClearFlyingDodgeCount();
    
    UFUNCTION(BlueprintCallable)
    void ClearExcludeLotPlayer(EFriendLotType lotType);
    
    UFUNCTION(BlueprintCallable)
    void ClearActionStatus();
    
    UFUNCTION(BlueprintCallable)
    void CheckFixCameraFinish(const FVector2D& FixCameraLeftStick, bool bLockTarget);
    
    UFUNCTION(BlueprintCallable)
    TArray<EFindTargetBrainTalkType> CheckFindBrainTalk(ARSCharacterBase* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    EPlayerID CheckBrainFieldHelpPlayer();
    
    UFUNCTION(BlueprintCallable)
    float CalcFinalDamageByDefence_ForPlayer(float Damage, AActor* attackActor, float NPC_DEFENCE_DAMAGE_RATE);
    
    UFUNCTION(BlueprintCallable)
    float CalcFinalDamageByDefence_ForHero(float Damage, AActor* attackActor, bool bSkill_PinchStatusUp, float Skill_PinchDamageDownRate, float Skill_BrainFieldDamageCut);
    
    UFUNCTION(BlueprintCallable)
    float CalcFinalDamageByAttack_ForPlayer(float Damage, AActor* defenseActor, const FHCSkillCommonInfo& skillInfo, float COPY_ATTACK_RATE, float NPC_ATTACK_DAMAGE_RATE);
    
    UFUNCTION(BlueprintCallable)
    float CalcFinalDamageByAttack_ForHero(float Damage, AActor* defenseActor, const FHCSkillCommonInfo& skillInfo, bool bSkill_PinchStatusUp, float Skill_DownDamageUp, float Skill_PinchAttackUpRate);
    
    UFUNCTION(BlueprintCallable)
    bool CalcDamageByAttack_ForHero(UPARAM(Ref) float& refPhysicsDamage, UPARAM(Ref) float& refObjDamage, UPARAM(Ref) float& refFlameDamage, UPARAM(Ref) float& refElectricDamage, UPARAM(Ref) float& refCriticalDamageRate, AActor* defenseActor);
    
    UFUNCTION(BlueprintCallable)
    float CalcCritical_ForPlayer(float Critical, AActor* defenseActor, bool isEnpc, AActor* TargetActor, bool bAssassinAttack);
    
    UFUNCTION(BlueprintCallable)
    bool CalcAccumulationByDefence_ForPlayer(UPARAM(Ref) float& refWince, UPARAM(Ref) float& refKnockback, UPARAM(Ref) float& refDown, UPARAM(Ref) float& refLaunch, UPARAM(Ref) float& refFlame, UPARAM(Ref) float& refElectric, UPARAM(Ref) float& refFlooded, UPARAM(Ref) float& refOil, UPARAM(Ref) float& refConfusion, UPARAM(Ref) float& refCrashScale, UPARAM(Ref) float& refCrashCapCheckRate, AActor* attackActor, bool isSuperArmor);
    
    UFUNCTION(BlueprintCallable)
    bool CalcAccumulationByAttack_ForPlayer(UPARAM(Ref) float& refWince, UPARAM(Ref) float& refKnockback, UPARAM(Ref) float& refDown, UPARAM(Ref) float& refLaunch, UPARAM(Ref) float& refFlame, UPARAM(Ref) float& refElectric, UPARAM(Ref) float& refFlooded, UPARAM(Ref) float& refOil, UPARAM(Ref) float& refConfusion, UPARAM(Ref) float& refCrashScale, UPARAM(Ref) float& refCrashCapCheckRate, AActor* defenseActor, HCSkillAttackType AttackType, bool bCopyActor, const FHCSkillCommonInfo& skillInfo, float COPY_REACTION_RATE, float COPY_BADSTATUS_RATE);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcAccessoryBadStatusRate(float Value, float Rate) const;
    
    UFUNCTION(BlueprintCallable)
    void BrainTalk_ClearHitCount();
    
    UFUNCTION(BlueprintCallable)
    void BrainTalk_CheckSASHitCount(bool bCheck, E_SASKindNative kind);
    
    UFUNCTION(BlueprintCallable)
    void BrainTalk_AddHitCount(bool bNoDamage);
    
    UFUNCTION(BlueprintCallable)
    void BeginNeonNotify(EPlayerNeonNotifyType Type);
    
    UFUNCTION(BlueprintCallable)
    void BeginConfusionStick();
    
    UFUNCTION(BlueprintCallable)
    void BeginBrainField();
    
    UFUNCTION(BlueprintCallable)
    void ApplySASEffectPassiveAllLinkAble();
    
    UFUNCTION(BlueprintCallable)
    void ApplySASEffectPassiveAll();
    
    UFUNCTION(BlueprintCallable)
    void ApplySASEffectPassive(E_SASKindNative kind);
    
    UFUNCTION(BlueprintCallable)
    void ApplySASEffectActive(E_SASKindNative kind, bool bActivate);
    
    UFUNCTION(BlueprintCallable)
    void AddUpperActionStatus(EPlayerUpperActionStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerStatus(EPlayerCommonStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void AddFlyingDodgeCount();
    
    UFUNCTION(BlueprintCallable)
    void AddBrainFieldHelpExtraTime();
    
    UFUNCTION(BlueprintCallable)
    void AddActionStatus(EPlayerActionStatus Status);
    
    UFUNCTION(BlueprintCallable)
    bool ActionState_CommonTransition(EPlayerActionKind& NextAction, int32& NextParam);
    
};

