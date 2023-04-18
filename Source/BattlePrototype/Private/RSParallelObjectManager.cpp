#include "RSParallelObjectManager.h"
#include "RSParallelObjectManageComponent.h"

class UObject;

void ARSParallelObjectManager::UnregisterObject(UObject* Object) {
}

void ARSParallelObjectManager::SetSingleThread(bool bSet) {
}

bool ARSParallelObjectManager::RegisterObject(UObject* Object) {
    return false;
}

ARSParallelObjectManager::ARSParallelObjectManager() {
    this->_AfterPrePhysicsManageComponent = CreateDefaultSubobject<URSParallelObjectManageComponent>(TEXT("AfterPrePhysicsManageComponent"));
    this->_AfterDuringPhysicsManageComponent = CreateDefaultSubobject<URSParallelObjectManageComponent>(TEXT("AfterDuringPhysicsManageComponent"));
}

