#include "PlayerAIBaseComponent.h"

class AActor;
class ACharacter;
class ARSCharacterBase;
class UHitCheckComponent;
class UPlayerAIEvaluateLocationComponent;
class UPlayerScriptComponent;

void UPlayerAIBaseComponent::UpdateThreatData(float DeltaSeconds) {
}

void UPlayerAIBaseComponent::UpdateThinkTimerList(AActor* UpdateActor) {
}

void UPlayerAIBaseComponent::UpdateMoveWallCPP() {
}

void UPlayerAIBaseComponent::UpdateMovePosCPP() {
}

void UPlayerAIBaseComponent::UpdateMovePos_FollowPlayerCPP() {
}

void UPlayerAIBaseComponent::UpdateMovePos_CircleCPP() {
}

void UPlayerAIBaseComponent::UpdateMovePos_ApproachTargetCPP() {
}

void UPlayerAIBaseComponent::UpdateEventMoveCPP() {
}

void UPlayerAIBaseComponent::UpdateDodgeCPP() {
}


void UPlayerAIBaseComponent::UpdateDodge_FollowPlayerCPP() {
}

void UPlayerAIBaseComponent::UpdateDodge_BattleCPP() {
}

void UPlayerAIBaseComponent::UpdateDataCPP() {
}

void UPlayerAIBaseComponent::UpdateCPP() {
}

void UPlayerAIBaseComponent::UpdateCounterCPP() {
}

void UPlayerAIBaseComponent::UpdateCheckRangeAttackEnpc(UHitCheckComponent* HitCheck) {
}

void UPlayerAIBaseComponent::UpdateCheckRangeAttack(UHitCheckComponent* HitCheck) {
}

bool UPlayerAIBaseComponent::UpdateCheckBattleActionStartCPP() {
    return false;
}

void UPlayerAIBaseComponent::UpdateBattleTargetActorCPP() {
}


void UPlayerAIBaseComponent::UpdateAI() {
}



void UPlayerAIBaseComponent::SetThinkTimerByIndex(int32 Index, float Time) {
}

bool UPlayerAIBaseComponent::SetThinkPhaseTransitionCPP(int32 NewPhase) {
    return false;
}

void UPlayerAIBaseComponent::SetThinkKeepOutCPP() {
}

void UPlayerAIBaseComponent::SetTargetSearchModeCPP(EPlayerAITargetSearchModeCPP Value) {
}

void UPlayerAIBaseComponent::SetSelfRecoveryNum(int32 Value) {
}

void UPlayerAIBaseComponent::SetOwnerPlayerScript(UPlayerScriptComponent* comp) {
}

void UPlayerAIBaseComponent::SetOrderCPP(EPlayerAIOrder _Order) {
}

void UPlayerAIBaseComponent::SetMoveStickDetourCPP(bool bEnable, float YawAngle) {
}

void UPlayerAIBaseComponent::SetMoveStickBackCPP(bool bBack) {
}

void UPlayerAIBaseComponent::SetMoveModeFromThinkCPP(EPlayerAIBattleThinkTypeCPP Think) {
}

void UPlayerAIBaseComponent::SetMoveModeCPP(EPlayerAIMoveModeCPP Mode) {
}

void UPlayerAIBaseComponent::SetMoveLocationCPP(FVector Location, float ArmLength, float Yaw) {
}

void UPlayerAIBaseComponent::SetLeftStickScale(bool bEnable, float Scale) {
}

void UPlayerAIBaseComponent::SetInvalidKeepOutCPP(bool IsInvalid) {
}

void UPlayerAIBaseComponent::SetForceUpdateTarget(bool Value) {
}

bool UPlayerAIBaseComponent::SetFinishMetamorphosisCPP(bool bFinish) {
    return false;
}

void UPlayerAIBaseComponent::SetEventWaitCPP() {
}

void UPlayerAIBaseComponent::SetEventMoveCPP(const TArray<FVector>& pos_list_in, const TArray<float>& radius_list_in, bool Walk, bool bAfterWait, float MaxMoveTime) {
}

void UPlayerAIBaseComponent::SetDisableChangeTargetResetThinkCPP(bool InDisable) {
}


void UPlayerAIBaseComponent::SetBattleTargetDist(FVector Value) {
}

void UPlayerAIBaseComponent::SetBattleTargetCPP(ARSCharacterBase* TargetActor) {
}

void UPlayerAIBaseComponent::SetBattleModeCPP(bool bBattle) {
}

void UPlayerAIBaseComponent::SetAttackHit(bool Value) {
}

ARSCharacterBase* UPlayerAIBaseComponent::SearchTargetCPP(const TArray<ARSCharacterBase*>& TargetList) {
    return NULL;
}

bool UPlayerAIBaseComponent::SearchPsychicObjectCPP() const {
    return false;
}


void UPlayerAIBaseComponent::ResetBattleThinkCPP() {
}

void UPlayerAIBaseComponent::ReserveNextThinkCPP(EPlayerAIBattleThinkTypeCPP ThinkType, EPlayerAIBattleThinkParamCPP Param) {
}

void UPlayerAIBaseComponent::RequestUseItemCPP(EConsumeItemID item_id_in, bool bAssist) {
}

void UPlayerAIBaseComponent::RegisterThreatActor(AActor* ThreatActor) {
}

void UPlayerAIBaseComponent::RegisterEvaluateLocationCPP() {
}


void UPlayerAIBaseComponent::PreUpdateCPP() {
}

void UPlayerAIBaseComponent::PostUpdateCPP() {
}

void UPlayerAIBaseComponent::OnUpdateUpdateEvaluateLocationCPP() {
}


void UPlayerAIBaseComponent::OnReserveReturnMovePlayer() {
}

void UPlayerAIBaseComponent::OnMovementCollisionLandCPP() {
}

void UPlayerAIBaseComponent::OnJumpCPP() {
}


void UPlayerAIBaseComponent::OnEventStartCPP() {
}

void UPlayerAIBaseComponent::OnClearReserveReturnMovePlayer() {
}

void UPlayerAIBaseComponent::OnAttackHitCPP() {
}

void UPlayerAIBaseComponent::NotifyResetBehaviorTreeCPP() {
}

void UPlayerAIBaseComponent::NotifyMoveBrainFieldCPP(bool bToBrainField) {
}

void UPlayerAIBaseComponent::NotifyForceWarpCPP() {
}

void UPlayerAIBaseComponent::NotifyAttackStartCPP() {
}

FVector UPlayerAIBaseComponent::NormalizeVectorXY_CPP(FVector InVec) {
    return FVector{};
}


void UPlayerAIBaseComponent::MainUpdateCPP() {
}

void UPlayerAIBaseComponent::JumpOrderCPP(FVector Destination) {
}

bool UPlayerAIBaseComponent::IsWaitBattleStartCPP() const {
    return false;
}

bool UPlayerAIBaseComponent::IsUseItemThinkCPP() const {
    return false;
}

bool UPlayerAIBaseComponent::IsUseCppFunc() const {
    return false;
}

bool UPlayerAIBaseComponent::IsUpdateCPP() const {
    return false;
}

bool UPlayerAIBaseComponent::IsThinkTimerOverByIndex(int32 Index) {
    return false;
}

bool UPlayerAIBaseComponent::IsSelfRecoveryCPP() const {
    return false;
}

bool UPlayerAIBaseComponent::IsResetBehaviorTreeCPP() const {
    return false;
}

bool UPlayerAIBaseComponent::IsRegisterThreatActor(AActor* CheckActor) {
    return false;
}

bool UPlayerAIBaseComponent::IsRangeTooFarCPP(const FVector& Dist) const {
    return false;
}

bool UPlayerAIBaseComponent::IsRangeNearCPP(const FVector& Dist) const {
    return false;
}

bool UPlayerAIBaseComponent::IsRangeMiddleCPP(const FVector& Dist) const {
    return false;
}

bool UPlayerAIBaseComponent::IsRangeFarCPP(const FVector& Dist) const {
    return false;
}

bool UPlayerAIBaseComponent::IsPsychicComboThinkCPP() const {
    return false;
}

bool UPlayerAIBaseComponent::IsPsychicAbleCPP_TypeCheck(EPlayerAIBattleThinkTypeCPP ThinkType) const {
    return false;
}

bool UPlayerAIBaseComponent::IsPsychicAbleCPP() {
    return false;
}

bool UPlayerAIBaseComponent::IsLeftStickScaleEnable() const {
    return false;
}

bool UPlayerAIBaseComponent::IsJumpAbleCPP() const {
    return false;
}

bool UPlayerAIBaseComponent::IsForceUpdateTarget() const {
    return false;
}

bool UPlayerAIBaseComponent::IsFinishMetamorphosisCPP() const {
    return false;
}

bool UPlayerAIBaseComponent::IsEventWaitCPP() const {
    return false;
}

bool UPlayerAIBaseComponent::IsEventMoveEndCPP() const {
    return false;
}

bool UPlayerAIBaseComponent::IsEventMoveCPP() const {
    return false;
}

bool UPlayerAIBaseComponent::IsEnableStickInputCPP() const {
    return false;
}

bool UPlayerAIBaseComponent::IsDodgeAbleCPP() const {
    return false;
}

bool UPlayerAIBaseComponent::IsBattleThinkCPP(EPlayerAIBattleThinkTypeCPP Type) const {
    return false;
}

bool UPlayerAIBaseComponent::IsBattleActionStartCPP() const {
    return false;
}

bool UPlayerAIBaseComponent::IsAttackThinkCPP(EPlayerAIBattleThinkTypeCPP Type) const {
    return false;
}

bool UPlayerAIBaseComponent::IsAttackHit() const {
    return false;
}

bool UPlayerAIBaseComponent::IsAttackAbleCPP_TypeCheck(EPlayerAIBattleThinkTypeCPP ThinkType) const {
    return false;
}

bool UPlayerAIBaseComponent::IsAttackAbleCPP() const {
    return false;
}

void UPlayerAIBaseComponent::InitializeThinkTimerList(int32 TimerNum) {
}

void UPlayerAIBaseComponent::InitializeFixParam(const FPlayerAIComponentInitializeParam& Param) {
}

void UPlayerAIBaseComponent::InitializeAI() {
}

EConsumeItemID UPlayerAIBaseComponent::GetUseItemID_CPP() const {
    return EConsumeItemID::None;
}

int32 UPlayerAIBaseComponent::GetThinkPhaseTransitionCPP() const {
    return 0;
}


float UPlayerAIBaseComponent::GetTargetAngleXY_CPP(const FVector& BaseDirection, const FVector& TargetDirection) const {
    return 0.0f;
}

float UPlayerAIBaseComponent::GetTargetAngleCPP(const FVector& BaseDirection, const FVector& TargetDirection) const {
    return 0.0f;
}

EPlayerAIBattleThinkTypeCPP UPlayerAIBaseComponent::GetStealthThinkCPP() {
    return EPlayerAIBattleThinkTypeCPP::MainThink_Move;
}

int32 UPlayerAIBaseComponent::GetSelfRecoveryNum() const {
    return 0;
}

EPlayerAIOrder UPlayerAIBaseComponent::GetOrderCPP() const {
    return EPlayerAIOrder::Free;
}

AActor* UPlayerAIBaseComponent::GetMovePosActorCPP() const {
    return NULL;
}

EPlayerAIMoveModeCPP UPlayerAIBaseComponent::GetMoveModeCPP() const {
    return EPlayerAIMoveModeCPP::Wait;
}

float UPlayerAIBaseComponent::GetLeftStickScale() const {
    return 0.0f;
}

void UPlayerAIBaseComponent::GetEventMovePosActorCPP(AActor*& OutPosActor, float& OutAcceptRadius) {
}

float UPlayerAIBaseComponent::GetEventMoveLeftStickY_CPP() const {
    return 0.0f;
}

float UPlayerAIBaseComponent::GetEventMoveLeftStickX_CPP() const {
    return 0.0f;
}

UPlayerAIEvaluateLocationComponent* UPlayerAIBaseComponent::GetEvaluateLocation() const {
    return NULL;
}


EPlayerAIBattleThinkParamCPP UPlayerAIBaseComponent::GetCurrentBattleThinkParamCPP() const {
    return EPlayerAIBattleThinkParamCPP::None;
}

EPlayerAIBattleThinkTypeCPP UPlayerAIBaseComponent::GetCurrentBattleThinkCPP() const {
    return EPlayerAIBattleThinkTypeCPP::MainThink_Move;
}

FVector UPlayerAIBaseComponent::GetControlPlayerDistCPP() const {
    return FVector{};
}


FVector UPlayerAIBaseComponent::GetBattleTargetDist() const {
    return FVector{};
}

AActor* UPlayerAIBaseComponent::GetBattleTargetActorCPP() const {
    return NULL;
}

TEnumAsByte<RSAttackInputKind::Type> UPlayerAIBaseComponent::GetAttackInputKindCPP() const {
    return RSAttackInputKind::Attack1;
}

int32 UPlayerAIBaseComponent::GetAttackCountCPP() const {
    return 0;
}

void UPlayerAIBaseComponent::EndEventWaitCPP() {
}

void UPlayerAIBaseComponent::EndEventMoveCPP() {
}


void UPlayerAIBaseComponent::EnableStickInputCPP(FName ClaimantName) {
}

void UPlayerAIBaseComponent::DisableStickInputCPP(FName ClaimantName) {
}

void UPlayerAIBaseComponent::DecreaseSelfRecoveryNumCPP() {
}


TArray<FPlayerAIThreatActorData> UPlayerAIBaseComponent::DebugGetThreatDataArray() {
    return TArray<FPlayerAIThreatActorData>();
}

void UPlayerAIBaseComponent::ClearDodgeRangeAttackData() {
}

bool UPlayerAIBaseComponent::CheckUnderSiegeCPP() const {
    return false;
}


bool UPlayerAIBaseComponent::CheckPsychicObjectCPP(bool bCapture, bool bAttack) {
    return false;
}

bool UPlayerAIBaseComponent::CheckNpcReviveCPP(float InDistance) const {
    return false;
}

void UPlayerAIBaseComponent::CheckMoveWallCPP(EPlayerAIMoveWallCPP& OutWall, FVector& OutLocation) {
}

bool UPlayerAIBaseComponent::CheckMovePosCPP() {
    return false;
}


void UPlayerAIBaseComponent::CheckGoalLocationKeepOutCPP() {
}

bool UPlayerAIBaseComponent::CheckEventMovePosCPP(bool bCheckDistance) {
    return false;
}

bool UPlayerAIBaseComponent::CheckDodgeRangeAttack(FVector& DodgeDir) {
    return false;
}

bool UPlayerAIBaseComponent::CheckDistanceFromVectorXYZ_CPP(const FVector& Vec, float Distance) const {
    return false;
}

bool UPlayerAIBaseComponent::CheckDistanceFromVectorXY_CPP(const FVector& Vec, float Distance) const {
    return false;
}

bool UPlayerAIBaseComponent::CheckDistanceFromVectorCPP(const FVector& Dist, float Distance, bool bIgnoreHeight) const {
    return false;
}

bool UPlayerAIBaseComponent::CheckDistanceCPP(const FVector& RefPos1, const FVector& RefPos2, float Distance, bool bIgnoreHeight) const {
    return false;
}


void UPlayerAIBaseComponent::ChangeThinkTableTypeCPP(EPlayerAIThinkTableTypeCPP ThinkTableType, bool bResetThink) {
}

void UPlayerAIBaseComponent::CancelUseItemCPP() {
}

bool UPlayerAIBaseComponent::calcThinkTransitionProbabilityCPP_NeedsHPCheckByThinkType(EPlayerAIBattleThinkTypeCPP Action) {
    return false;
}

int32 UPlayerAIBaseComponent::calcThinkTransitionProbabilityCPP_CheckMoveOrAttackOrOthers(EPlayerAIBattleThinkTypeCPP Action) {
    return 0;
}

int32 UPlayerAIBaseComponent::CalcThinkTransitionProbabilityCPP(int32 Probability, EPlayerAIBattleThinkTypeCPP Action) {
    return 0;
}


FVector2D UPlayerAIBaseComponent::CalcStickDirCPP() {
    return FVector2D{};
}

FVector UPlayerAIBaseComponent::CalcStickDir_BattleDodgeCPP() {
    return FVector{};
}

FVector UPlayerAIBaseComponent::CalcStickDir_BattleAttackCPP() const {
    return FVector{};
}

FVector UPlayerAIBaseComponent::CalcMoveToActorLocationCPP(ACharacter* Self) {
    return FVector{};
}

float UPlayerAIBaseComponent::CalcDistanceTargetEvaluateCPP(const FVector& TargetLocation) {
    return 0.0f;
}



UPlayerAIBaseComponent::UPlayerAIBaseComponent() {
    this->Param_ThreatTime = 10.00f;
    this->DodgeRangeAttackDistance = 1000.00f;
    this->EnpcUniqueObjDodgeProbability = 100;
    this->MoveModeCPP = EPlayerAIMoveModeCPP::Wait;
    this->bLeftPos = false;
    this->bCircleDirClockwise = false;
    this->MoveCircleSpeed = 0.00f;
    this->OrderJumpNum = 0;
    this->ThinkDistance = 500.00f;
    this->bEnableGoalRelativeLocation = false;
    this->MoveGoalActor = NULL;
    this->CurrentGoalArmLength = 0.00f;
    this->CurrentGoalYaw = 0.00f;
    this->bCircleNear = false;
    this->NearCircleMoveNearDist = 0.00f;
    this->NearCircleMoveFarDist = 0.00f;
    this->bOwnerENPC = false;
    this->bInvalidKeepOut = false;
    this->bAttackHit = false;
    this->bUpdateBattleTarget = false;
    this->bBattleModeFlag = false;
    this->bForceUpdateTarget = false;
    this->AttackCount = 0;
    this->NoAttackTime = 0.00f;
    this->bBattleActionStartFlag = false;
    this->UpdateBattleTargetIntervalTime = 30.00f;
    this->bDodgeAble = false;
    this->bDodgeAttack = false;
    this->bDodgeRangeAttack = false;
    this->DodgeIntervalTime = 3.00f;
    this->ForceDodgeIntervalTime = 0.00f;
    this->LeftStickScale = 1.00f;
    this->bLeftStickScaleEnable = false;
    this->bMoveStickBack = false;
    this->bMoveStickDetour = false;
    this->MoveStickDetourYawAngle = 0.00f;
    this->TargetSearchModeCPP = EPlayerAITargetSearchModeCPP::Near;
    this->Order = EPlayerAIOrder::Free;
    this->RANGE_NEAR = 500.00f;
    this->RANGE_FAR = 1000.00f;
    this->RANGE_TOO_FAR = 2000.00f;
    this->MOVE_AIM_CIRRCLE_SPEED = 10.00f;
    this->MOVE_CIRCLE_SPEED = 55.00f;
    this->MOVE_CIRCLE_SPEED_FAR = 45.00f;
    this->NPC_WARY_HP_RATE_1 = 0.00f;
    this->NPC_WARY_HP_RATE_2 = 0.00f;
    this->NPC_WARY_PROBABILITY_DOWN_1 = 0;
    this->NPC_WARY_PROBABILITY_DOWN_2 = 0;
    this->NPC_ATTACK_PROBABILITY_UP_TIME_1 = 0.00f;
    this->NPC_ATTACK_PROBABILITY_UP_TIME_2 = 0.00f;
    this->NPC_ATTACK_PROBABILITY_UP_VALUE_1 = 0;
    this->NPC_ATTACK_PROBABILITY_UP_VALUE_2 = 0;
    this->NPC_MOVE_PROBABILITY_DOWN_TIME = 0.00f;
    this->NPC_MOVE_PROBABILITY_DOWN_VALUE = 0;
    this->NPC_ATTACK_PROBABILITY_DOWN_THREAT_VALUE = -100;
    this->NPC_ASSIST_ATTACK_PROBABILITY_UP_VALUE = 0;
    this->NPC_REVIVE_DISTANCE = 1000.00f;
    this->NPC_REVIVE_DISTANCE_FAR = 3000.00f;
    this->CONFUSION_FRIEND_PRIORITY_OFFSET = 0.00f;
    this->bBeginEvaluateLocation = false;
    this->bFirstEvaluate = false;
    this->bResetBehaviorTree = false;
    this->bEventWait = false;
    this->CurrentBattleThinkCPP = EPlayerAIBattleThinkTypeCPP::MainThink_Move;
    this->CurrentBattleThinkParamCPP = EPlayerAIBattleThinkParamCPP::None;
    this->ReserveThinkTypeCPP = EPlayerAIBattleThinkTypeCPP::MainThink_Move;
    this->ReserveThinkParamCPP = EPlayerAIBattleThinkParamCPP::None;
    this->bReserveNextThink = false;
    this->bFinishMetamorphosis = false;
    this->ThinkPhaseTransition = 0;
    this->CurrentThinkTableTypeCPP = EPlayerAIThinkTableTypeCPP::Free;
    this->bEventMove = false;
    this->EventMoveWalkScale = 0.30f;
    this->ClaimantNameEventMove = TEXT("PlayerAIEventMove");
    this->StoreCharacterHitPriority = ECharacterHitPriority::Fix;
    this->bStoreCharacterHitPriority = false;
    this->bEventMoveAfterWait = false;
    this->bEventMoveWalkFlag = false;
    this->bUseItemThink = false;
    this->UseItemID = EConsumeItemID::None;
    this->bAssistItem = false;
    this->BattleTargetAngle = 0.00f;
    this->bSelfRecoveryFlag = false;
    this->SelfRecoveryNum = 0;
    this->bDebugDrawLocationEvaluate = false;
    this->InitialTargetLength = 0.00f;
    this->bDisableTargetChangeResetThink = false;
    this->OwnerPlayerScript = NULL;
    this->bUseCppFunc = true;
}

