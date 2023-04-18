#include "GimmickManager.h"

class AGimmickActionBase;
class AGimmickObjectBase;
class UObject;
class URSGameInstance;

void UGimmickManager::UnregisterGimmickAll() {
}

void UGimmickManager::UnregisterGimmickActionAll() {
}

void UGimmickManager::UnregisterGimmickAction(AGimmickActionBase* GimmickAction) {
}

void UGimmickManager::UnregisterGimmick(AGimmickObjectBase* gimmick) {
}

void UGimmickManager::RegisterGimmickAction(AGimmickActionBase* GimmickAction) {
}

void UGimmickManager::RegisterGimmick(AGimmickObjectBase* gimmick) {
}

void UGimmickManager::OnBattleModeChange(URSGameInstance* GameInstance, const bool bBattle) {
}

void UGimmickManager::Initialize(const UObject* WorldContextObject) {
}

UGimmickManager::UGimmickManager() {
}

