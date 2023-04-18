#include "EnemyScriptComponent.h"

class AActor;
class AEnemyWeaponBase;
class ARSCharacterBase;
class UActorComponent;
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

bool UEnemyScriptComponent::WeakMaterialHitDamage(TArray<FHCHitResult> HitResults) {
    return false;
}

void UEnemyScriptComponent::UpdateWeakMaterialRate(TArray<FString> slotNameList, float rateValue, float emissivePowerValue) {
}

bool UEnemyScriptComponent::UpdateWeakAroundEffect(TArray<bool>& StartWeakAroundEffect, bool BrainFieldSealWeakParticle, bool PreCheck) {
    return false;
}

void UEnemyScriptComponent::UpdateVisibilityBasedAnimTickOption(bool isBattleenemy) {
}

void UEnemyScriptComponent::UpdateUro(USkinnedMeshComponent* TargetMesh, EnemyAliveAnimKind AnimKind) {
}

void UEnemyScriptComponent::UpdateTraceChildPawn(FVector RootLocation, bool PossibleGroundCheck, float BeforeFlyPawnZ, FVector& ActorLocation, float& FlyPawnZ) {
}

void UEnemyScriptComponent::UpdateTargetInfo(const ARSCharacterBase* Target) {
}

bool UEnemyScriptComponent::UpdateSetFlying(bool DamageFloating, bool IsFlyState) {
    return false;
}

void UEnemyScriptComponent::UpdateScoutingNative(float DeltaSeconds, uint8 SpawnState, float ChangeSearchRange, float ChangeSearchAngle, float ChangeSensingArea, float ChangeCaptureArea, FName EyeSocketName) {
}

void UEnemyScriptComponent::UpdateRotator(bool ChildMove, float DeltaSeconds, float NoNavMoveInterpSpeed) {
}

void UEnemyScriptComponent::UpdateRootMotionChildPawn(FVector RootLocation, bool PossibleGroundCheck, float BeforeFlyPawnZ, FVector& ActorLocation, float& FlyPawnZ, float AnyMoreDifferenceUpdate) {
}

void UEnemyScriptComponent::UpdatePreviousElapsedTime(float ElapsedTime) {
}

void UEnemyScriptComponent::UpdateOutRangeFade(float& DeitherValue, float TargetRange, float DeltaSeconds, float FadeRange, float InRange, float OutRange, float FadeTime, float FadeRate, bool ForceDisp) {
}

void UEnemyScriptComponent::UpdateMainPlayerInfo() {
}

void UEnemyScriptComponent::UpdateIsSameDamageReaction(bool IsMotionReception, EnemyDamageAnimKind damageKind) {
}

float UEnemyScriptComponent::UpdateHitDamageMaterialArmor(float sec, float ArmorFlashScale, float& RefArmorFlashTime) {
    return 0.0f;
}

void UEnemyScriptComponent::UpdateGroundEffect(EEm0800EffectType& GroundEffectType) {
}

bool UEnemyScriptComponent::UpdateGroundCheckTimer(FGameTimer& GameTimer, float GroundCheckTime) {
    return false;
}

bool UEnemyScriptComponent::UpdateFlyMoveSlopeRestoreSeconds(bool FlyMoveSlopeRestore, float DeltaSeconds, float RotPow) {
    return false;
}

void UEnemyScriptComponent::UpdateFlyEnemyParam(float DeltaSeconds, FVector OldLocation) {
}

void UEnemyScriptComponent::UpdateFloodedAnimRootMotionScale(bool& IsFoodedFlg, bool NewIsMoveAnim) {
}

void UEnemyScriptComponent::UpdateFindPlayerValue(float DeltaSeconds) {
}

void UEnemyScriptComponent::UpdateEnemyUro() {
}

bool UEnemyScriptComponent::UpdateEnableIK(bool enableRequestIk) {
    return false;
}

void UEnemyScriptComponent::UpdateDetectTarget(const ARSCharacterBase* Target, float searchViewRange, float searchViewAngle, float searchSensingRange, float captureRange, float searchHeight) {
}

void UEnemyScriptComponent::UpdateDetectPlayer(float searchViewRange, float searchViewAngle, float searchSensingRange, float captureRange, float searchHeight) {
}

FVector UEnemyScriptComponent::UpdateCommonDecal(float& DecalLerpSpeed, float DecalFollowSpeedDefault, float DecalFollowSpeedFast, float DeletaSeconds, FVector LastDecalLocation, FVector Offset, FName AttachSocketNameAdditionalDecal) {
    return FVector{};
}

bool UEnemyScriptComponent::UpdateAreaCheck(int32 areaOutSequence, bool IsAreaOut, FVector InitPos, float DeltaSeconds, float OutRange, float offsetRange, float AreaOutTimer) {
    return false;
}

FVector UEnemyScriptComponent::UpdateAdditionalDecal(float& DecalLerpSpeed, float DecalFollowSpeedDefault, float DecalFollowSpeedFast, FVector LastAdditionalDecalLocation, FVector Offset, FName AttachSocketNameAdditionalDecal) {
    return FVector{};
}

void UEnemyScriptComponent::TimerIncrementRef(float& Base, float Time) {
}

void UEnemyScriptComponent::TimerDecrementRef(float& Base, float Time, bool bLimitZero) {
}

float UEnemyScriptComponent::TimerDecrement(float Base, float Time) {
    return 0.0f;
}

void UEnemyScriptComponent::StartDamageAnimFunc(bool ObjAttackDirect, FVector lDir, FVector ObjAttackDirection, FVector ObjLocation, FVector AttackLocation, FVector attackDir, FRotator& RefRotator, FVector& RefHit, FVector& RefDir) {
}

void UEnemyScriptComponent::SetWeaponOutRangeFade(TArray<AEnemyWeaponBase*> WeaponArray, float DeitherValue, float FadeRate) {
}

void UEnemyScriptComponent::SetWeakMaterialValue(float _emissivePowerMax, float _pointRateMax) {
}

void UEnemyScriptComponent::SetWeakEmissiveOff_Native(const FString& WeakSlotName) {
}

void UEnemyScriptComponent::SettingOutRangeFade(float OutRange) {
}

void UEnemyScriptComponent::SetTickIntervalSecondsParam(float _TickPriorityIntervalMiddle, float _TickPriorityLimitMiddle, float _TickPriorityIntervalTop, float _TickPriorityLimitTop, float _TickPriorityIntervalBottom, float _TickPriorityLimitBottom) {
}

void UEnemyScriptComponent::SetTargetSearchTestInfo(const FSearchTestInfo& Info) {
}

void UEnemyScriptComponent::SetTargetSearchBasicInfo(const FSearchBasicInfo& Info) {
}

void UEnemyScriptComponent::SetStopWeakEmissive(bool _isStop) {
}

void UEnemyScriptComponent::SetSimulatePhisics(bool bEnable) {
}

void UEnemyScriptComponent::SetSaveBodyEmissiveValue(int32 Index, float Value) {
}

void UEnemyScriptComponent::SetRestoreBrainFieldLocation(FVector restoreLocation) {
}

void UEnemyScriptComponent::SetQuickFind(bool bEnable) {
}

void UEnemyScriptComponent::SetOutRangeFadeValue(float FadeValue) {
}

void UEnemyScriptComponent::SetMainPlayerSearchTestInfo(const FSearchTestInfo& Info) {
}

void UEnemyScriptComponent::SetMainPlayerSearchBasicInfo(const FSearchBasicInfo& Info) {
}

void UEnemyScriptComponent::SetIgnorePenetrateArmor(bool bIgnore) {
}

void UEnemyScriptComponent::SetIgnoreCrashChance(bool bIgnoreCrashChance) {
}

void UEnemyScriptComponent::SetIgnoreCaptureRange(bool isIgnore) {
}

void UEnemyScriptComponent::SetFindValue(float Value) {
}

void UEnemyScriptComponent::SetFindPlayerType(EEnemyFindPlayerType findType) {
}

void UEnemyScriptComponent::SetEnableWeak(bool _isEnable) {
}

void UEnemyScriptComponent::SetDisableWeakAroundEffect(int32 Index, bool _isEnable) {
}

void UEnemyScriptComponent::SetDisableTargetBattleNative(bool _disable) {
}

void UEnemyScriptComponent::SetCoolDownTimerBP(int32 Index, float Value) {
}

void UEnemyScriptComponent::SetConsiderDownDead(bool bEnable) {
}

void UEnemyScriptComponent::SetAreaOutDamageWaitTimer(float addTime, float maxTime) {
}

void UEnemyScriptComponent::SetAbsolutelyNoReactionBP(bool bEnable) {
}

void UEnemyScriptComponent::SetAbsoluteDetectTarget(bool isAbsolute, FName ClaimantName) {
}

void UEnemyScriptComponent::SearchForceReactionType(TArray<HCSkillExtraType> SkillExtraTypes, TArray<HCSkillExtraType>& ForceExtraTypes) {
}

void UEnemyScriptComponent::RestoreWeakEmissive_Native(const FString& WeakSlotName) {
}

void UEnemyScriptComponent::ResetAreaOutParam() {
}

bool UEnemyScriptComponent::RequestLaunchMotion_Damage(bool LaunchIgnorePriority) {
    return false;
}

bool UEnemyScriptComponent::RequestLaunchMotion(bool LaunchIgnorePriority, bool IsMotionReception, bool& IsOverWriteMotion) {
    return false;
}

bool UEnemyScriptComponent::RequestDownMotion(FHCSkillCommonInfo skillInfo, bool IsDownSasFlagIgnoreDownTriggerFlag) {
    return false;
}

bool UEnemyScriptComponent::RequestAddDamageL(FHCSkillCommonInfo skillInfo) {
    return false;
}

FHCHitResult UEnemyScriptComponent::ReplaceHitResult(FHCHitResult HitResult) {
    return FHCHitResult{};
}

void UEnemyScriptComponent::RecordTickEnabledComponents(TArray<UActorComponent*> ComponentList) {
}

void UEnemyScriptComponent::PutoutInformation(bool IsSideDamage, FVector HitDir, FVector hitPosition, bool& IsRight, bool& IsLeft, bool& isBack) {
}

EEnemyTickPriorityType UEnemyScriptComponent::PrioritizeTickNative(EEnemyTickPriorityType InTickPriority, bool InIsBoss, bool InIsSimple, bool InIsBattling, float InRangeMiddle, float RangeTop, float HeightTop) {
    return EEnemyTickPriorityType::Default;
}

void UEnemyScriptComponent::PreUpdateWeakMaterialRate(TArray<FString> slotNameList, float& materialTime, float DeltaSec, bool& r_isMultiWeak) {
}

bool UEnemyScriptComponent::PreUpdateWeakAroundEffect(bool& isExit) {
    return false;
}

void UEnemyScriptComponent::PreTick(float DeltaSeconds) {
}

bool UEnemyScriptComponent::PreAreaCheck(int32 areaOutSequence) {
    return false;
}

void UEnemyScriptComponent::PostTick(float DeltaSeconds) {
}

void UEnemyScriptComponent::OnDamageActorHit_IsHitWeek(FHCHitResult& RefHitResult) {
}

void UEnemyScriptComponent::OnDamageActorHit_DamageInfo(FHCHitResult HitResult, AActor*& Attack, FVector& DamageLocation, FVector& DamageDir) {
}

void UEnemyScriptComponent::OnDamageActorHit_ChangeWeakState(AActor* attacker, FHCHitResult HitResult) {
}

bool UEnemyScriptComponent::NotDamageMontage(bool IsRequestAddDamageMontage) {
    return false;
}

void UEnemyScriptComponent::ModifyHitResultPrimitiveWeakPoint(USkeletalMeshComponent* Mesh, FHCHitResult& HitResult, bool& ModifiedPrimitive) {
}

void UEnemyScriptComponent::ModifyElectricAccumulationBySuperArmor(float& refElectric, bool isSuperArmor) {
}

void UEnemyScriptComponent::MainTick(float DeltaSeconds) {
}

bool UEnemyScriptComponent::IsValidSaveBodyEmissiveValue(int32 Index) {
    return false;
}

bool UEnemyScriptComponent::IsUpdateEnemyTickEnableNative(bool isBoss, bool StopUpdateEnemyTickEnable, bool IsTickMove) const {
    return false;
}

bool UEnemyScriptComponent::IsTrigger(TArray<HCSkillExtraType> SkillExtraTypes) {
    return false;
}

bool UEnemyScriptComponent::IsSuspendIKCondition() {
    return false;
}

bool UEnemyScriptComponent::IsSuspendFollowAttack() {
    return false;
}

bool UEnemyScriptComponent::IsStopWeakEmissive() {
    return false;
}

bool UEnemyScriptComponent::IsStealthSeeEnebleNative(bool& IsValid) {
    return false;
}

bool UEnemyScriptComponent::IsStealthEnableNative() {
    return false;
}

bool UEnemyScriptComponent::IsStateStealthNative(EEnemyStealthState StealthState) {
    return false;
}

bool UEnemyScriptComponent::IsSkillExtraType_CommonInfo(FHCSkillCommonInfo skillInfo, HCSkillExtraType ExtraType) {
    return false;
}

bool UEnemyScriptComponent::IsSkillExtraType(TArray<HCSkillExtraType> SkillExtraTypes, HCSkillExtraType ExtraType) {
    return false;
}

bool UEnemyScriptComponent::IsQuickFind() const {
    return false;
}

bool UEnemyScriptComponent::IsPsychicObjectCombo(FHCHitResult HitResult) {
    return false;
}

bool UEnemyScriptComponent::IsPsychic_Obj_MapGimmickDamage(HCSkillAttackType SkillAttackType) {
    return false;
}

bool UEnemyScriptComponent::IsPlayerOutOfBattleFieldFence() {
    return false;
}

bool UEnemyScriptComponent::IsNotTargetNative() {
    return false;
}

bool UEnemyScriptComponent::IsNotDamageMotion(bool NotDamageMotion) {
    return false;
}

bool UEnemyScriptComponent::IsNeedResetStateMachine(float ElapsedTime, float ResetSecond) const {
    return false;
}

bool UEnemyScriptComponent::IsMoveAnim(EnemyMoveAnimKind checkKind) const {
    return false;
}

bool UEnemyScriptComponent::IsInvincible(bool& invincibleAll, bool& invincibleParts) {
    return false;
}

bool UEnemyScriptComponent::IsInitLayout_Native() {
    return false;
}

bool UEnemyScriptComponent::IsIgnorePenetrateArmor() const {
    return false;
}

bool UEnemyScriptComponent::IsIgnoreCaptureRange() const {
    return false;
}

bool UEnemyScriptComponent::IsHpPercentDown(float percent, bool& Error) {
    return false;
}

bool UEnemyScriptComponent::IsHitWeak_HitResultS(FHCHitResult HitResults) {
    return false;
}

bool UEnemyScriptComponent::IsHitWeak_HitResult(TArray<FHCHitResult> HitResults) {
    return false;
}

bool UEnemyScriptComponent::IsHitWeak(UPrimitiveComponent* PrimitiveComponent, FHCSkillCommonInfo skillInfo) {
    return false;
}

bool UEnemyScriptComponent::IsHitPart(UPrimitiveComponent* PrimitiveComponent, int32 no) {
    return false;
}

bool UEnemyScriptComponent::IsHitFromMainPlayer(AActor* attacker) {
    return false;
}

bool UEnemyScriptComponent::IsFlying() {
    return false;
}

bool UEnemyScriptComponent::IsFlyHeightAdjust() {
    return false;
}

bool UEnemyScriptComponent::IsFloodedAnimRootMotionScale(bool NewIsMoveAnim) {
    return false;
}

bool UEnemyScriptComponent::IsEvent() const {
    return false;
}

bool UEnemyScriptComponent::IsEnemyTickDisableCondition_Native(bool bDiscoverClosed) {
    return false;
}

bool UEnemyScriptComponent::IsEnemyStopAnimKind(bool IsWait, bool IsEventWait) const {
    return false;
}

bool UEnemyScriptComponent::IsEnemyDamageLaunchCPP() const {
    return false;
}

bool UEnemyScriptComponent::IsEnableWeak() {
    return false;
}

bool UEnemyScriptComponent::IsEnableMoveRangeNative(float EnableMoveArea, float DistanceFromEnemyInitToPlayer, float EnableMoveHeight, float HeightFromEnemyInitToPlayer) {
    return false;
}

bool UEnemyScriptComponent::IsEnableLostAction() const {
    return false;
}

bool UEnemyScriptComponent::IsDuringLaunchDamage(bool IsNewLaunch, bool DamageFloating, bool NewDamageFloating) {
    return false;
}

bool UEnemyScriptComponent::IsDownDamageToDead(bool bEnableConsiderFlag) {
    return false;
}

bool UEnemyScriptComponent::IsDistanceAngleCheck(AActor* Target, FVector TargetLocation, float Range, float Angle, FRotator Rot, bool noHeight, FVector selfLocation, bool selfLocationOn) {
    return false;
}

bool UEnemyScriptComponent::IsDisableWeakAroundEffect(int32 Index) {
    return false;
}

bool UEnemyScriptComponent::IsDisableTargetBattleNative() {
    return false;
}

bool UEnemyScriptComponent::IsDelayDeath_Native() {
    return false;
}

bool UEnemyScriptComponent::IsDeadAfterReaction(TArray<HCSkillExtraType> SkillExtraTypes) {
    return false;
}

bool UEnemyScriptComponent::IsDamageSuperArmor() {
    return false;
}

bool UEnemyScriptComponent::IsDamageKnockBack() {
    return false;
}

bool UEnemyScriptComponent::IsDamageDownWait() {
    return false;
}

bool UEnemyScriptComponent::IsDamage() const {
    return false;
}

bool UEnemyScriptComponent::IsCrashChanceAndIgnore() {
    return false;
}

bool UEnemyScriptComponent::IsContinuityDamageMotion(EnemyAliveAnimKind AliveAnimKind) {
    return false;
}

bool UEnemyScriptComponent::IsConsiderDownDead() const {
    return false;
}

bool UEnemyScriptComponent::IsCheckEnemyKind(EnemyKind checkKind) const {
    return false;
}

bool UEnemyScriptComponent::IsCheckDamageDownAnimKind(EnemyDamageDownAnimKind checkKind) const {
    return false;
}

bool UEnemyScriptComponent::IsCheckDamageAnimKind(EnemyDamageAnimKind checkKind) const {
    return false;
}

bool UEnemyScriptComponent::IsCheckAliveAnimKind(EnemyAliveAnimKind checkKind) const {
    return false;
}

bool UEnemyScriptComponent::IsChangeOldFindType() const {
    return false;
}

bool UEnemyScriptComponent::IsBrainCrashDeadState() {
    return false;
}

bool UEnemyScriptComponent::IsArmor(UPrimitiveComponent* PrimitiveComponent) {
    return false;
}

bool UEnemyScriptComponent::IsAbsolutelyNoReactionBP() const {
    return false;
}

bool UEnemyScriptComponent::IsAbsoluteDetectTarget() const {
    return false;
}

void UEnemyScriptComponent::Initialize(UCharacterMovementComponent* CharaMoveComp, UCharactersParameterComponent* CharactersParameterComp, UEnemyLookCheckComponent* LookCheckComp, UEnemyAnimControllerComponent* AnimController, USkeletalMeshComponent* MeshComp, UHateTargetComponent* HateTargetComp, UEnemyFixParamComponentBase* FixParam, USearchingComponent* SearchingComponent, UChangeWeakStateComponentBase* ChangeWeakStateComponent, UEnemyAroundEffectComponentBase* AroundEffectComponentBase, bool IsIgnoreAllowance, bool IsIgnoreRestrictAttackOther, bool UseDefaultSpawnSearchParam) {
}

void UEnemyScriptComponent::InitCoolDownTimerBP(int32 Num) {
}

void UEnemyScriptComponent::GetUsedWeaponAllListNative(TArray<AEnemyWeaponBase*> WeaponList, TArray<AEnemyWeaponBase*>& Result) {
}

void UEnemyScriptComponent::GetTickIntervalSecondsParam(float& OutDefaultSeconds, float& OutMaxSeconds, EEnemyTickPriorityType InTickPriority) {
}

FSearchTestInfo UEnemyScriptComponent::GetTargetSearchTestInfo() const {
    return FSearchTestInfo{};
}

FSearchBasicInfo UEnemyScriptComponent::GetTargetSearchBasicInfo() const {
    return FSearchBasicInfo{};
}

float UEnemyScriptComponent::GetTargetAngle(FVector baseDist, FVector targetDist) {
    return 0.0f;
}

float UEnemyScriptComponent::GetSensingAreaNative(uint8 SpawnState, float ChangeSensingArea) {
    return 0.0f;
}

float UEnemyScriptComponent::GetSearchRangeNative(uint8 SpawnState, float ChangeSearchRange) {
    return 0.0f;
}

float UEnemyScriptComponent::GetSearchAngleNative(uint8 SpawnState, float ChangeSearchAngle) {
    return 0.0f;
}

float UEnemyScriptComponent::GetSaveBodyEmissiveValue(int32 Index) {
    return 0.0f;
}

FVector UEnemyScriptComponent::GetRestoreBrainFieldLocation() {
    return FVector{};
}

float UEnemyScriptComponent::GetParamTableResistance(EEnemyDamageType DamageType) {
    return 0.0f;
}

float UEnemyScriptComponent::GetParamBasicAccumulation(EEnemyDamageType DamageType) {
    return 0.0f;
}

EEnemyFindPlayerType UEnemyScriptComponent::GetOldFindPlayerType() const {
    return EEnemyFindPlayerType::NonBattle;
}

float UEnemyScriptComponent::GetMoveAreaNative() {
    return 0.0f;
}

FSearchTestInfo UEnemyScriptComponent::GetMainPlayerSearchTestInfo() const {
    return FSearchTestInfo{};
}

FSearchBasicInfo UEnemyScriptComponent::GetMainPlayerSearchBasicInfo() const {
    return FSearchBasicInfo{};
}

bool UEnemyScriptComponent::GetIsDead_Native() {
    return false;
}

bool UEnemyScriptComponent::GetIsBattleMode_Native() {
    return false;
}

void UEnemyScriptComponent::GetHitStopParam(FHCSkillCommonInfo skillInfo, bool& IgnoreTarget, HCHitStopCauseType& CauseType) {
}

float UEnemyScriptComponent::GetFindValue() const {
    return 0.0f;
}

EEnemyFindPlayerType UEnemyScriptComponent::GetFindPlayerType() const {
    return EEnemyFindPlayerType::NonBattle;
}

FVector UEnemyScriptComponent::GetEyePositionNative(FName EyeSocketName) {
    return FVector{};
}

FVector UEnemyScriptComponent::GetDamagePartDir(UDamagePartCollisionComponent* DamagePartCollisionComponent) {
    return FVector{};
}

float UEnemyScriptComponent::GetCoolDownTimerBP(int32 Index) const {
    return 0.0f;
}

float UEnemyScriptComponent::GetCaptureAreaNative(uint8 SpawnState, float ChangeCaptureArea) {
    return 0.0f;
}

bool UEnemyScriptComponent::GetAndUpdateContinuousSameDamageReaction() {
    return false;
}

FAiParamEnemyInfo UEnemyScriptComponent::GetAiTableDataNative(uint8 actionEnum) {
    return FAiParamEnemyInfo{};
}

void UEnemyScriptComponent::ForceSettingOutRangeFade(bool isDisp) {
}

void UEnemyScriptComponent::FlyPawnSetActorAllTickEnabledNative(bool Enabled, AActor* FlyEnemyPawn, UActorComponent* DefaultSceneRoot, UActorComponent* FloatingPawnMovement, AActor* AIController, UActorComponent* PathFollowingComp) {
}

void UEnemyScriptComponent::FlyHeightAdjust(float DeltaSeconds, float FlyBaseZ, bool IsFlyState, bool NewIsMoveAnim, bool FlyAdjust, float FlyLowerHeight, float FlyHighestHeight, float FlyAdjustSpeed, float AnyMoreDifferenceUpdate) {
}

void UEnemyScriptComponent::EnableTickComponentWasRecording() {
}

void UEnemyScriptComponent::EnableLostAction(bool bEnable) {
}

bool UEnemyScriptComponent::EnableInvincible(bool Enable) {
    return false;
}

void UEnemyScriptComponent::ClearSaveBodyEmissiveValue() {
}

bool UEnemyScriptComponent::CheckUniqueObjState_CrashChanceCancel(bool IsBrainCrashAccess) {
    return false;
}

void UEnemyScriptComponent::CheckUniqueObjState_AddSkillExtraType(FHCHitResult HitResult, TArray<HCSkillExtraType>& SkillExtraType) {
}

void UEnemyScriptComponent::CheckIgnoreSuperArmor(TArray<HCSkillExtraType> SkillExtraTypes) {
}

float UEnemyScriptComponent::CalcWeakAttackMaterialRate(float& l_Value, float& l_EmissivePowerValue, float& WeakDamageMaterialTime, float WeakDamageMaterialScale, float WeakMaterialPointRateMax, float WeakMaterialEmissivePowerMax, UCurveFloat* WeakMaterialCurve, bool& ChangingWeakDamageMaterial, bool& IsWeakEffect, bool IsMultiWeak) {
    return 0.0f;
}

void UEnemyScriptComponent::CalcTickSecondsNative(float& OutIntervalActorTime, bool& OutExecTick, bool& OutIncrementUpdateEnemy, float DeltaSec, EEnemyTickPriorityType InTickPriority, bool InCanUpdateEnemy) {
}

bool UEnemyScriptComponent::CalcTickSeconds_Native(float DeltaSec) {
    return false;
}

void UEnemyScriptComponent::CalcTickNative(FVector InitPos, float EnableMoveArea, float EnableMoveHeight, bool& IsHitCheck, float& DistanceFromEnemyInitToPlayer, float& HeightFromEnemyInitToPlayer, float& DistanceFromEnemyToPlayer, float& HeightFromEnemyToPlayer) {
}

ARSCharacterBase* UEnemyScriptComponent::CalcTargetInfo(float& l_TargetDistance, float& l_TargetHeight, float& l_TargetAngle, bool InIsBattling, FVector InBaseLocation) {
    return NULL;
}

FSearchTestInfo UEnemyScriptComponent::CalcSearchTest(const ARSCharacterBase* Target, const FSearchBasicInfo& basicInfo, float searchViewRange, float searchViewAngle, float searchSensingRange, float captureRange, float searchHeight) const {
    return FSearchTestInfo{};
}

FSearchBasicInfo UEnemyScriptComponent::CalcSearchInfo(const ARSCharacterBase* Target) const {
    return FSearchBasicInfo{};
}

void UEnemyScriptComponent::CalcNormalMaterialRate(float& l_Value, float& l_EmissivePowerValue, float& WeakDamageMaterialTime, float NormalWeakMaterialScale, float NormalWeakMaterialRateMin, float NormalWeakMaterialRateMax, float NormalWeakMaterialEmissivePowerMin, float NormalWeakMaterialEmissivePowerMax, UCurveFloat* WeakMaterialCurve) {
}

float UEnemyScriptComponent::CalcFinalDamageByDefence(float BaseDamage) {
    return 0.0f;
}

bool UEnemyScriptComponent::CalcAccumulationByDefence_CheckInvincible(float& refWince, float& refKnockback, float& refDown, float& refLaunch, float& refFlame, float& refElectric, float& refFlooded, float& refOil, float& refConfusion, float& refCrashScale) {
    return false;
}

void UEnemyScriptComponent::CalcAccumulationByDefence(float refWince, float refKnockback, float refDown, float refCrashScale, float refCrashCapCheckRate, float& OutWince, float& OutKnockback, float& OutDown, float& OutCrashScale, float& OutCrashCapCheckRate, AActor* attackActor, bool IsEnemyDamageknockBack) {
}

void UEnemyScriptComponent::BrakeArmor(TArray<int32> ArmorPartsNo) {
}

void UEnemyScriptComponent::AddResetSecondRate() {
}

void UEnemyScriptComponent::AddBattleActor(bool& IsNotAddedBattleManager) {
}

UEnemyScriptComponent::UEnemyScriptComponent() {
    this->mTargetHeight = 0.00f;
    this->mReceiveMontage = NULL;
    this->mIgnoreUpdateMoveMaxSpeed = false;
    this->mbIsSpawnNow = false;
    this->mbUseDefaultSpawnSearchParam = true;
    this->mbIsBattleEnemy = false;
    this->mbIsWait = false;
    this->mbIsEventWait = false;
    this->mbIsBT_ForceBreak = false;
    this->mbIsWander = false;
    this->mbEnableWander = false;
    this->mbIsBattleStart = false;
    this->mbIsBoss = false;
    this->mbCollisionHitWall = false;
    this->mESpawnState = 0;
    this->mFlyModeChangeIgnoreSeconds = 0.00f;
    this->mFlyEnemyPawn = NULL;
    this->mEFormType = EEnemyFormType::Invalid;
    this->mOutRangeFadeValue = 0.00f;
    this->mOutRangeFadeValueInt = 0;
    this->mWeaponOutRangeFadeValueInt = 0;
    this->mTickActorSeconds = 0.00f;
    this->mUpdateFindPlayerNotRenderedTime = 15.00f;
    this->mGroupID = -1;
    this->mBattlefieldFenceAppearRate = 0.00f;
    this->mbInvincible = false;
    this->mWeakNo = 0;
    this->mArmorNo = 0;
    this->mCharaDeadType = ECharacterDeadType::Dead;
    this->mIsDeadStartNotify = false;
    this->mbIgnorePenetrateArmor = false;
}

