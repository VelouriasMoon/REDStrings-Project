#include "NpcManager.h"

class ANpcBase;
class ANpcShopBase;
class ANpcTownPeopleBase;
class ASavePointBase;
class UObject;
class URSGameInstance;

void UNpcManager::UnregisterShopNpcAll() {
}

void UNpcManager::UnregisterShopNpc(ANpcShopBase* ShopNpc) {
}

void UNpcManager::UnregisterSavePointAll() {
}

void UNpcManager::UnregisterSavePoint(ASavePointBase* SavePoint) {
}

void UNpcManager::UnregisterNpcTownAll() {
}

void UNpcManager::UnregisterNpcTown(ANpcTownPeopleBase* NPC) {
}

void UNpcManager::UnregisterNpcAll() {
}

void UNpcManager::UnregisterNpc(ANpcBase* NPC) {
}

void UNpcManager::SetVisibleAndTickNpcTopwnAll(bool bVisible) {
}

void UNpcManager::RegisterShopNpc(ANpcShopBase* ShopNpc) {
}

void UNpcManager::RegisterSavePoint(ASavePointBase* SavePoint) {
}

void UNpcManager::RegisterNpcTown(ANpcTownPeopleBase* NPC) {
}

void UNpcManager::RegisterNpc(ANpcBase* NPC) {
}

void UNpcManager::OnBattleModeChange(URSGameInstance* GameInstance, const bool bBattle) {
}

void UNpcManager::Initialize(const UObject* WorldContextObject) {
}

UNpcManager::UNpcManager() {
    this->TownPeopleTickManager = NULL;
}

