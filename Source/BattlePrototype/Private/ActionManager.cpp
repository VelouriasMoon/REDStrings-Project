#include "ActionManager.h"

class AActor;

void AActionManager::UnregistAction2(int32 Handle) {
}

void AActionManager::UnregistAction(int32 Handle) {
}

void AActionManager::SetEnableActionCheck(bool bEnable) {
}

void AActionManager::SetBattleFlag(bool bBattle) {
}

int32 AActionManager::RegisterAction2(AActor* Actor) {
    return 0;
}

int32 AActionManager::RegisterAction(AActor* Actor) {
    return 0;
}

bool AActionManager::IsExistEnableAction2() const {
    return false;
}

bool AActionManager::IsExistEnableAction() const {
    return false;
}

void AActionManager::ClearActionAll() {
}

AActionManager::AActionManager() {
    this->VisibilityCheckDistance = 100.00f;
    this->IsDispAreaNextUI = false;
    this->IsDebug = false;
}

