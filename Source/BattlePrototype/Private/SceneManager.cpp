#include "SceneManager.h"

class AJumpAreaBase;

void ASceneManager::ToggleScenarioFlag(FName RowName) {
}

void ASceneManager::SetIsSaveDataLoadFlow_ArrangeItemManager(const bool Flag) {
}

void ASceneManager::SetIsAreaChangeRetrySaveFlag(const bool Flag) {
}



void ASceneManager::RemoveCurrentJumpArea(AJumpAreaBase* Actor) {
}

void ASceneManager::OnScenarioFlag(FName RowName) {
}

bool ASceneManager::OnEndGameMenu_Implementation() {
    return false;
}

void ASceneManager::OffScenarioFlag(FName RowName) {
}

bool ASceneManager::IsWaitedForWaitUnloadDynamicLevels() {
    return false;
}

bool ASceneManager::IsSaveDataLoadFlow_ArrangeItemManager() {
    return false;
}

bool ASceneManager::IsAreaChangeRetrySaveFlag() {
    return false;
}

EMainScenarioType ASceneManager::GetMainScenarioType() {
    return EMainScenarioType::Male;
}

FName ASceneManager::GetCurrentLocationName_Implementation() {
    return NAME_None;
}



FName ASceneManager::GetBeforeLocationName_Implementation() {
    return NAME_None;
}


void ASceneManager::FlushPhysicsSimulation() {
}

void ASceneManager::ClearCurrentJumpArea() {
}

bool ASceneManager::CheckScenarioFlag(FName RowName) {
    return false;
}

void ASceneManager::CallPortalFunction(int32 LocationId, int32 areaId, int32 PortalID, int32& NextLocationID, int32& NextAreaID, FName& PortalName) {
}

void ASceneManager::CallOnChangeAreaLoadStatus(EChangeAreaStatus Status, bool IsChangeLocation) {
}


void ASceneManager::AddCurrentJumpArea(AJumpAreaBase* Actor) {
}

ASceneManager::ASceneManager() {
    this->IsAreaChanging = false;
    this->IsCheckTextureLoadAtStartScene = false;
    this->TextureLoadPercentAtStartScene = 80;
    this->m_flags.AddDefaulted(125);
    this->FunctionLibrary = NULL;
    this->m_FunctionLibraryActor = NULL;
    this->m_isSaveDataLoadFlow_ArrangeItemManager = false;
    this->m_isAreaChangeRetrySaveFlag = false;
    this->m_WaitUnloadDynamicLevels_WaitCaount = 0;
    this->m_WaitUnloadDynamicLevels_IsDoFlushRenderingCommands = false;
}

