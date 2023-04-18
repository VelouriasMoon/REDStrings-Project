#include "MapGimmickManager.h"

class AActor;
class AMapGimmickObject;

void AMapGimmickManager::UnregisterMapGimmick(AActor* Actor) {
}

void AMapGimmickManager::SetLiftFloor(ELiftFloorInfoId ID, int32 floor) {
}

bool AMapGimmickManager::RequestToMapGimmick(EMapGimmickStateRequest Request, AMapGimmickObject* map_gimmick) {
    return false;
}

void AMapGimmickManager::RegisterMapGimmick(AActor* Actor) {
}

void AMapGimmickManager::OnEndOverlapMovingRoad(AActor* Actor, AActor* RoadActor) {
}

void AMapGimmickManager::OnBeginOverlapMovingRoad(AActor* Actor, AActor* RoadActor) {
}

bool AMapGimmickManager::IsActivatedMapGimmick(AMapGimmickObject* map_gimmick) const {
    return false;
}

void AMapGimmickManager::InitializeAtAreaStart_Implementation() {
}

void AMapGimmickManager::InitializeAreaData() {
}

int32 AMapGimmickManager::GetMapGimmickUseTime(EMapGimmickType Type) {
    return 0;
}

int32 AMapGimmickManager::GetLiftFloor(ELiftFloorInfoId ID) {
    return 0;
}

bool AMapGimmickManager::DeactivateMapGimmick(AMapGimmickObject* map_gimmick) {
    return false;
}

bool AMapGimmickManager::CanChargeMapGimmick(AMapGimmickObject* map_gimmick) {
    return false;
}

bool AMapGimmickManager::CallOnExecMapGimmickEvent(AMapGimmickObject* map_gimmick) {
    return false;
}

bool AMapGimmickManager::CallOnEndOverlapMapGimmickAreaEvent(AMapGimmickObject* map_gimmick) {
    return false;
}

bool AMapGimmickManager::CallOnChangeReuseStartMapGimmickEvent(AMapGimmickObject* map_gimmick) {
    return false;
}

bool AMapGimmickManager::CallOnChangeFinishedMapGimmickEvent(AMapGimmickObject* map_gimmick) {
    return false;
}

bool AMapGimmickManager::CallOnBeginOverlapMapGimmickAreaEvent(AMapGimmickObject* map_gimmick) {
    return false;
}

bool AMapGimmickManager::AddMapGimmickUseTime_Implementation(AMapGimmickObject* gimmick) {
    return false;
}

bool AMapGimmickManager::ActivateMapGimmick(AMapGimmickObject* map_gimmick) {
    return false;
}

AMapGimmickManager::AMapGimmickManager() {
    this->LiftFloorList.AddDefaulted(2);
}

