#include "StageParameterSettingVolumeManager.h"

class AActor;
class AStageEffectParameterSettingVolumeManager;
class UMaterialParameterCollection;

void AStageParameterSettingVolumeManager::SetUseReferenceLocationMode(bool Use) {
}

void AStageParameterSettingVolumeManager::SetupMPC(UMaterialParameterCollection* Collection, const FStageParameterSettings& Settings) {
}


void AStageParameterSettingVolumeManager::SetDebugDisableCache(bool DisableCache) {
}

void AStageParameterSettingVolumeManager::RemoveAppendActor(AActor* Actor) {
}

void AStageParameterSettingVolumeManager::RecalcSceneLightVector() {
}

AStageEffectParameterSettingVolumeManager* AStageParameterSettingVolumeManager::GetEffectManager() {
    return NULL;
}

void AStageParameterSettingVolumeManager::ForceUpdateActor(AActor* Actor, const FVector& Location) {
}

void AStageParameterSettingVolumeManager::ForceAllUpdateOption(bool bUpdatePlayer, bool bUpdateAppendActor) {
}

void AStageParameterSettingVolumeManager::ForceAllUpdate() {
}

void AStageParameterSettingVolumeManager::ConvertSettingToParameters(const FStageParameterSettings& Settings, TArray<FName>& ParamScalarNames, TArray<float>& ParamScalars, TArray<FName>& ParamVectorNames, TArray<FLinearColor>& ParamVectors) {
}

void AStageParameterSettingVolumeManager::ClearParameter(AActor* Actor) {
}

FStageParameterSettings AStageParameterSettingVolumeManager::CalcParameterEffect(const FVector& Location) {
    return FStageParameterSettings{};
}

FStageParameterSettings AStageParameterSettingVolumeManager::CalcParameter(const FVector& Location) {
    return FStageParameterSettings{};
}

void AStageParameterSettingVolumeManager::AddAppendActor(AActor* Actor) {
}

AStageParameterSettingVolumeManager::AStageParameterSettingVolumeManager() {
    this->EffectManager = NULL;
}

