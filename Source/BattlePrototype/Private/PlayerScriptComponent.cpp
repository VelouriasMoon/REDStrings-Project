#include "PlayerScriptComponent.h"

class AActor;
class ARSCharacterBase;
class UAttackInputComponent;
class UCharacterMovementComponent;
class UCharactersParameterComponent;
class UMoveInputComponent;
class UPlayerAnimControllerComponent;
class UPlayerAsyncScriptComponent;
class UPlayerCameraComponent;
class UPlayerInputBaseComponent;
class URSStateManageComponent;

void UPlayerScriptComponent::UpdateMoveInputTrigger(bool bEnableAddMove, float MaxSpeedScale, float MoveInputScale, float MoveDeadEndDistance) {
}

void UPlayerScriptComponent::UpdateEnableActionCommon() {
}

void UPlayerScriptComponent::UpdateDisableAction() {
}

void UPlayerScriptComponent::UpdateCameraRotate(float DeltaSeconds, const FVector2D& FixCameraLeftStick, bool bLockTarget, bool bDisableCameraControl, bool bUseCutCamera, bool bUniqueObjectInput) {
}

void UPlayerScriptComponent::UpdateBrainFieldInterval(float DeltaSeconds) {
}

void UPlayerScriptComponent::UpdateBrainField(float DeltaSeconds) {
}

void UPlayerScriptComponent::SubUpperActionStatus(EPlayerUpperActionStatus Status) {
}

void UPlayerScriptComponent::SubPlayerStatus(EPlayerCommonStatus Status) {
}

void UPlayerScriptComponent::SubActionStatus(EPlayerActionStatus Status) {
}

void UPlayerScriptComponent::SetRunSpeedRate(float InRate) {
}

void UPlayerScriptComponent::SetRestrictStagnationCheck(bool bRestrict) {
}

void UPlayerScriptComponent::SetPauseTimer(bool bPause) {
}

void UPlayerScriptComponent::SetMaxFlyingDodgeCount(int32 count) {
}

void UPlayerScriptComponent::SetLotFriendData(EFriendLotType lotType, const FFriendLotData& Data) {
}

void UPlayerScriptComponent::SetIgnoreFallTimer(float IgnoreTime) {
}

void UPlayerScriptComponent::SetFlyingActionLimitDistance(float limitDistance) {
}

void UPlayerScriptComponent::SetCombinationVisionPenaltyDamageRate(float Rate) {
}

void UPlayerScriptComponent::SetCombinationVisionPenalty(bool bSet) {
}

void UPlayerScriptComponent::SetBrainFieldState(EPlayerBrainFieldState State) {
}

void UPlayerScriptComponent::SetBrainFieldExtraTime(float ExtraTime) {
}

void UPlayerScriptComponent::SetBrainFieldData(const FPlayerBrainFieldData& InData, const FPlayerBrainFieldData& InFirstBrainFieldData, const FPlayerBrainFieldHelpData& InHelpData, TArray<FBrainFieldPsychicGaugeDirectionData> PsychicGaugeData) {
}

void UPlayerScriptComponent::SetBattling(bool bBattle) {
}

void UPlayerScriptComponent::SetAttackFlyingEnd() {
}

void UPlayerScriptComponent::ResetStagnation() {
}

void UPlayerScriptComponent::ResetHistory() {
}

void UPlayerScriptComponent::PreTick(float DeltaSeconds) {
}

void UPlayerScriptComponent::PostTick(float DeltaSeconds) {
}

void UPlayerScriptComponent::PauseBrainFieldTimer(bool bPause) {
}

bool UPlayerScriptComponent::OverwriteAttackCollisionInfo_ForPlayer(FHCCollisionCommonInfo& refCommonInfo, FHCSkillCommonInfo& refSkill, bool bAddTelepoAttack) {
    return false;
}

bool UPlayerScriptComponent::OverwriteAttackCollisionInfo_ForHero(FHCCollisionCommonInfo& refCommonInfo, FHCSkillCommonInfo& refSkill, float SkillWeaponCrashScale, float SkillPsychicCrashScale, float SkillDriveCrashScale, float NPC_HERO_CRASH_RATE, bool bExJustDodgeFlag, float ExJustDodgeAttackRate, float ExJustDodgeCrashRate, float Skill_AerialAttackPsychicGaugeUp) {
    return false;
}

void UPlayerScriptComponent::OnBeginAvoidWall(FVector InLocation) {
}

void UPlayerScriptComponent::NextBrainFieldState() {
}

void UPlayerScriptComponent::MainTick(float DeltaSeconds) {
}

EPlayerID UPlayerScriptComponent::LotFriendPlayer(EFriendLotType lotType, bool bDebugSuccess) {
    return EPlayerID::Invalid;
}

bool UPlayerScriptComponent::LotAssassinAttackLevelOffset(EAssassinAttackHit EffectiveType, int32 OwnerLevel, int32 TargetLevel, bool bSeeThrough, const FAssassinAttackData& CalcData) {
    return false;
}

bool UPlayerScriptComponent::IsUpperActionStatus(EPlayerUpperActionStatus Status) const {
    return false;
}

bool UPlayerScriptComponent::IsSubAttackButtonAttack(const FHCSkillCommonInfo& skillInfo) {
    return false;
}

bool UPlayerScriptComponent::IsStagnation(bool bCheckLocation, FVector InCurrentLocation) const {
    return false;
}

bool UPlayerScriptComponent::IsSearchAbleActionIcon() const {
    return false;
}

bool UPlayerScriptComponent::IsRunOrSprint() const {
    return false;
}

bool UPlayerScriptComponent::IsRunningAnimStateForAIMove() const {
    return false;
}

bool UPlayerScriptComponent::IsRestrictStagnationCheck() const {
    return false;
}

bool UPlayerScriptComponent::IsPlayerStatus(EPlayerCommonStatus Status) const {
    return false;
}

bool UPlayerScriptComponent::IsPlayerInAerial() const {
    return false;
}

bool UPlayerScriptComponent::IsOverwriteAttackAutoAim() {
    return false;
}

bool UPlayerScriptComponent::IsInitializedSASEffectFixParam(E_SASKindNative kind) const {
    return false;
}

void UPlayerScriptComponent::IsEnableSASEffect(E_SASKindNative kind, ESASEffect Effect, bool& OutEnable, float& OutParam0, float& OutParam1, float& OutParam2, float& OutParam3) const {
}

bool UPlayerScriptComponent::IsEnableSAS() const {
    return false;
}

bool UPlayerScriptComponent::IsEnableNpcAssist() const {
    return false;
}

bool UPlayerScriptComponent::IsEnableDriveFullDirection() const {
    return false;
}

bool UPlayerScriptComponent::IsEnableActionUseItem() const {
    return false;
}

bool UPlayerScriptComponent::IsEnableActionSprint() const {
    return false;
}

bool UPlayerScriptComponent::IsEnableActionPsychic(bool bPsychicEx) const {
    return false;
}

bool UPlayerScriptComponent::IsEnableActionJump() const {
    return false;
}

bool UPlayerScriptComponent::IsEnableActionIdleWalkRun(bool bIgnoreExecTelepo) const {
    return false;
}

bool UPlayerScriptComponent::IsEnableActionDodge(bool bIgnoreBadStatus) const {
    return false;
}

bool UPlayerScriptComponent::IsEnableActionDamage() const {
    return false;
}

bool UPlayerScriptComponent::IsEnableActionCommon() const {
    return false;
}

bool UPlayerScriptComponent::IsEnableActionChangeBattle() const {
    return false;
}

bool UPlayerScriptComponent::IsEnableActionBrainFieldOpen() const {
    return false;
}

bool UPlayerScriptComponent::IsEnableActionBrainFieldClose() const {
    return false;
}

bool UPlayerScriptComponent::IsEnableActionBrainCrash() const {
    return false;
}

bool UPlayerScriptComponent::IsEnableActionAttack() const {
    return false;
}

bool UPlayerScriptComponent::IsDisableActionDodge(bool bIgnoreBadStatus) const {
    return false;
}

bool UPlayerScriptComponent::IsDisableAction() const {
    return false;
}

bool UPlayerScriptComponent::IsBrainFieldInterval() const {
    return false;
}

bool UPlayerScriptComponent::IsBossBattle() const {
    return false;
}

bool UPlayerScriptComponent::IsBattling() const {
    return false;
}

bool UPlayerScriptComponent::IsActiveSAS(E_SASKindNative kind) const {
    return false;
}

bool UPlayerScriptComponent::IsActiveBrainFieldGameOverTimer() {
    return false;
}

bool UPlayerScriptComponent::IsActionStatus(EPlayerActionStatus Status) const {
    return false;
}

void UPlayerScriptComponent::Initialize(bool bNpc, UCharacterMovementComponent* CharaMoveComp, UPlayerAnimControllerComponent* AnimControllerComp, UCharactersParameterComponent* CharactersParameterComp, URSStateManageComponent* StateManageComp, URSStateManageComponent* UpperStateManageComp, UPlayerInputBaseComponent* PlayerInputComp, UAttackInputComponent* AttackInputComp, UPlayerAsyncScriptComponent* PlayerAsyncComp, UMoveInputComponent* MoveInputComp, UPlayerCameraComponent* PlayerCameraComp) {
}

FSASEffectState UPlayerScriptComponent::GetSASEffectStateConst(E_SASKindNative kind) const {
    return FSASEffectState{};
}

FSASEffectState UPlayerScriptComponent::GetSASEffectState(E_SASKindNative kind) {
    return FSASEffectState{};
}

FVector UPlayerScriptComponent::GetRecentAverageVelocity() const {
    return FVector{};
}

UPlayerAnimControllerComponent* UPlayerScriptComponent::GetPlayerAnimController() const {
    return NULL;
}

void UPlayerScriptComponent::GetPlayerAccessoryExtendParameter(EEffecacyType effectType, bool& bOutEquip, TArray<float>& outParameter) {
}

void UPlayerScriptComponent::GetPlayerAccessoryEffect(EEffecacyType effectType, bool& bOutEquip, float& OutParam) const {
}

TArray<FVector> UPlayerScriptComponent::GetLocationHistory() {
    return TArray<FVector>();
}

bool UPlayerScriptComponent::GetIsDead_Native() {
    return false;
}

void UPlayerScriptComponent::GetConfusionStickInput(bool& bOverwriteInput, FVector2D& StickInput) {
}

FRotator UPlayerScriptComponent::GetCameraRotation() const {
    return FRotator{};
}

int32 UPlayerScriptComponent::GetBrainFieldWarningCount() {
    return 0;
}

float UPlayerScriptComponent::GetBrainFieldTimeRate() {
    return 0.0f;
}

EPlayerBrainFieldState UPlayerScriptComponent::GetBrainFieldState() const {
    return EPlayerBrainFieldState::PlayAble;
}

float UPlayerScriptComponent::GetBrainFieldRemainTime() {
    return 0.0f;
}

EPlayerID UPlayerScriptComponent::GetBrainFieldHelpPlayer() const {
    return EPlayerID::Invalid;
}

int32 UPlayerScriptComponent::GetBrainFieldHelpedCount() {
    return 0;
}

FName UPlayerScriptComponent::GetBrainFieldHelpBrainTalkID() {
    return NAME_None;
}

float UPlayerScriptComponent::GetBrainFieldGameOverTimeRate() {
    return 0.0f;
}

EPlayerBrainFieldDanger UPlayerScriptComponent::GetBrainFieldDangerLV() const {
    return EPlayerBrainFieldDanger::LV1;
}

void UPlayerScriptComponent::ForceSettingConfusionStick(float InputTime) {
}

void UPlayerScriptComponent::ExcludeLotPlayer(EPlayerID ID, EFriendLotType lotType) {
}

void UPlayerScriptComponent::EventDirectBrainFieldWarning() {
}

void UPlayerScriptComponent::EndNeonNotify() {
}

void UPlayerScriptComponent::EndConfusionStick() {
}

void UPlayerScriptComponent::EndBrainField() {
}

void UPlayerScriptComponent::EnableRegenerateHP(float RegenerateHPRate, float IntervalTime) {
}

void UPlayerScriptComponent::DisableRegenerateHP() {
}

void UPlayerScriptComponent::DisableBrainFieldLunaticBrainTalk(bool bDisable) {
}

void UPlayerScriptComponent::DebugNoBrainFieldHelp(bool bSet) {
}

void UPlayerScriptComponent::DebugLotPlayerTest(EFriendLotType lotType, int32 count) {
}

void UPlayerScriptComponent::DebugInfiniteBrainField(bool bSet) {
}

void UPlayerScriptComponent::DebugCoverDamagePrintLog(bool bOutput) {
}

void UPlayerScriptComponent::DebugBrainFieldHelpPlayerFix(EPlayerID FixPlayerID) {
}

void UPlayerScriptComponent::DebugBrainFieldHelpForceSuccess(bool bSet) {
}

void UPlayerScriptComponent::ClearUpperActionStatus() {
}

void UPlayerScriptComponent::ClearPlayerStatus() {
}

void UPlayerScriptComponent::ClearFlyingDodgeCount() {
}

void UPlayerScriptComponent::ClearExcludeLotPlayer(EFriendLotType lotType) {
}

void UPlayerScriptComponent::ClearActionStatus() {
}

void UPlayerScriptComponent::CheckFixCameraFinish(const FVector2D& FixCameraLeftStick, bool bLockTarget) {
}

TArray<EFindTargetBrainTalkType> UPlayerScriptComponent::CheckFindBrainTalk(ARSCharacterBase* TargetActor) {
    return TArray<EFindTargetBrainTalkType>();
}

EPlayerID UPlayerScriptComponent::CheckBrainFieldHelpPlayer() {
    return EPlayerID::Invalid;
}

float UPlayerScriptComponent::CalcFinalDamageByDefence_ForPlayer(float Damage, AActor* attackActor, float NPC_DEFENCE_DAMAGE_RATE) {
    return 0.0f;
}

float UPlayerScriptComponent::CalcFinalDamageByDefence_ForHero(float Damage, AActor* attackActor, bool bSkill_PinchStatusUp, float Skill_PinchDamageDownRate, float Skill_BrainFieldDamageCut) {
    return 0.0f;
}

float UPlayerScriptComponent::CalcFinalDamageByAttack_ForPlayer(float Damage, AActor* defenseActor, const FHCSkillCommonInfo& skillInfo, float COPY_ATTACK_RATE, float NPC_ATTACK_DAMAGE_RATE) {
    return 0.0f;
}

float UPlayerScriptComponent::CalcFinalDamageByAttack_ForHero(float Damage, AActor* defenseActor, const FHCSkillCommonInfo& skillInfo, bool bSkill_PinchStatusUp, float Skill_DownDamageUp, float Skill_PinchAttackUpRate) {
    return 0.0f;
}

bool UPlayerScriptComponent::CalcDamageByAttack_ForHero(float& refPhysicsDamage, float& refObjDamage, float& refFlameDamage, float& refElectricDamage, float& refCriticalDamageRate, AActor* defenseActor) {
    return false;
}

float UPlayerScriptComponent::CalcCritical_ForPlayer(float Critical, AActor* defenseActor, bool isEnpc, AActor* TargetActor, bool bAssassinAttack) {
    return 0.0f;
}

bool UPlayerScriptComponent::CalcAccumulationByDefence_ForPlayer(float& refWince, float& refKnockback, float& refDown, float& refLaunch, float& refFlame, float& refElectric, float& refFlooded, float& refOil, float& refConfusion, float& refCrashScale, float& refCrashCapCheckRate, AActor* attackActor, bool isSuperArmor) {
    return false;
}

bool UPlayerScriptComponent::CalcAccumulationByAttack_ForPlayer(float& refWince, float& refKnockback, float& refDown, float& refLaunch, float& refFlame, float& refElectric, float& refFlooded, float& refOil, float& refConfusion, float& refCrashScale, float& refCrashCapCheckRate, AActor* defenseActor, HCSkillAttackType AttackType, bool bCopyActor, const FHCSkillCommonInfo& skillInfo, float COPY_REACTION_RATE, float COPY_BADSTATUS_RATE) {
    return false;
}

float UPlayerScriptComponent::CalcAccessoryBadStatusRate(float Value, float Rate) const {
    return 0.0f;
}

void UPlayerScriptComponent::BrainTalk_ClearHitCount() {
}

void UPlayerScriptComponent::BrainTalk_CheckSASHitCount(bool bCheck, E_SASKindNative kind) {
}

void UPlayerScriptComponent::BrainTalk_AddHitCount(bool bNoDamage) {
}

void UPlayerScriptComponent::BeginNeonNotify(EPlayerNeonNotifyType Type) {
}

void UPlayerScriptComponent::BeginConfusionStick() {
}

void UPlayerScriptComponent::BeginBrainField() {
}

void UPlayerScriptComponent::ApplySASEffectPassiveAllLinkAble() {
}

void UPlayerScriptComponent::ApplySASEffectPassiveAll() {
}

void UPlayerScriptComponent::ApplySASEffectPassive(E_SASKindNative kind) {
}

void UPlayerScriptComponent::ApplySASEffectActive(E_SASKindNative kind, bool bActivate) {
}

void UPlayerScriptComponent::AddUpperActionStatus(EPlayerUpperActionStatus Status) {
}

void UPlayerScriptComponent::AddPlayerStatus(EPlayerCommonStatus Status) {
}

void UPlayerScriptComponent::AddFlyingDodgeCount() {
}

void UPlayerScriptComponent::AddBrainFieldHelpExtraTime() {
}

void UPlayerScriptComponent::AddActionStatus(EPlayerActionStatus Status) {
}

bool UPlayerScriptComponent::ActionState_CommonTransition(EPlayerActionKind& NextAction, int32& NextParam) {
    return false;
}

UPlayerScriptComponent::UPlayerScriptComponent() {
    this->ConfusionStickParam_InputTimeMin = 0.50f;
    this->ConfusionStickParam_InputTimeMax = 1.50f;
    this->ConfusionStickParam_IntervalMin = 0.50f;
    this->ConfusionStickParam_IntervalMax = 2.00f;
    this->ConfusionAttackParam_IntervalMin = 0.30f;
    this->ConfusionAttackParam_IntervalMax = 3.00f;
    this->ConfusionAttackParam_Rate = 0.40f;
    this->ConfusionPsychicParam_Rate = 0.20f;
    this->NeonNotifyTimeMax = 5.00f;
    this->NeonNotifyParticleComponentClass = NULL;
    this->NeonNotifyParticle_DriveMax = NULL;
    this->NeonNotifyParticle_Dying = NULL;
    this->NeonNotifyParticle_ActionFailed = NULL;
    this->Param_BrainTalkHitCount = 10;
    this->Param_BrainTalkHitCountClearIntarval = 0.50f;
    this->BRAINFIELDPSYCHIC_BOSS_RATE = 3.00f;
    this->AvoidWallCountMax = 3;
    this->StagnationCheckLocationThreshold = 50.00f;
    this->StagnationResetTime = 5.00f;
}

