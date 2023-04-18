#include "UIMain3DManager.h"

class UDataTable;
class UMeshComponent;

void AUIMain3DManager::ResetTextureStreamingWaitLimit() {
}

void AUIMain3DManager::LoadTextureRelationEquip(UMeshComponent* MeshComp) {
}

bool AUIMain3DManager::IsTexturesThatUsedAtMeshLoaded(UMeshComponent* MeshComp) {
    return false;
}

bool AUIMain3DManager::GetSceneSetting(EUIMain3DCharacterSceneID SceneID, FUIMain3DCharacterSceneSetting& Setting) {
    return false;
}

bool AUIMain3DManager::GetPlayerSetting(int32 PlayerUniqueID, FUIMain3DCharacterPlayerSetting& Setting) {
    return false;
}

bool AUIMain3DManager::GetEquipSetting(UDataTable* DataTable, EUIMain3DEquipCameraID CameraID, FUIMain3DCharacterEquipSetting& Setting) {
    return false;
}

bool AUIMain3DManager::GetBGCameraSetting(FUIMain3DBGCameraSetting& Setting) {
    return false;
}

AUIMain3DManager::AUIMain3DManager() {
}

