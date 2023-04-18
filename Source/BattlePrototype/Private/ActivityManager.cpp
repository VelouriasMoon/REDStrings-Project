#include "ActivityManager.h"

void UActivityManager::WaitUntilComplete() {
}

void UActivityManager::UpdateMainEpisodeActivity(EPlayerID playerId, int32 beforeProgressID, int32 nextProgressID) {
}

void UActivityManager::UpdateBondsEpisodeActivity(EPlayerID playerId, EPlayerID TargetID, int32 ProgressId) {
}

void UActivityManager::Update() {
}

void UActivityManager::StartNewGame(EPlayerID playerId, int32 ProgressId) {
}

void UActivityManager::StartMainEpisodeActivity(EPlayerID playerId, int32 ProgressId) {
}

void UActivityManager::StartAdditionalEpisodeActivity(FName bondsID) {
}

void UActivityManager::SetDisableFlag(EGameActivityDisableFlag Type, bool isDisable) {
}

void UActivityManager::SetDebugDrawFlag(bool IsDraw, EDebugGameActivityDisplayFlag Type) {
}

void UActivityManager::ResumeMainEpisodeActivity(EPlayerID playerId, int32 ProgressId) {
}

void UActivityManager::ResumeBondsEpisodeActivity(EPlayerID playerId, EPlayerID TargetID, int32 ProgressId) {
}

void UActivityManager::ResumeAdditionalEpisodeActivity(FName bondsID) {
}

bool UActivityManager::IsExsistDebugDrawFlag(EDebugGameActivityDisplayFlag Type) const {
    return false;
}

bool UActivityManager::IsExistBondsEpisodeActivity(EPlayerID playerId, int32 ProgressId) const {
    return false;
}

bool UActivityManager::IsExistAdditionalEpisodeActivity(FName bondsID) const {
    return false;
}

bool UActivityManager::IsDisableFlag(EGameActivityDisableFlag Type) const {
    return false;
}

EPlayerID UActivityManager::GetMainCharacter(int32 selectedScenario) const {
    return EPlayerID::Invalid;
}

void UActivityManager::EndMainEpisodeActivity(EPlayerID playerId, int32 ProgressId, EGameActivityOutcome Outcome) {
}

void UActivityManager::EndBondsEpisodeActivity(EPlayerID playerId, EPlayerID TargetID, int32 ProgressId, EGameActivityOutcome Outcome) {
}

void UActivityManager::EndAdditionalEpisodeActivity(FName bondsID, EGameActivityOutcome Outcome) {
}

UActivityManager::UActivityManager() {
    this->progressIDTable_Yuito = NULL;
    this->progressIDTable_Kasane = NULL;
}

