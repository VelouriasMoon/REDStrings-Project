#include "PlayerAsyncScriptComponent.h"

bool UPlayerAsyncScriptComponent::SyncResult() {
    return false;
}

void UPlayerAsyncScriptComponent::SetEnableAsync(bool bAsync) {
}

void UPlayerAsyncScriptComponent::SetCheckParameter(const FPlayerAsyncParameter& InParameter) {
}

bool UPlayerAsyncScriptComponent::IsFallAbleGround() {
    return false;
}

FPlayerCollisionCheckResult UPlayerAsyncScriptComponent::GetAsyncResult(EPlayerCollisionCheckType Type) {
    return FPlayerCollisionCheckResult{};
}

FVector UPlayerAsyncScriptComponent::GetAssyncResult_PlayerAICheckGoalLocation() const {
    return FVector{};
}

void UPlayerAsyncScriptComponent::DebugDispResult(TArray<EPlayerCollisionCheckType> DispList) {
}

void UPlayerAsyncScriptComponent::ClearAsyncResult() {
}

UPlayerAsyncScriptComponent::UPlayerAsyncScriptComponent() {
    this->CheckMoveWallHeight = 300.00f;
    this->CheckMoveWall_CheckForwardLength = 180.00f;
    this->CheckMoveWall_CheckBackLength = 100.00f;
    this->CheckMoveWall_CheckSideLengthShort = 150.00f;
    this->CheckMoveWall_CheckSideLength = 275.00f;
}

