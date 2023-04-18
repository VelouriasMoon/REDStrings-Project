#include "RSCharacterBase.h"
#include "FootStepComponent.h"
#include "RSUniqueIdComponent.h"

class ARSCharacterBase;
class UCapsuleComponent;
class UDataTable;
class UPlayerScriptComponent;
class URSParticleSystemComponentBase;
class USkeletalMeshSocket;
class USoundAtomCue;
class UTeamComponent;

void ARSCharacterBase::UpdateInterpDownCapsule(UCapsuleComponent* charaCapsule, float DeltaSec) {
}

float ARSCharacterBase::UpdateCameraDitherInner(float DeltaSeconds, bool UseDither, const UCapsuleComponent* checkComponent, float checkDistance) {
    return 0.0f;
}

void ARSCharacterBase::UpdateAnimationCurveMovement() {
}

void ARSCharacterBase::UnregisterSignificanceManager() {
}

void ARSCharacterBase::SubTargetingList(ARSCharacterBase* subCharacter) {
}

void ARSCharacterBase::SubAttackingList(ARSCharacterBase* subCharacter) {
}

void ARSCharacterBase::StopLoopSeAll(float FadeTime, float FadeVolume) {
}

bool ARSCharacterBase::StopLoopSe(FName Name, float FadeTime, float FadeVolume) {
    return false;
}

void ARSCharacterBase::StartRestoreInterpDownCapsule(float interpSpeed, const UCapsuleComponent* charaCapsule) {
}

void ARSCharacterBase::StartInterpDownCapsule(float interpSpeed, FName interpAttachName, float interpHalfHeight, float interpRadius, FVector RelativeLocation, FRotator RelativeRotation, const UCapsuleComponent* charaCapsule) {
}

void ARSCharacterBase::SetVisionFogInternalLock(bool bFogInternalLock) {
}

void ARSCharacterBase::SetUseGuts_Implementation(bool bUse) {
}

void ARSCharacterBase::SetUpdateRepop(bool updateRepop) {
}

void ARSCharacterBase::SetTargetAbleStealthActor(bool bSearchAble) {
}

void ARSCharacterBase::SetStealthMode(bool bStealth) {
}

void ARSCharacterBase::SetSkipRecoverHpAnime(bool bEnable) {
}

void ARSCharacterBase::SetRootMotionScale(float Scale) {
}

void ARSCharacterBase::SetReplaceSkillTable(UDataTable* skillTable) {
}

void ARSCharacterBase::SetNoCrashChanceByUseGuts_Implementation(bool bEnable) {
}

void ARSCharacterBase::SetNoCollisionAndStopAiFade_Implementation(bool bNoColAndStopAi, bool& dummy) {
}

void ARSCharacterBase::SetMotionEffect(URSParticleSystemComponentBase* Effect) {
}

void ARSCharacterBase::SetLockOnRestrict(bool bRestrict) {
}

void ARSCharacterBase::SetInVisionFog(bool bInFog) {
}

void ARSCharacterBase::SetInterruptTelepoEffect(URSParticleSystemComponentBase* Effect) {
}

void ARSCharacterBase::SetInfinityCrashChance_Implementation(bool bEnable) {
}

void ARSCharacterBase::SetGaugeDisappearInstantly(bool DisappearInstantly) {
}

void ARSCharacterBase::SetEventCondition(bool bEvent) {
}

void ARSCharacterBase::SetEnableLockOnRestrictTarget(bool bEnable) {
}

void ARSCharacterBase::SetDisableTarget(bool bDisable, const FName& ClaimantName) {
}

void ARSCharacterBase::SetDisableDamageAddShake(bool bDisable) {
}

void ARSCharacterBase::SetDisableDamageAddReaction(bool bDisable) {
}

void ARSCharacterBase::SetDeadBrainCrashOnly_Implementation(bool bEnable) {
}

void ARSCharacterBase::SetCameraStabilizeParameter(float distLockHz, float distRestoreHz, float distLockVt, float distRestoreVt) {
}

void ARSCharacterBase::SetCameraDitherToMeshAndParticles(float DeitherValue, bool bIgnorMesh) {
}

void ARSCharacterBase::SetBrainCrashReceivePossible(bool Flag) {
}

void ARSCharacterBase::SetAttractSelf(bool bAttract) {
}

bool ARSCharacterBase::ResumeLoopSe(FName Name, float FadeTime, float FadeVolume) {
    return false;
}

void ARSCharacterBase::ResetMotionEffectList() {
}

void ARSCharacterBase::ResetInterruptTelepoEffectList() {
}

void ARSCharacterBase::ResetCharacterHitOffset() {
}

void ARSCharacterBase::ReserveDamageDirectAttack(bool bUseFixDamage, int32 fixDamage, const FHCHitResult& HitResult, bool isForceCritical) {
}

void ARSCharacterBase::RequestApplyCameraDither(bool bMesh, bool bParticle) {
}

void ARSCharacterBase::RegisterSpecialDamageEffect(URSParticleSystemComponentBase* Particle) {
}

void ARSCharacterBase::RegisterSignificanceManager() {
}

void ARSCharacterBase::RegistCameraDitherParticlehandle(URSParticleSystemComponentBase* Particle) {
}





bool ARSCharacterBase::PlayLoopSe(FName Name, USoundAtomCue* AtomCue, FVector Location, FRotator Rotation, float FadeTime, float FadeVolume, bool forceFirstStart) {
    return false;
}

bool ARSCharacterBase::PauseLoopSe(FName Name, float FadeTime, float FadeVolume) {
    return false;
}

void ARSCharacterBase::OnFinishSpawnWaitDelayTimer_Implementation() {
}


void ARSCharacterBase::OnDamageCalcArray() {
}

void ARSCharacterBase::OnBeLockOn_Implementation() {
}

bool ARSCharacterBase::OnAddedBattleMemberFromMenu_Implementation() {
    return false;
}

bool ARSCharacterBase::IsVisionFogInternalLock() const {
    return false;
}

bool ARSCharacterBase::IsUseGuts_Implementation() const {
    return false;
}

bool ARSCharacterBase::IsUpdateRepop() const {
    return false;
}

bool ARSCharacterBase::IsTargetRendered_Implementation() {
    return false;
}

bool ARSCharacterBase::IsTargetAbleStealthActor() const {
    return false;
}

bool ARSCharacterBase::IsTargetable_Implementation() const {
    return false;
}

bool ARSCharacterBase::IsStealthMode() const {
    return false;
}

bool ARSCharacterBase::IsSkipRecoverHpAnime() const {
    return false;
}

bool ARSCharacterBase::IsSeeTarget_Implementation(const ARSCharacterBase* Target) const {
    return false;
}

bool ARSCharacterBase::IsRivalTeam(UTeamComponent* Team) const {
    return false;
}

bool ARSCharacterBase::isRegistLoopSe(FName Name) {
    return false;
}

bool ARSCharacterBase::IsNotAbleBrainCrashTarget_Implementation() const {
    return false;
}

bool ARSCharacterBase::IsNoCrashChanceByUseGuts_Implementation() const {
    return false;
}

bool ARSCharacterBase::IsInVisionFog() const {
    return false;
}

bool ARSCharacterBase::IsInfinityCrashChance_Implementation() const {
    return false;
}

bool ARSCharacterBase::IsIgnoreVisionFog_Implementation() const {
    return false;
}

bool ARSCharacterBase::IsHitInvincibleParts() const {
    return false;
}

bool ARSCharacterBase::IsGuardBadCondition_Implementation(HCSkillAttribute attr) const {
    return false;
}

bool ARSCharacterBase::IsGaugeDisappearInstantly() const {
    return false;
}

bool ARSCharacterBase::IsFriendTeam(UTeamComponent* Team) const {
    return false;
}

bool ARSCharacterBase::IsFlyingCPP() const {
    return false;
}

bool ARSCharacterBase::IsFinishActorBeginPlay() const {
    return false;
}

bool ARSCharacterBase::IsFallingCPP() const {
    return false;
}

bool ARSCharacterBase::IsEventCondition_Implementation() const {
    return false;
}

bool ARSCharacterBase::IsEnableMetalMode_Implementation() const {
    return false;
}

bool ARSCharacterBase::IsEnableDamageHit() const {
    return false;
}

bool ARSCharacterBase::IsEnableCharacterHit() const {
    return false;
}

bool ARSCharacterBase::IsDisableDamageAddShake() const {
    return false;
}

bool ARSCharacterBase::IsDisableDamageAddReaction() const {
    return false;
}

bool ARSCharacterBase::IsDeadBrainCrashOnly_Implementation() const {
    return false;
}

bool ARSCharacterBase::IsDangerousNearRange_Implementation() {
    return false;
}

bool ARSCharacterBase::IsCrashMaxWithGuts_Implementation() const {
    return false;
}

bool ARSCharacterBase::IsCharacterDead() const {
    return false;
}

bool ARSCharacterBase::IsCharacterBadStatusOil() const {
    return false;
}

bool ARSCharacterBase::IsCharacterBadStatusFlooded() const {
    return false;
}

bool ARSCharacterBase::IsCharacterBadStatusFlame() const {
    return false;
}

bool ARSCharacterBase::IsCharacterBadStatusElectric() const {
    return false;
}

bool ARSCharacterBase::IsCharacterBadStatusConfusion() const {
    return false;
}

bool ARSCharacterBase::IsCharacterBadStatusAttribute(HCSkillAttribute attr) const {
    return false;
}


bool ARSCharacterBase::IsBrainCrashReceivePossible() const {
    return false;
}


bool ARSCharacterBase::IsAttractSelf() const {
    return false;
}

bool ARSCharacterBase::IsAbsoluteVisibilityTrace_Implementation() const {
    return false;
}

FName ARSCharacterBase::GetUniqueName_Implementation() const {
    return NAME_None;
}

int32 ARSCharacterBase::GetUniqueId_Implementation() const {
    return 0;
}

TArray<ARSCharacterBase*> ARSCharacterBase::GetTargetingList() {
    return TArray<ARSCharacterBase*>();
}

ESpecialDamageTableType ARSCharacterBase::GetSpecialDamageTableType_Implementation() const {
    return ESpecialDamageTableType::Player;
}

TArray<FName> ARSCharacterBase::GetSkeletonSlotNames() const {
    return TArray<FName>();
}

float ARSCharacterBase::GetSignificanceResult() const {
    return 0.0f;
}

UDataTable* ARSCharacterBase::GetReplaceSkillTable() const {
    return NULL;
}

float ARSCharacterBase::GetPsychicFieldDamageRateToBoss() {
    return 0.0f;
}

TArray<FName> ARSCharacterBase::GetLoopSeKeyList() {
    return TArray<FName>();
}


FVector ARSCharacterBase::GetGroundLocationSimple_Implementation(bool bIncludeObject) const {
    return FVector{};
}

FVector ARSCharacterBase::GetEyePosition_Implementation() const {
    return FVector{};
}

FEnemyFindChangeParam ARSCharacterBase::GetEnemyFindChangeParam_Implementation() const {
    return FEnemyFindChangeParam{};
}

FName ARSCharacterBase::GetEnemyDeadReplaceLogName_Implementation() const {
    return NAME_None;
}

int32 ARSCharacterBase::GetDirectDamageDataArrayNum() const {
    return 0;
}

int32 ARSCharacterBase::GetDamageDataArrayNum() const {
    return 0;
}

TArray<ARSCharacterBase*> ARSCharacterBase::GetConstTargetingList() const {
    return TArray<ARSCharacterBase*>();
}

TArray<ARSCharacterBase*> ARSCharacterBase::GetConstAttackingList() const {
    return TArray<ARSCharacterBase*>();
}


FVector ARSCharacterBase::GetCharacterMovementLocationSimple_Implementation() const {
    return FVector{};
}

bool ARSCharacterBase::GetCharacterMovementGroundInfoSimple_Implementation(FHitResult& Result) const {
    return false;
}

TArray<ECharacterAttribute> ARSCharacterBase::GetCharacterAttribute() {
    return TArray<ECharacterAttribute>();
}

FVector ARSCharacterBase::GetCh0200CvEffect_Scale() const {
    return FVector{};
}

float ARSCharacterBase::GetCh0200CvEffect_CameraOffset() const {
    return 0.0f;
}

FName ARSCharacterBase::GetCh0200CvEffect_BoneName() const {
    return NAME_None;
}

UPlayerScriptComponent* ARSCharacterBase::GetCachedPlayerScript() {
    return NULL;
}

float ARSCharacterBase::GetBrainCrashRange_Implementation() const {
    return 0.0f;
}

EEnemyAttractType ARSCharacterBase::GetAttractType() const {
    return EEnemyAttractType::Invalid;
}

TArray<ARSCharacterBase*> ARSCharacterBase::GetAttackingList() {
    return TArray<ARSCharacterBase*>();
}

bool ARSCharacterBase::GetAssumptionDataNamesNative(UDataTable* DataTable, const FString& LevelName, TArray<FName>& ResultRowNames) {
    return false;
}

EAssassinAttackHit ARSCharacterBase::GetAssasinAttackHitType_Implementation() const {
    return EAssassinAttackHit::Invalid;
}

float ARSCharacterBase::GetActorDeltaSecondsCPP() const {
    return 0.0f;
}

TArray<USkeletalMeshSocket*> ARSCharacterBase::GetActiveSocketList() const {
    return TArray<USkeletalMeshSocket*>();
}

void ARSCharacterBase::ForceEndInterpDownCapsule(UCapsuleComponent* charaCapsule) {
}

void ARSCharacterBase::ForceApplyCameraDither(bool bMesh, bool bParticle) {
}

void ARSCharacterBase::EndMotionEffectImmediately() {
}

void ARSCharacterBase::EndMotionEffect() {
}

void ARSCharacterBase::EndInterruptTelepoEffectImmediately() {
}

void ARSCharacterBase::EndInterruptTelepoEffect() {
}

void ARSCharacterBase::EnableDamageHit() {
}

void ARSCharacterBase::EnableCharacterHit(float Time) {
}

void ARSCharacterBase::EnableAbsoluteVisibilityTrace_Implementation(bool bEnable) {
}

void ARSCharacterBase::DisableDamageHit() {
}

void ARSCharacterBase::DisableCharacterHit() {
}

void ARSCharacterBase::ClearLoopSeKeyList() {
}

void ARSCharacterBase::ClearDamageDataArray() {
}

bool ARSCharacterBase::CheckTargetableCharacterReason(ETargetFailedReason& OutReason, const ARSCharacterBase* chara, bool bNotLockTarget) {
    return false;
}

bool ARSCharacterBase::CheckTargetableCharacter(const ARSCharacterBase* chara) {
    return false;
}



bool ARSCharacterBase::CanAddTargetingList(const ARSCharacterBase* newCharacter) const {
    return false;
}

bool ARSCharacterBase::CanAddAttackingList(const ARSCharacterBase* newCharacter) const {
    return false;
}

float ARSCharacterBase::CalcUniqueDamage_Implementation(const FHCHitResult& HitResult, float BaseDamage) {
    return 0.0f;
}

void ARSCharacterBase::AddTargetingList(ARSCharacterBase* AddCharacter) {
}

void ARSCharacterBase::AddAttackingList(ARSCharacterBase* AddCharacter) {
}

ARSCharacterBase::ARSCharacterBase() {
    this->CharacterHitPriority = ECharacterHitPriority::Lowest;
    this->CharacterHitTimeSliceNum = 0;
    this->UniqueIdComponent = CreateDefaultSubobject<URSUniqueIdComponent>(TEXT("UniqueIdComponent"));
    this->CharacterItemDropId = 0;
    this->CoreDropId = 0;
    this->bTestCurveMoveCharacterMovement = true;
    this->bUseAnimationCurveMovement = false;
    this->FootStepComponent = CreateDefaultSubobject<UFootStepComponent>(TEXT("FootStepComponent"));
    this->DamageArrayComponent = NULL;
    this->DamageResponseComponent = NULL;
    this->PriorityHitEffect = FHitEffectPriority::Other;
    this->mReplaceSkillTable = NULL;
    this->bDisableNpcTarget = false;
    this->bLockOnRestrictFlag = false;
    this->bEnableLockOnRestrictTarget = false;
    this->mCh0200CvEffect_BoneName = TEXT("hips");
    this->mCh0200CvEffect_CameraOffset = 0.00f;
    this->mEnemyGrade = EEnemyGrade::Default;
    this->bDeadBrainCrashOnly = false;
    this->bInfinityCrashChance = false;
    this->bNotAbleBrainCrashTarget = false;
    this->sufferDamageBeforeHp = 0;
    this->bUseGuts = false;
    this->bDeadPsychicObjComboOnly = false;
    this->bDeadChaseAttackOnly = false;
    this->bDeadLaunchAttackOnly = false;
    this->bDeadPhysicsAttackOnly = false;
    this->bDeadPsychicObjOnly = false;
    this->bNoDeadTutorial = false;
    this->bNoDeadEvent = false;
    this->bNoCrashChanceEvent = false;
    this->bIsEmphasisCrashGauge = false;
    this->HPPercentOfDamageBefore = 0.00f;
    this->bDisableDamageAddReaction = false;
    this->bDisableDamageAddShake = false;
    this->bIsHitInvincibleParts = false;
    this->AttractType = EEnemyAttractType::Invalid;
    this->PsychicFieldDamageRateToBoss = 1.00f;
    this->mDownCapusleInterpSpeed = 0.00f;
    this->mDownCapsuleOriginalHalfHeight = 0.00f;
    this->mDownCapsuleInterpHalfHeight = 0.00f;
    this->mDownCapsuleOriginalRadius = 0.00f;
    this->mDownCapsuleInterpRadius = 0.00f;
    this->bEnableUro = false;
    this->mCameraDitherDataAsset = NULL;
    this->mDitherValue = 0.00f;
    this->PlayerScriptCache = NULL;
    this->PlayerAsyncScriptCache = NULL;
    this->PlayerDriveCache = NULL;
    this->EnemyScriptCache = NULL;
    this->MoveInputCache = NULL;
    this->TargetSearchCache = NULL;
    this->HateTargetCache = NULL;
    this->HPEventCache = NULL;
    this->HitCheckReceiverCache = NULL;
}

