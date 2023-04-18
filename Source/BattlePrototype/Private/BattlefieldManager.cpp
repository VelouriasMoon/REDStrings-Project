#include "BattlefieldManager.h"
#include "Templates/SubclassOf.h"

class AActor;
class AMakeEventActor;
class ARSCharacterBase;
class USplineComponent;

void ABattlefieldManager::UpdateAtStartArea() {
}

bool ABattlefieldManager::StartWipeoutBattlefield(int32 BFGroupID) {
    return false;
}

bool ABattlefieldManager::StartEventInBattleField(TSubclassOf<AMakeEventActor> NewMakeEventActorClass) {
    return false;
}

bool ABattlefieldManager::StartEventBattlefield(int32 BFGroupID, int32 SubGroupID) {
    return false;
}

bool ABattlefieldManager::StartBattlefield(EBattlefieldEventType EventType, int32 BFGroupID, int32 SubGroupID, TArray<FBattlefieldTutorialInfo> AdditionalTutorialInfo, TSubclassOf<AMakeEventActor> NewMakeEventActorClass, int32 TutorialGroupID, int32 TutorialSubGroupID, float FenceBattleRate, const FString& SeedString, bool IsOnceBattle) {
    return false;
}

bool ABattlefieldManager::SetFenceEnableForce(int32 fenceID, bool Enable) {
    return false;
}

bool ABattlefieldManager::SetFenceEnable(int32 fenceID, bool Enable) {
    return false;
}

void ABattlefieldManager::SetEnableEnemyOutField_Implementation(bool Enable, int32 BFGroupID) {
}

void ABattlefieldManager::SetCurrentLocationAndArea(int32 LocationId, int32 areaId) {
}

bool ABattlefieldManager::SetCurrentBattlefieldInfos(TMap<FString, FBattlefieldInfo> Infos) {
    return false;
}

bool ABattlefieldManager::SetBattlefieldInfo(int32 BFGroupID, FBattlefieldInfo BFInfo) {
    return false;
}

bool ABattlefieldManager::ResetFenceRandomSeed_Implementation() {
    return false;
}

bool ABattlefieldManager::RepopBattlefieldInfos(int32 LocationId, int32 areaId, const FString& SeedString) {
    return false;
}

bool ABattlefieldManager::RepopBattlefieldEnemy(int32 BFGroupID) {
    return false;
}

bool ABattlefieldManager::OverwriteTmpBfInfo(int32 GroupID, const FString& TriggerName) {
    return false;
}

bool ABattlefieldManager::OnSave_SaveData_Implementation() {
    return false;
}

bool ABattlefieldManager::OnLoad_SaveData_Implementation() {
    return false;
}

bool ABattlefieldManager::IsStartBattlefield(int32 BFGroupID) {
    return false;
}

bool ABattlefieldManager::IsPlayerInFence(int32 GroupID) {
    return false;
}

bool ABattlefieldManager::IsInSplineLoopDetail(FVector Pos, USplineComponent* Spline) {
    return false;
}

bool ABattlefieldManager::IsInSplineLoop(FVector Pos, USplineComponent* Spline) {
    return false;
}

bool ABattlefieldManager::IsInFence(FVector Pos, int32 GroupID) {
    return false;
}

bool ABattlefieldManager::IsFenceEnabled_Implementation(int32 GroupID) {
    return false;
}

bool ABattlefieldManager::IsExistBattlefieldEnemiesStrictly_Implementation(int32 BFGroupID, int32 SubGroupID) {
    return false;
}

bool ABattlefieldManager::IsExistBattlefieldEnemies_Implementation(int32 BFGroupID, int32 SubGroupID, int32& FirstSubGroup) {
    return false;
}

bool ABattlefieldManager::IsCharacterInCurrentBattleField(ARSCharacterBase* InCharacter) const {
    return false;
}

bool ABattlefieldManager::IsCharacterInBattleField(const FBattlefieldInfo& InInfo, ARSCharacterBase* InCharacter) const {
    return false;
}

bool ABattlefieldManager::IsBattlefieldWillAppear(int32 GroupID, float FenceBattleRate, const FString& SeedString, const FString& TargetName) {
    return false;
}

bool ABattlefieldManager::IsAnyFenceEnabled_Implementation() {
    return false;
}

bool ABattlefieldManager::InitializeAtStartBattlefield_Implementation(FBattlefieldInfo currentBFInfo) {
    return false;
}

void ABattlefieldManager::InitializeAtStartArea() {
}

bool ABattlefieldManager::HaveDestroyedBattlefield(int32 BFGroupID, const FString& TargetName) {
    return false;
}

FBattlefieldInfo ABattlefieldManager::GetCurrentBattlefieldInfo(bool& Exist) const {
    return FBattlefieldInfo{};
}

void ABattlefieldManager::GetBfFenceStatus(int32 GroupID, bool& Exist, bool& IsVisible) {
}

TArray<AActor*> ABattlefieldManager::GetBfFenceAll(int32 GroupID) {
    return TArray<AActor*>();
}

AActor* ABattlefieldManager::GetBfFence(int32 GroupID) {
    return NULL;
}

void ABattlefieldManager::GetBattlefieldInfo(int32 BFGroupID, FBattlefieldInfo& BFInfo, bool& IsExist) {
}

void ABattlefieldManager::FinalizeAtStartArea() {
}

bool ABattlefieldManager::EndEventBattlefield(int32 BFGroupID) {
    return false;
}

bool ABattlefieldManager::EndBattlefieldForce(int32 BFGroupID) {
    return false;
}

bool ABattlefieldManager::EndBattlefield(int32 BFGroupID) {
    return false;
}

bool ABattlefieldManager::EndAllBattlefieldForce() {
    return false;
}

bool ABattlefieldManager::BroadcastBattlefieldRushEnd(int32 GroupID, int32 SubGroupID) {
    return false;
}

ABattlefieldManager::ABattlefieldManager() {
    this->FenceLotterySeed = 0;
    this->IsActiveEvent = false;
    this->MakeEventActorClass = NULL;
    this->MakeEventActor = NULL;
}

