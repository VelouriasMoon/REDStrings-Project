#pragma once
#include "CoreMinimal.h"
#include "ASCharacter.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "Engine/EngineTypes.h"
#include "BattleCharacterInterface.h"
#include "DirectAttackDamageParam.h"
#include "EAssassinAttackHit.h"
#include "ECharacterAttribute.h"
#include "ECharacterHitPriority.h"
#include "EEnemyAttractType.h"
#include "EEnemyGrade.h"
#include "ESpecialDamageTableType.h"
#include "ETargetFailedReason.h"
#include "EnemyFindChangeParam.h"
#include "FHitEffectPriority.h"
#include "FootStepInterface.h"
#include "HCHitResult.h"
#include "HCSkillAttribute.h"
#include "HitEffectInterface.h"
#include "RSCharacterBaseStealthModeDelegateDelegate.h"
#include "RSCharacterBaseTickDelegateDelegate.h"
#include "RSUniqueIdInterface.h"
#include "RSCharacterBase.generated.h"

class ARSCharacterBase;
class UCapsuleComponent;
class UCharacterDitherDataAsset;
class UCharactersParameterComponent;
class UDamageArrayComponent;
class UDamageResponseComponent;
class UDataTable;
class UEnemyScriptComponent;
class UFootStepComponent;
class UHPEventComponent;
class UHateTargetComponent;
class UHitCheckReceiverComponent;
class UMoveInputComponent;
class UPlayerAsyncScriptComponent;
class UPlayerDriveComponent;
class UPlayerScriptComponent;
class URSParticleSystemComponentBase;
class URSUniqueIdComponent;
class USkeletalMeshSocket;
class USoundAtomCue;
class UTargetSearchComponent;
class UTeamComponent;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API ARSCharacterBase : public AASCharacter, public IRSUniqueIdInterface, public IFootStepInterface, public IBattleCharacterInterface, public IHitEffectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSCharacterBaseTickDelegate DispatchTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSCharacterBaseStealthModeDelegate DispatchStealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterHitPriority CharacterHitPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterHitTimeSliceNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHCHitResult> DamageDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDirectAttackDamageParam> DirectDamageDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHCHitResult> DamageData_Temp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSUniqueIdComponent* UniqueIdComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterItemDropId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CoreDropId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestCurveMoveCharacterMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAnimationCurveMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationCurveMovementSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFootStepComponent* FootStepComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageArrayComponent* DamageArrayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageResponseComponent* DamageResponseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitEffectPriority PriorityHitEffect;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> mLoopSeKeyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* mReplaceSkillTable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableNpcTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockOnRestrictFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLockOnRestrictTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NotTargetableList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mCh0200CvEffect_BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mCh0200CvEffect_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCh0200CvEffect_CameraOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARSCharacterBase*> mTargetingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARSCharacterBase*> mAttackingList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyGrade mEnemyGrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECharacterAttribute> CharacterAttributeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeadBrainCrashOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfinityCrashChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotAbleBrainCrashTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sufferDamageBeforeHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGuts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeadPsychicObjComboOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeadChaseAttackOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeadLaunchAttackOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeadPhysicsAttackOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeadPsychicObjOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoDeadTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoDeadEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoCrashChanceEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEmphasisCrashGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HPPercentOfDamageBefore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableDamageAddReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableDamageAddShake;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHitInvincibleParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyAttractType AttractType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PsychicFieldDamageRateToBoss;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDownCapusleInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mDownCapsuleOriginalAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mDownCapsuleInterpAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDownCapsuleOriginalHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDownCapsuleInterpHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDownCapsuleOriginalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDownCapsuleInterpRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mDownCapsuleOriginalRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mDownCapsuleInterpRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator mDownCapsuleOriginalRelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator mDownCapsuleInterpRelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableUro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> mUroThesholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSParticleSystemComponentBase*> mCameraDitherParticlArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCapsuleComponent*> mCameraDitherCheckComponentArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterDitherDataAsset* mCameraDitherDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDitherValue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerScriptComponent* PlayerScriptCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerAsyncScriptComponent* PlayerAsyncScriptCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerDriveComponent* PlayerDriveCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyScriptComponent* EnemyScriptCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMoveInputComponent* MoveInputCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTargetSearchComponent* TargetSearchCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHateTargetComponent* HateTargetCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHPEventComponent* HPEventCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitCheckReceiverComponent* HitCheckReceiverCache;
    
public:
    ARSCharacterBase();
    UFUNCTION(BlueprintCallable)
    void UpdateInterpDownCapsule(UCapsuleComponent* charaCapsule, float DeltaSec);
    
    UFUNCTION(BlueprintCallable)
    float UpdateCameraDitherInner(float DeltaSeconds, bool UseDither, const UCapsuleComponent* checkComponent, float checkDistance);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateAnimationCurveMovement();
    
public:
    UFUNCTION(BlueprintCallable)
    void UnregisterSignificanceManager();
    
    UFUNCTION(BlueprintCallable)
    void SubTargetingList(ARSCharacterBase* subCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SubAttackingList(ARSCharacterBase* subCharacter);
    
    UFUNCTION(BlueprintCallable)
    void StopLoopSeAll(float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable)
    bool StopLoopSe(FName Name, float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable)
    void StartRestoreInterpDownCapsule(float interpSpeed, const UCapsuleComponent* charaCapsule);
    
    UFUNCTION(BlueprintCallable)
    void StartInterpDownCapsule(float interpSpeed, FName interpAttachName, float interpHalfHeight, float interpRadius, FVector RelativeLocation, FRotator RelativeRotation, const UCapsuleComponent* charaCapsule);
    
    UFUNCTION(BlueprintCallable)
    void SetVisionFogInternalLock(bool bFogInternalLock);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUseGuts(bool bUse);
    
    UFUNCTION(BlueprintCallable)
    void SetUpdateRepop(bool updateRepop);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetAbleStealthActor(bool bSearchAble);
    
    UFUNCTION(BlueprintCallable)
    void SetStealthMode(bool bStealth);
    
    UFUNCTION(BlueprintCallable)
    void SetSkipRecoverHpAnime(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetRootMotionScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetReplaceSkillTable(UDataTable* skillTable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNoCrashChanceByUseGuts(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNoCollisionAndStopAiFade(bool bNoColAndStopAi, bool& dummy);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionEffect(URSParticleSystemComponentBase* Effect);
    
    UFUNCTION(BlueprintCallable)
    void SetLockOnRestrict(bool bRestrict);
    
    UFUNCTION(BlueprintCallable)
    void SetInVisionFog(bool bInFog);
    
    UFUNCTION(BlueprintCallable)
    void SetInterruptTelepoEffect(URSParticleSystemComponentBase* Effect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInfinityCrashChance(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeDisappearInstantly(bool DisappearInstantly);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetEventCondition(bool bEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnableLockOnRestrictTarget(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableTarget(bool bDisable, const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableDamageAddShake(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableDamageAddReaction(bool bDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDeadBrainCrashOnly(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraStabilizeParameter(float distLockHz, float distRestoreHz, float distLockVt, float distRestoreVt);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraDitherToMeshAndParticles(float DeitherValue, bool bIgnorMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainCrashReceivePossible(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetAttractSelf(bool bAttract);
    
    UFUNCTION(BlueprintCallable)
    bool ResumeLoopSe(FName Name, float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable)
    void ResetMotionEffectList();
    
    UFUNCTION(BlueprintCallable)
    void ResetInterruptTelepoEffectList();
    
    UFUNCTION(BlueprintCallable)
    void ResetCharacterHitOffset();
    
    UFUNCTION(BlueprintCallable)
    void ReserveDamageDirectAttack(bool bUseFixDamage, int32 fixDamage, const FHCHitResult& HitResult, bool isForceCritical);
    
    UFUNCTION(BlueprintCallable)
    void RequestApplyCameraDither(bool bMesh, bool bParticle);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSpecialDamageEffect(URSParticleSystemComponentBase* Particle);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSignificanceManager();
    
    UFUNCTION(BlueprintCallable)
    void RegistCameraDitherParticlehandle(URSParticleSystemComponentBase* Particle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcDamageBefore(bool ignoreAutoSasMetal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FHCHitResult ProcDamageAssassinAttack(const FHCHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcDamageAfter(const TArray<FHCHitResult>& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcDamageActorHit(const FHCHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    bool PlayLoopSe(FName Name, USoundAtomCue* AtomCue, FVector Location, FRotator Rotation, float FadeTime, float FadeVolume, bool forceFirstStart);
    
    UFUNCTION(BlueprintCallable)
    bool PauseLoopSe(FName Name, float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishSpawnWaitDelayTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFellOutOfWorld();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageCalcArray();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeLockOn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnAddedBattleMemberFromMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisionFogInternalLock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsUseGuts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpdateRepop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTargetRendered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetAbleStealthActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsTargetable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStealthMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkipRecoverHpAnime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsSeeTarget(const ARSCharacterBase* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRivalTeam(UTeamComponent* Team) const;
    
    UFUNCTION(BlueprintCallable)
    bool isRegistLoopSe(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsNotAbleBrainCrashTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsNoCrashChanceByUseGuts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInVisionFog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsInfinityCrashChance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsIgnoreVisionFog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHitInvincibleParts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsGuardBadCondition(HCSkillAttribute attr) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGaugeDisappearInstantly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFriendTeam(UTeamComponent* Team) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlyingCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinishActorBeginPlay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFallingCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsEventCondition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsEnableMetalMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDamageHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableCharacterHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableDamageAddShake() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableDamageAddReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsDeadBrainCrashOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDangerousNearRange();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsCrashMaxWithGuts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterBadStatusOil() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterBadStatusFlooded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterBadStatusFlame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterBadStatusElectric() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterBadStatusConfusion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterBadStatusAttribute(HCSkillAttribute attr) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsBrainCrashSuccess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBrainCrashReceivePossible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsBrainCrashAccess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttractSelf() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsAbsoluteVisibilityTrace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetUniqueName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetUniqueId() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ARSCharacterBase*> GetTargetingList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ESpecialDamageTableType GetSpecialDamageTableType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetSkeletonSlotNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSignificanceResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetReplaceSkillTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPsychicFieldDamageRateToBoss();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetLoopSeKeyList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetGroupID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetGroundLocationSimple(bool bIncludeObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetEyePosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FEnemyFindChangeParam GetEnemyFindChangeParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetEnemyDeadReplaceLogName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDirectDamageDataArrayNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDamageDataArrayNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARSCharacterBase*> GetConstTargetingList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARSCharacterBase*> GetConstAttackingList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UCharactersParameterComponent* GetCharactersParameterComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetCharacterMovementLocationSimple() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetCharacterMovementGroundInfoSimple(FHitResult& Result) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ECharacterAttribute> GetCharacterAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCh0200CvEffect_Scale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCh0200CvEffect_CameraOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCh0200CvEffect_BoneName() const;
    
    UFUNCTION(BlueprintCallable)
    UPlayerScriptComponent* GetCachedPlayerScript();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetBrainCrashRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEnemyAttractType GetAttractType() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ARSCharacterBase*> GetAttackingList();
    
    UFUNCTION(BlueprintCallable)
    bool GetAssumptionDataNamesNative(UDataTable* DataTable, const FString& LevelName, UPARAM(Ref) TArray<FName>& ResultRowNames);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EAssassinAttackHit GetAssasinAttackHitType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActorDeltaSecondsCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USkeletalMeshSocket*> GetActiveSocketList() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceEndInterpDownCapsule(UCapsuleComponent* charaCapsule);
    
    UFUNCTION(BlueprintCallable)
    void ForceApplyCameraDither(bool bMesh, bool bParticle);
    
    UFUNCTION(BlueprintCallable)
    void EndMotionEffectImmediately();
    
    UFUNCTION(BlueprintCallable)
    void EndMotionEffect();
    
    UFUNCTION(BlueprintCallable)
    void EndInterruptTelepoEffectImmediately();
    
    UFUNCTION(BlueprintCallable)
    void EndInterruptTelepoEffect();
    
    UFUNCTION(BlueprintCallable)
    void EnableDamageHit();
    
    UFUNCTION(BlueprintCallable)
    void EnableCharacterHit(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableAbsoluteVisibilityTrace(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void DisableDamageHit();
    
    UFUNCTION(BlueprintCallable)
    void DisableCharacterHit();
    
    UFUNCTION(BlueprintCallable)
    void ClearLoopSeKeyList();
    
    UFUNCTION(BlueprintCallable)
    void ClearDamageDataArray();
    
    UFUNCTION(BlueprintCallable)
    bool CheckTargetableCharacterReason(ETargetFailedReason& OutReason, const ARSCharacterBase* chara, bool bNotLockTarget);
    
    UFUNCTION(BlueprintCallable)
    bool CheckTargetableCharacter(const ARSCharacterBase* chara);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckStrongCharacter(ARSCharacterBase* CheckCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckAttractSelf(const FHCHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddTargetingList(const ARSCharacterBase* newCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddAttackingList(const ARSCharacterBase* newCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalcUniqueDamage(const FHCHitResult& HitResult, float BaseDamage);
    
    UFUNCTION(BlueprintCallable)
    void AddTargetingList(ARSCharacterBase* AddCharacter);
    
    UFUNCTION(BlueprintCallable)
    void AddAttackingList(ARSCharacterBase* AddCharacter);
    
    
    // Fix for true pure virtual functions not being implemented
};

