#include "AchievementManager.h"

void UAchievementManager::WatchOpeningMovie() {
}

void UAchievementManager::UseSas() {
}

void UAchievementManager::UsePKObject() {
}

void UAchievementManager::UseDrive() {
}

void UAchievementManager::UseCombinationVision(EPlayerID playerId, EPlayerID visionCharID) {
}

void UAchievementManager::UseBrainCrash() {
}

void UAchievementManager::Use4CVinCombo() {
}

//void UAchievementManager::TradeItem(FName ItemId) {
//}

void UAchievementManager::TimeoverInBF() {
}

void UAchievementManager::SupportedInBrainField() {
}

void UAchievementManager::SuohIncident(EPlayerID playerId) {
}

void UAchievementManager::StartStory(EPlayerID playerId) {
}

void UAchievementManager::StartPsychicObjectBus() {
}

void UAchievementManager::SasHologram() {
}

void UAchievementManager::ResuscitateFollow() {
}

void UAchievementManager::Resuscitated() {
}

void UAchievementManager::RegisterOpenAchievement(const EAchievementsType Type) {
}

void UAchievementManager::QueryAchievements() {
}

void UAchievementManager::Protected() {
}

void UAchievementManager::Present(EPlayerID playerId, EPlayerID TargetID, FName ItemId) {
}

void UAchievementManager::PlayVoice(const FString& CueName) {
}

bool UAchievementManager::OpenAchievementCheckProgress_EnemyKill() {
    return false;
}

bool UAchievementManager::OpenAchievement(const EAchievementsType Type) {
    return false;
}

void UAchievementManager::MaMoRu() {
}

void UAchievementManager::KillsInBrainField(int32 Num) {
}

void UAchievementManager::KillEnemys(int32 Num) {
}

void UAchievementManager::KillEnemyDataForAchievement(FName enemyName, FHCHitResult hcResult, EPsychicObjectUniqueType poType, bool bBrainCrashMulti) {
}

void UAchievementManager::Kill_UseBus(int32 Num) {
}

void UAchievementManager::JustDodge() {
}

bool UAchievementManager::IsOpenAchievement(const EAchievementsType Type) {
    return false;
}

void UAchievementManager::GetItem(FName ItemId) {
}

FString UAchievementManager::GetDebugString(int32 idx) {
    return TEXT("");
}

void UAchievementManager::GatherAllMember() {
}

void UAchievementManager::FinishLastBattle() {
}

void UAchievementManager::EquipItems(EPlayerID playerId, FName ItemId) {
}

void UAchievementManager::EndStory(EPlayerID playerId) {
}

void UAchievementManager::EndPsychicObjectBus() {
}

void UAchievementManager::DriveMaxBonus() {
}

void UAchievementManager::CompleteEnemyLibrary() {
}

void UAchievementManager::ClearQuest(FName questId) {
}

void UAchievementManager::ClearBondsEp(EPlayerID playerId, EPlayerID TargetID, int32 episodeNo) {
}

void UAchievementManager::CheckCompleteSkill(EPlayerID playerId) {
}

void UAchievementManager::CheckAlreadyAchievedAtTrial2ConvSaveData() {
}

void UAchievementManager::CheckAlreadyAchievedAtTrial2(const bool isTrial2SaveData) {
}

void UAchievementManager::CheckAlreadyAchieved() {
}

void UAchievementManager::ChaseAttack() {
}

void UAchievementManager::BrainCrashKillsSameTime(int32 Num) {
}

void UAchievementManager::BondsLvOver6(EPlayerID playerId, EPlayerID TargetID) {
}

void UAchievementManager::AddMoney(int32 Num) {
}

void UAchievementManager::AcquireSkill(EPlayerID playerId, EPlayerSkill skill) {
}

UAchievementManager::UAchievementManager() {
    this->_gameInstance = NULL;
}

