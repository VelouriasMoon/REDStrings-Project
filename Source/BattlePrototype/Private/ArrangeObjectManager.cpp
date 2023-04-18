#include "ArrangeObjectManager.h"

class AArrangeObject;
class UObject;

void UArrangeObjectManager::UnregisterObjectAll() {
}

void UArrangeObjectManager::UnregisterObject(AArrangeObject* ArrangeObject) {
}

void UArrangeObjectManager::SetVisible(const bool IsVisible, const int32 LevelID, const int32 GroupID) {
}

void UArrangeObjectManager::SetEnableCollision(const bool Flag, const bool bHiddenCheck) {
}

void UArrangeObjectManager::RestoreObjectInfo(const int32 LevelID, const int32 GroupID) {
}

void UArrangeObjectManager::RestoreFirstObjectInfo(const int32 LevelID, const int32 GroupID) {
}

void UArrangeObjectManager::RegisterObject(AArrangeObject* ArrangeObject) {
}

void UArrangeObjectManager::Initialize(const UObject* WorldContextObject) {
}

AArrangeObject* UArrangeObjectManager::GetArrangeObject(const int32 ID) {
    return NULL;
}

void UArrangeObjectManager::BackupObjectInfo(const int32 LevelID, const int32 GroupID) {
}

void UArrangeObjectManager::BackupFirstObjectInfo(const int32 LevelID, const int32 GroupID) {
}

UArrangeObjectManager::UArrangeObjectManager() {
}

