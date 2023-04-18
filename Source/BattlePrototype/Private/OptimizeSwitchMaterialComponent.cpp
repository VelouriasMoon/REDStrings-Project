#include "OptimizeSwitchMaterialComponent.h"

class UMeshComponent;

void UOptimizeSwitchMaterialComponent::SetSwitchActivate(bool Active) {
}

void UOptimizeSwitchMaterialComponent::SetMesh(UMeshComponent* InTargetMesh) {
}

void UOptimizeSwitchMaterialComponent::RevertBaseMaterial() {
}

void UOptimizeSwitchMaterialComponent::Reset() {
}

bool UOptimizeSwitchMaterialComponent::IsSwitchActivate() const {
    return false;
}

int32 UOptimizeSwitchMaterialComponent::CheckScalarParameter(FName ParameterName, float ParameterValue) {
    return 0;
}

int32 UOptimizeSwitchMaterialComponent::CheckScalarArrayParameter(const TArray<FName>& ParameterName, const TArray<float>& ParameterValue) {
    return 0;
}

int32 UOptimizeSwitchMaterialComponent::CheckNowParameters() {
    return 0;
}

void UOptimizeSwitchMaterialComponent::ChangeMeshLayer(UMeshComponent* InTargetMesh, int32 MeshLayerID) {
}

int32 UOptimizeSwitchMaterialComponent::AddSwitchSetting2(const TArray<FOptimizeMaterialMultiCondition>& MultiConditions, const TMap<FString, FOptimizeMaterialOverrideSetting>& SlotMaterials, const FOptimizeMaterialOverrideSetting& OtherSlotMaterial) {
    return 0;
}

int32 UOptimizeSwitchMaterialComponent::AddMesh(UMeshComponent* InTargetMesh) {
    return 0;
}

UOptimizeSwitchMaterialComponent::UOptimizeSwitchMaterialComponent() {
    this->bIsRuntime = false;
}

