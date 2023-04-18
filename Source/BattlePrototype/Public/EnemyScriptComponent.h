#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "AiParamEnemyInfo.h"
#include "ECharacterDeadType.h"
#include "EEm0800EffectType.h"
#include "EEnemyDamageType.h"
#include "EEnemyFindPlayerType.h"
#include "EEnemyFormType.h"
#include "EEnemyStealthState.h"
#include "EEnemyTickPriorityType.h"
#include "EnemyAliveAnimKind.h"
#include "EnemyDamageAnimKind.h"
#include "EnemyDamageDownAnimKind.h"
#include "EnemyKind.h"
#include "EnemyMoveAnimKind.h"
#include "GameTimer.h"
#include "HCHitResult.h"
#include "HCHitStopCauseType.h"
#include "HCSkillAttackType.h"
#include "HCSkillCommonInfo.h"
#include "HCSkillExtraType.h"
#include "SearchBasicInfo.h"
#include "SearchTestInfo.h"
#include "EnemyScriptComponent.generated.h"

class AActor;
class AEnemyWeaponBase;
class ARSCharacterBase;
class UAnimMontage;
class UChangeWeakStateComponentBase;
class UCharacterMovementComponent;
class UCharactersParameterComponent;
class UCurveFloat;
class UDamagePartCollisionComponent;
class UEnemyAnimControllerComponent;
class UEnemyAroundEffectComponentBase;
class UEnemyFixParamComponentBase;
class UEnemyLookCheckComponent;
class UHateTargetComponent;
class UPrimitiveComponent;
class USearchingComponent;
class USkeletalMeshComponent;
class USkinnedMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UEnemyScriptComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTargetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* mReceiveMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIgnoreUpdateMoveMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbIsSpawnNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbUseDefaultSpawnSearchParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbIsBattleEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbIsWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbIsEventWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbIsBT_ForceBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbIsWander;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbEnableWander;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbIsBattleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbIsBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbCollisionHitWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 mESpawnState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mInitGroundPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFlyModeChangeIgnoreSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mFlyEnemyPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyFormType mEFormType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mOutRangeFadeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mOutRangeFadeValueInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mWeaponOutRangeFadeValueInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> mRecordTickEnabledComponentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTickActorSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mUpdateFindPlayerNotRenderedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> mbDisableWeakAroundEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mBattlefieldFenceAppearRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FAiParamEnemyInfo> mAiTableDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbInvincible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mWeakNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mArmorNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterDeadType mCharaDeadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsDeadStartNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDamagePartCollisionComponent*> mWeakComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbIgnorePenetrateArmor;
    
    UEnemyScriptComponent();
    UFUNCTION(BlueprintCallable)
    bool WeakMaterialHitDamage(TArray<FHCHitResult> HitResults);
    
    UFUNCTION(BlueprintCallable)
    void UpdateWeakMaterialRate(TArray<FString> slotNameList, float rateValue, float emissivePowerValue);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateWeakAroundEffect(UPARAM(Ref) TArray<bool>& StartWeakAroundEffect, bool BrainFieldSealWeakParticle, bool PreCheck);
    
    UFUNCTION(BlueprintCallable)
    void UpdateVisibilityBasedAnimTickOption(bool isBattleenemy);
    
    UFUNCTION(BlueprintCallable)
    void UpdateUro(USkinnedMeshComponent* TargetMesh, EnemyAliveAnimKind AnimKind);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTraceChildPawn(FVector RootLocation, bool PossibleGroundCheck, float BeforeFlyPawnZ, UPARAM(Ref) FVector& ActorLocation, UPARAM(Ref) float& FlyPawnZ);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTargetInfo(const ARSCharacterBase* Target);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateSetFlying(bool DamageFloating, bool IsFlyState);
    
    UFUNCTION(BlueprintCallable)
    void UpdateScoutingNative(float DeltaSeconds, uint8 SpawnState, float ChangeSearchRange, float ChangeSearchAngle, float ChangeSensingArea, float ChangeCaptureArea, FName EyeSocketName);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRotator(bool ChildMove, float DeltaSeconds, float NoNavMoveInterpSpeed);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRootMotionChildPawn(FVector RootLocation, bool PossibleGroundCheck, float BeforeFlyPawnZ, UPARAM(Ref) FVector& ActorLocation, UPARAM(Ref) float& FlyPawnZ, float AnyMoreDifferenceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePreviousElapsedTime(float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateOutRangeFade(float& DeitherValue, float TargetRange, float DeltaSeconds, float FadeRange, float InRange, float OutRange, float FadeTime, float FadeRate, bool ForceDisp);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMainPlayerInfo();
    
    UFUNCTION(BlueprintCallable)
    void UpdateIsSameDamageReaction(bool IsMotionReception, EnemyDamageAnimKind damageKind);
    
    UFUNCTION(BlueprintCallable)
    float UpdateHitDamageMaterialArmor(float sec, float ArmorFlashScale, UPARAM(Ref) float& RefArmorFlashTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGroundEffect(UPARAM(Ref) EEm0800EffectType& GroundEffectType);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateGroundCheckTimer(UPARAM(Ref) FGameTimer& GameTimer, float GroundCheckTime);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateFlyMoveSlopeRestoreSeconds(bool FlyMoveSlopeRestore, float DeltaSeconds, float RotPow);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFlyEnemyParam(float DeltaSeconds, FVector OldLocation);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFloodedAnimRootMotionScale(UPARAM(Ref) bool& IsFoodedFlg, bool NewIsMoveAnim);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFindPlayerValue(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEnemyUro();
    
    UFUNCTION(BlueprintCallable)
    bool UpdateEnableIK(bool enableRequestIk);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDetectTarget(const ARSCharacterBase* Target, float searchViewRange, float searchViewAngle, float searchSensingRange, float captureRange, float searchHeight);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDetectPlayer(float searchViewRange, float searchViewAngle, float searchSensingRange, float captureRange, float searchHeight);
    
    UFUNCTION(BlueprintCallable)
    FVector UpdateCommonDecal(UPARAM(Ref) float& DecalLerpSpeed, float DecalFollowSpeedDefault, float DecalFollowSpeedFast, float DeletaSeconds, FVector LastDecalLocation, FVector Offset, FName AttachSocketNameAdditionalDecal);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateAreaCheck(int32 areaOutSequence, bool IsAreaOut, FVector InitPos, float DeltaSeconds, float OutRange, float offsetRange, float AreaOutTimer);
    
    UFUNCTION(BlueprintCallable)
    FVector UpdateAdditionalDecal(UPARAM(Ref) float& DecalLerpSpeed, float DecalFollowSpeedDefault, float DecalFollowSpeedFast, FVector LastAdditionalDecalLocation, FVector Offset, FName AttachSocketNameAdditionalDecal);
    
    UFUNCTION(BlueprintCallable)
    void TimerIncrementRef(UPARAM(Ref) float& Base, float Time);
    
    UFUNCTION(BlueprintCallable)
    void TimerDecrementRef(UPARAM(Ref) float& Base, float Time, bool bLimitZero);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float TimerDecrement(float Base, float Time);
    
    UFUNCTION(BlueprintCallable)
    void StartDamageAnimFunc(bool ObjAttackDirect, FVector lDir, FVector ObjAttackDirection, FVector ObjLocation, FVector AttackLocation, FVector attackDir, UPARAM(Ref) FRotator& RefRotator, UPARAM(Ref) FVector& RefHit, UPARAM(Ref) FVector& RefDir);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponOutRangeFade(TArray<AEnemyWeaponBase*> WeaponArray, float DeitherValue, float FadeRate);
    
    UFUNCTION(BlueprintCallable)
    void SetWeakMaterialValue(float _emissivePowerMax, float _pointRateMax);
    
    UFUNCTION(BlueprintCallable)
    void SetWeakEmissiveOff_Native(const FString& WeakSlotName);
    
    UFUNCTION(BlueprintCallable)
    void SettingOutRangeFade(float OutRange);
    
    UFUNCTION(BlueprintCallable)
    void SetTickIntervalSecondsParam(float _TickPriorityIntervalMiddle, float _TickPriorityLimitMiddle, float _TickPriorityIntervalTop, float _TickPriorityLimitTop, float _TickPriorityIntervalBottom, float _TickPriorityLimitBottom);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetSearchTestInfo(const FSearchTestInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetSearchBasicInfo(const FSearchBasicInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void SetStopWeakEmissive(bool _isStop);
    
    UFUNCTION(BlueprintCallable)
    void SetSimulatePhisics(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetSaveBodyEmissiveValue(int32 Index, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRestoreBrainFieldLocation(FVector restoreLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetQuickFind(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetOutRangeFadeValue(float FadeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMainPlayerSearchTestInfo(const FSearchTestInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void SetMainPlayerSearchBasicInfo(const FSearchBasicInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnorePenetrateArmor(bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreCrashChance(bool bIgnoreCrashChance);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreCaptureRange(bool isIgnore);
    
    UFUNCTION(BlueprintCallable)
    void SetFindValue(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFindPlayerType(EEnemyFindPlayerType findType);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableWeak(bool _isEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableWeakAroundEffect(int32 Index, bool _isEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableTargetBattleNative(bool _disable);
    
    UFUNCTION(BlueprintCallable)
    void SetCoolDownTimerBP(int32 Index, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetConsiderDownDead(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAreaOutDamageWaitTimer(float addTime, float maxTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetAbsolutelyNoReactionBP(bool bEnable);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAbsoluteDetectTarget(bool isAbsolute, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void SearchForceReactionType(TArray<HCSkillExtraType> SkillExtraTypes, UPARAM(Ref) TArray<HCSkillExtraType>& ForceExtraTypes);
    
    UFUNCTION(BlueprintCallable)
    void RestoreWeakEmissive_Native(const FString& WeakSlotName);
    
    UFUNCTION(BlueprintCallable)
    void ResetAreaOutParam();
    
    UFUNCTION(BlueprintCallable)
    bool RequestLaunchMotion_Damage(bool LaunchIgnorePriority);
    
    UFUNCTION(BlueprintCallable)
    bool RequestLaunchMotion(bool LaunchIgnorePriority, bool IsMotionReception, UPARAM(Ref) bool& IsOverWriteMotion);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDownMotion(FHCSkillCommonInfo skillInfo, bool IsDownSasFlagIgnoreDownTriggerFlag);
    
    UFUNCTION(BlueprintCallable)
    bool RequestAddDamageL(FHCSkillCommonInfo skillInfo);
    
    UFUNCTION(BlueprintCallable)
    FHCHitResult ReplaceHitResult(FHCHitResult HitResult);
    
    UFUNCTION(BlueprintCallable)
    void RecordTickEnabledComponents(TArray<UActorComponent*> ComponentList);
    
    UFUNCTION(BlueprintCallable)
    void PutoutInformation(bool IsSideDamage, FVector HitDir, FVector hitPosition, bool& IsRight, bool& IsLeft, bool& isBack);
    
    UFUNCTION(BlueprintCallable)
    EEnemyTickPriorityType PrioritizeTickNative(EEnemyTickPriorityType InTickPriority, bool InIsBoss, bool InIsSimple, bool InIsBattling, float InRangeMiddle, float RangeTop, float HeightTop);
    
    UFUNCTION(BlueprintCallable)
    void PreUpdateWeakMaterialRate(TArray<FString> slotNameList, UPARAM(Ref) float& materialTime, float DeltaSec, bool& r_isMultiWeak);
    
    UFUNCTION(BlueprintCallable)
    bool PreUpdateWeakAroundEffect(bool& isExit);
    
    UFUNCTION(BlueprintCallable)
    void PreTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    bool PreAreaCheck(int32 areaOutSequence);
    
    UFUNCTION(BlueprintCallable)
    void PostTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageActorHit_IsHitWeek(UPARAM(Ref) FHCHitResult& RefHitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageActorHit_DamageInfo(FHCHitResult HitResult, AActor*& Attack, FVector& DamageLocation, FVector& DamageDir);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageActorHit_ChangeWeakState(AActor* attacker, FHCHitResult HitResult);
    
    UFUNCTION(BlueprintCallable)
    bool NotDamageMontage(bool IsRequestAddDamageMontage);
    
    UFUNCTION(BlueprintCallable)
    void ModifyHitResultPrimitiveWeakPoint(USkeletalMeshComponent* Mesh, UPARAM(Ref) FHCHitResult& HitResult, bool& ModifiedPrimitive);
    
    UFUNCTION(BlueprintCallable)
    void ModifyElectricAccumulationBySuperArmor(UPARAM(Ref) float& refElectric, bool isSuperArmor);
    
    UFUNCTION(BlueprintCallable)
    void MainTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidSaveBodyEmissiveValue(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpdateEnemyTickEnableNative(bool isBoss, bool StopUpdateEnemyTickEnable, bool IsTickMove) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTrigger(TArray<HCSkillExtraType> SkillExtraTypes);
    
    UFUNCTION(BlueprintCallable)
    bool IsSuspendIKCondition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuspendFollowAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStopWeakEmissive();
    
    UFUNCTION(BlueprintCallable)
    bool IsStealthSeeEnebleNative(bool& IsValid);
    
    UFUNCTION(BlueprintCallable)
    bool IsStealthEnableNative();
    
    UFUNCTION(BlueprintCallable)
    bool IsStateStealthNative(EEnemyStealthState StealthState);
    
    UFUNCTION(BlueprintCallable)
    bool IsSkillExtraType_CommonInfo(FHCSkillCommonInfo skillInfo, HCSkillExtraType ExtraType);
    
    UFUNCTION(BlueprintCallable)
    bool IsSkillExtraType(TArray<HCSkillExtraType> SkillExtraTypes, HCSkillExtraType ExtraType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuickFind() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPsychicObjectCombo(FHCHitResult HitResult);
    
    UFUNCTION(BlueprintCallable)
    bool IsPsychic_Obj_MapGimmickDamage(HCSkillAttackType SkillAttackType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerOutOfBattleFieldFence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotTargetNative();
    
    UFUNCTION(BlueprintCallable)
    bool IsNotDamageMotion(bool NotDamageMotion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNeedResetStateMachine(float ElapsedTime, float ResetSecond) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveAnim(EnemyMoveAnimKind checkKind) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInvincible(bool& invincibleAll, bool& invincibleParts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitLayout_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIgnorePenetrateArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIgnoreCaptureRange() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHpPercentDown(float percent, bool& Error);
    
    UFUNCTION(BlueprintCallable)
    bool IsHitWeak_HitResultS(FHCHitResult HitResults);
    
    UFUNCTION(BlueprintCallable)
    bool IsHitWeak_HitResult(TArray<FHCHitResult> HitResults);
    
    UFUNCTION(BlueprintCallable)
    bool IsHitWeak(UPrimitiveComponent* PrimitiveComponent, FHCSkillCommonInfo skillInfo);
    
    UFUNCTION(BlueprintCallable)
    bool IsHitPart(UPrimitiveComponent* PrimitiveComponent, int32 no);
    
    UFUNCTION(BlueprintCallable)
    bool IsHitFromMainPlayer(AActor* attacker);
    
    UFUNCTION(BlueprintCallable)
    bool IsFlying();
    
    UFUNCTION(BlueprintCallable)
    bool IsFlyHeightAdjust();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFloodedAnimRootMotionScale(bool NewIsMoveAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEvent() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEnemyTickDisableCondition_Native(bool bDiscoverClosed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemyStopAnimKind(bool IsWait, bool IsEventWait) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemyDamageLaunchCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableWeak();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableMoveRangeNative(float EnableMoveArea, float DistanceFromEnemyInitToPlayer, float EnableMoveHeight, float HeightFromEnemyInitToPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableLostAction() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDuringLaunchDamage(bool IsNewLaunch, bool DamageFloating, bool NewDamageFloating);
    
    UFUNCTION(BlueprintCallable)
    bool IsDownDamageToDead(bool bEnableConsiderFlag);
    
    UFUNCTION(BlueprintCallable)
    bool IsDistanceAngleCheck(AActor* Target, FVector TargetLocation, float Range, float Angle, FRotator Rot, bool noHeight, FVector selfLocation, bool selfLocationOn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableWeakAroundEffect(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableTargetBattleNative();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDelayDeath_Native();
    
    UFUNCTION(BlueprintCallable)
    bool IsDeadAfterReaction(TArray<HCSkillExtraType> SkillExtraTypes);
    
    UFUNCTION(BlueprintCallable)
    bool IsDamageSuperArmor();
    
    UFUNCTION(BlueprintCallable)
    bool IsDamageKnockBack();
    
    UFUNCTION(BlueprintCallable)
    bool IsDamageDownWait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrashChanceAndIgnore();
    
    UFUNCTION(BlueprintCallable)
    bool IsContinuityDamageMotion(EnemyAliveAnimKind AliveAnimKind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConsiderDownDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCheckEnemyKind(EnemyKind checkKind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCheckDamageDownAnimKind(EnemyDamageDownAnimKind checkKind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCheckDamageAnimKind(EnemyDamageAnimKind checkKind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCheckAliveAnimKind(EnemyAliveAnimKind checkKind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeOldFindType() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBrainCrashDeadState();
    
    UFUNCTION(BlueprintCallable)
    bool IsArmor(UPrimitiveComponent* PrimitiveComponent);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbsolutelyNoReactionBP() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbsoluteDetectTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UCharacterMovementComponent* CharaMoveComp, UCharactersParameterComponent* CharactersParameterComp, UEnemyLookCheckComponent* LookCheckComp, UEnemyAnimControllerComponent* AnimController, USkeletalMeshComponent* MeshComp, UHateTargetComponent* HateTargetComp, UEnemyFixParamComponentBase* FixParam, USearchingComponent* SearchingComponent, UChangeWeakStateComponentBase* ChangeWeakStateComponent, UEnemyAroundEffectComponentBase* AroundEffectComponentBase, bool IsIgnoreAllowance, bool IsIgnoreRestrictAttackOther, bool UseDefaultSpawnSearchParam);
    
    UFUNCTION(BlueprintCallable)
    void InitCoolDownTimerBP(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void GetUsedWeaponAllListNative(TArray<AEnemyWeaponBase*> WeaponList, UPARAM(Ref) TArray<AEnemyWeaponBase*>& Result);
    
    UFUNCTION(BlueprintCallable)
    void GetTickIntervalSecondsParam(float& OutDefaultSeconds, float& OutMaxSeconds, EEnemyTickPriorityType InTickPriority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSearchTestInfo GetTargetSearchTestInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSearchBasicInfo GetTargetSearchBasicInfo() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTargetAngle(FVector baseDist, FVector targetDist);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSensingAreaNative(uint8 SpawnState, float ChangeSensingArea);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSearchRangeNative(uint8 SpawnState, float ChangeSearchRange);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSearchAngleNative(uint8 SpawnState, float ChangeSearchAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSaveBodyEmissiveValue(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRestoreBrainFieldLocation();
    
    UFUNCTION(BlueprintCallable)
    float GetParamTableResistance(EEnemyDamageType DamageType);
    
    UFUNCTION(BlueprintCallable)
    float GetParamBasicAccumulation(EEnemyDamageType DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEnemyFindPlayerType GetOldFindPlayerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveAreaNative();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSearchTestInfo GetMainPlayerSearchTestInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSearchBasicInfo GetMainPlayerSearchBasicInfo() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsDead_Native();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsBattleMode_Native();
    
    UFUNCTION(BlueprintCallable)
    void GetHitStopParam(FHCSkillCommonInfo skillInfo, bool& IgnoreTarget, HCHitStopCauseType& CauseType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFindValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEnemyFindPlayerType GetFindPlayerType() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetEyePositionNative(FName EyeSocketName);
    
    UFUNCTION(BlueprintCallable)
    FVector GetDamagePartDir(UDamagePartCollisionComponent* DamagePartCollisionComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoolDownTimerBP(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCaptureAreaNative(uint8 SpawnState, float ChangeCaptureArea);
    
    UFUNCTION(BlueprintCallable)
    bool GetAndUpdateContinuousSameDamageReaction();
    
    UFUNCTION(BlueprintCallable)
    FAiParamEnemyInfo GetAiTableDataNative(uint8 actionEnum);
    
    UFUNCTION(BlueprintCallable)
    void ForceSettingOutRangeFade(bool isDisp);
    
    UFUNCTION(BlueprintCallable)
    void FlyPawnSetActorAllTickEnabledNative(bool Enabled, AActor* FlyEnemyPawn, UActorComponent* DefaultSceneRoot, UActorComponent* FloatingPawnMovement, AActor* AIController, UActorComponent* PathFollowingComp);
    
    UFUNCTION(BlueprintCallable)
    void FlyHeightAdjust(float DeltaSeconds, float FlyBaseZ, bool IsFlyState, bool NewIsMoveAnim, bool FlyAdjust, float FlyLowerHeight, float FlyHighestHeight, float FlyAdjustSpeed, float AnyMoreDifferenceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void EnableTickComponentWasRecording();
    
    UFUNCTION(BlueprintCallable)
    void EnableLostAction(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    bool EnableInvincible(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void ClearSaveBodyEmissiveValue();
    
    UFUNCTION(BlueprintCallable)
    bool CheckUniqueObjState_CrashChanceCancel(bool IsBrainCrashAccess);
    
    UFUNCTION(BlueprintCallable)
    void CheckUniqueObjState_AddSkillExtraType(FHCHitResult HitResult, UPARAM(Ref) TArray<HCSkillExtraType>& SkillExtraType);
    
    UFUNCTION(BlueprintCallable)
    void CheckIgnoreSuperArmor(TArray<HCSkillExtraType> SkillExtraTypes);
    
    UFUNCTION(BlueprintCallable)
    float CalcWeakAttackMaterialRate(UPARAM(Ref) float& l_Value, UPARAM(Ref) float& l_EmissivePowerValue, UPARAM(Ref) float& WeakDamageMaterialTime, float WeakDamageMaterialScale, float WeakMaterialPointRateMax, float WeakMaterialEmissivePowerMax, UCurveFloat* WeakMaterialCurve, UPARAM(Ref) bool& ChangingWeakDamageMaterial, UPARAM(Ref) bool& IsWeakEffect, bool IsMultiWeak);
    
    UFUNCTION(BlueprintCallable)
    void CalcTickSecondsNative(float& OutIntervalActorTime, bool& OutExecTick, bool& OutIncrementUpdateEnemy, float DeltaSec, EEnemyTickPriorityType InTickPriority, bool InCanUpdateEnemy);
    
    UFUNCTION(BlueprintCallable)
    bool CalcTickSeconds_Native(float DeltaSec);
    
    UFUNCTION(BlueprintCallable)
    void CalcTickNative(FVector InitPos, float EnableMoveArea, float EnableMoveHeight, bool& IsHitCheck, float& DistanceFromEnemyInitToPlayer, float& HeightFromEnemyInitToPlayer, float& DistanceFromEnemyToPlayer, float& HeightFromEnemyToPlayer);
    
    UFUNCTION(BlueprintCallable)
    ARSCharacterBase* CalcTargetInfo(float& l_TargetDistance, float& l_TargetHeight, float& l_TargetAngle, bool InIsBattling, FVector InBaseLocation);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSearchTestInfo CalcSearchTest(const ARSCharacterBase* Target, const FSearchBasicInfo& basicInfo, float searchViewRange, float searchViewAngle, float searchSensingRange, float captureRange, float searchHeight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSearchBasicInfo CalcSearchInfo(const ARSCharacterBase* Target) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CalcNormalMaterialRate(UPARAM(Ref) float& l_Value, UPARAM(Ref) float& l_EmissivePowerValue, UPARAM(Ref) float& WeakDamageMaterialTime, float NormalWeakMaterialScale, float NormalWeakMaterialRateMin, float NormalWeakMaterialRateMax, float NormalWeakMaterialEmissivePowerMin, float NormalWeakMaterialEmissivePowerMax, UCurveFloat* WeakMaterialCurve);
    
    UFUNCTION(BlueprintCallable)
    float CalcFinalDamageByDefence(float BaseDamage);
    
    UFUNCTION(BlueprintCallable)
    bool CalcAccumulationByDefence_CheckInvincible(UPARAM(Ref) float& refWince, UPARAM(Ref) float& refKnockback, UPARAM(Ref) float& refDown, UPARAM(Ref) float& refLaunch, UPARAM(Ref) float& refFlame, UPARAM(Ref) float& refElectric, UPARAM(Ref) float& refFlooded, UPARAM(Ref) float& refOil, UPARAM(Ref) float& refConfusion, UPARAM(Ref) float& refCrashScale);
    
    UFUNCTION(BlueprintCallable)
    void CalcAccumulationByDefence(float refWince, float refKnockback, float refDown, float refCrashScale, float refCrashCapCheckRate, float& OutWince, float& OutKnockback, float& OutDown, float& OutCrashScale, float& OutCrashCapCheckRate, AActor* attackActor, bool IsEnemyDamageknockBack);
    
    UFUNCTION(BlueprintCallable)
    void BrakeArmor(TArray<int32> ArmorPartsNo);
    
    UFUNCTION(BlueprintCallable)
    void AddResetSecondRate();
    
    UFUNCTION(BlueprintCallable)
    void AddBattleActor(UPARAM(Ref) bool& IsNotAddedBattleManager);
    
};

