#include "LC21MapGimmickManager.h"

bool ALC21MapGimmickManager::StartEventLaserSetWall_Implementation() {
    return false;
}

bool ALC21MapGimmickManager::StartEventLaserFar_Implementation() {
    return false;
}

bool ALC21MapGimmickManager::StartEventLaserCenter_Implementation() {
    return false;
}

bool ALC21MapGimmickManager::StartEventLaser_Implementation() {
    return false;
}

bool ALC21MapGimmickManager::RemoveAllPart_Implementation() {
    return false;
}

int32 ALC21MapGimmickManager::GetMostRightSideFloorNo(float Offset, int32 StartId, int32 EndId, bool CheckIsFall) {
    return 0;
}

void ALC21MapGimmickManager::GetAllFloorObjectsAndSort() {
}

bool ALC21MapGimmickManager::FindAllObjectsAndInitialize_Implementation() {
    return false;
}

bool ALC21MapGimmickManager::FallLeftFloor_Implementation(float OffsetY) {
    return false;
}

void ALC21MapGimmickManager::ClearObjectInfoList() {
}

bool ALC21MapGimmickManager::ChangePhase_Implementation(int32 PhaseNo) {
    return false;
}

ALC21MapGimmickManager::ALC21MapGimmickManager() {
    this->BossFloorActorClass = NULL;
    this->CurrentGimmickNo = 0;
    this->MostLeftFloorNo = 0;
}

