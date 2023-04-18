#include "DropItemManager.h"

class ADropItem;
class UParticleSystem;

void ADropItemManager::SetActiveDropVisibility(bool Visibility) {
}

void ADropItemManager::RegistStockDataItemData(const FDataItemSpawnState& Data) {
}

void ADropItemManager::RegistAllDataDropDatas(ADropItem* itemAdress) {
}

void ADropItemManager::RegistAllCoreDropDatas(ADropItem* itemAdress) {
}

void ADropItemManager::RedropLandingItem(int32 ItemIndex) {
}

void ADropItemManager::DoNotActiveDataDrop(ADropItem* itemAdress) {
}

void ADropItemManager::DoNotActiveCoreDrop(ADropItem* itemAdress) {
}

void ADropItemManager::DoActiveStockDataDrop(FVector Location) {
}

void ADropItemManager::DoActiveDataDrop(FVector Location, FName ItemId, int32 itemNum, bool bAutoTaken, UParticleSystem* dropParticle, UParticleSystem* aquParticle, UParticleSystem* getParticle, FName charID) {
}

void ADropItemManager::DoActiveCoreDrop(FVector Location, FName ItemId, int32 itemNum, bool bAutoTaken, UParticleSystem* dropParticle, UParticleSystem* aquParticle, UParticleSystem* getParticle) {
}

void ADropItemManager::ControlDataDropActivateAtArea(const FString& nextLevelName) {
}

void ADropItemManager::ChangeAllDropStateToDrop(float firstDelay) {
}

void ADropItemManager::ChangeActiveAllDataDrops() {
}

void ADropItemManager::ChangeActiveAllCoreDrops() {
}

void ADropItemManager::CalledAtStartBrainField() {
}

void ADropItemManager::CalledAtEndBrainField() {
}

ADropItemManager::ADropItemManager() {
    this->isItemGetDebugOn = false;
}

