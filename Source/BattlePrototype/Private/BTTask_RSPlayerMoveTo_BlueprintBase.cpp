#include "BTTask_RSPlayerMoveTo_BlueprintBase.h"

class ARSCharacterBase;
class UPlayerAIBaseComponent;
class UPlayerScriptComponent;

void UBTTask_RSPlayerMoveTo_BlueprintBase::TickMoveCPP() {
}

void UBTTask_RSPlayerMoveTo_BlueprintBase::StopAIMoveToCPP(bool bRechargeResetAIMoveTimer) {
}


UPlayerScriptComponent* UBTTask_RSPlayerMoveTo_BlueprintBase::GetOwnerPlayerScript() const {
    return NULL;
}

UPlayerAIBaseComponent* UBTTask_RSPlayerMoveTo_BlueprintBase::GetOwnerPlayerAI() const {
    return NULL;
}

ARSCharacterBase* UBTTask_RSPlayerMoveTo_BlueprintBase::GetOwnerCharacter() const {
    return NULL;
}

void UBTTask_RSPlayerMoveTo_BlueprintBase::ForceWarpCPP() {
}

void UBTTask_RSPlayerMoveTo_BlueprintBase::ExitCPP() {
}


void UBTTask_RSPlayerMoveTo_BlueprintBase::CheckWallCPP() {
}

bool UBTTask_RSPlayerMoveTo_BlueprintBase::CheckStickMoveEndCPP() const {
    return false;
}

bool UBTTask_RSPlayerMoveTo_BlueprintBase::CheckPlayerIsRun(ARSCharacterBase* Character) const {
    return false;
}

bool UBTTask_RSPlayerMoveTo_BlueprintBase::CheckMoveDistance_IsEndCPP() {
    return false;
}

void UBTTask_RSPlayerMoveTo_BlueprintBase::CheckMovedDistance_TickCPP(float DeltaSeconds) {
}

void UBTTask_RSPlayerMoveTo_BlueprintBase::CheckMovedDistance_InitializeCPP() {
}

bool UBTTask_RSPlayerMoveTo_BlueprintBase::CheckDistanceXY_Z_CPP(FVector Location1, FVector Location2, float DistanceXY, float DistanceZ) const {
    return false;
}

bool UBTTask_RSPlayerMoveTo_BlueprintBase::CheckDistanceXY_CPP(FVector Location1, FVector Location2, float DistanceXY) const {
    return false;
}

bool UBTTask_RSPlayerMoveTo_BlueprintBase::CheckAvoidWallOrWarpCPP() {
    return false;
}

bool UBTTask_RSPlayerMoveTo_BlueprintBase::CheckArrivedGoalCPP() const {
    return false;
}

UBTTask_RSPlayerMoveTo_BlueprintBase::UBTTask_RSPlayerMoveTo_BlueprintBase() {
    this->OwnerCharacter = NULL;
    this->OwnerPlayerScript = NULL;
    this->OwnerPlayerAIComponent = NULL;
    this->AcceptionRadius = 0.00f;
    this->AcceptionHeight = 200.00f;
    this->bExit = false;
    this->bInputMoveMode = false;
    this->Step = 0;
    this->bJumpCheck = false;
    this->bNeedsJumpCheckCurrent = false;
    this->JumpCheckMoveSpeedRatioThreshold = 0.50f;
    this->CheckJumpInterval = 0.25f;
    this->DetourInputDuration = 1.20f;
    this->DetourInputBeginYawAngle = 115.00f;
    this->DetourInputDurationShort = 0.65f;
    this->DetourInputBeginYawAngleShort = 115.00f;
    this->DetourInputDurationRateWalk = 2.50f;
    this->DetourInputDurationRateRun = 1.00f;
    this->DetourInputDurationRateSprint = 0.30f;
    this->DetourInputRotateDirection = 1.00f;
    this->DetourInputBeginYawAngleCurrent = 0.00f;
    this->WallTypeCPP = EPlayerAIMoveWallCPP::None;
    this->bWallBackCheck = false;
    this->ForceWallBackNotMovedTime = 0.50f;
    this->bWallDetourCheck = true;
    this->bAIMoving = false;
    this->bEnemyCheck = false;
    this->bWarpCheck = true;
    this->MovedDistanceCheckTimer = 0.00f;
    this->MovedDistanceCheckInterval = 0.25f;
    this->MovedDistanceThreshold = 20.00f;
    this->NotMovedElapsedTime = 0.00f;
    this->ForceWarpThresholdTime = 5.00f;
    this->bForceWarpRequest = false;
    this->bChangeWalkOrRun = false;
    this->WalkingDistanceMax = 400.00f;
    this->RunningDistanceMin = 300.00f;
    this->bWalking = false;
}

