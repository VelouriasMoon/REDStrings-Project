#include "DynamicMaterialControllerComponent.h"

class AActor;
class UDynamicMaterialControllerComponent;
class UTexture;

void UDynamicMaterialControllerComponent::StartFadeScalarParameter(FName ParameterName, bool bToOne, float fadeSec) {
}

void UDynamicMaterialControllerComponent::SetVectorParameterValue(FName ParameterName, FLinearColor Value) {
}

void UDynamicMaterialControllerComponent::SetupMeshMaterials() {
}

void UDynamicMaterialControllerComponent::SetTextureParameterValue(FName ParameterName, UTexture* Value) {
}

void UDynamicMaterialControllerComponent::SetScalarParameterValue(FName ParameterName, float Value) {
}

FLinearColor UDynamicMaterialControllerComponent::GetVectorParameterValue(FName ParameterName) {
    return FLinearColor{};
}

float UDynamicMaterialControllerComponent::GetScalarParameterValue(FName ParameterName) {
    return 0.0f;
}

UDynamicMaterialControllerComponent* UDynamicMaterialControllerComponent::GetDynamicMaterialControllerComponent(AActor* Actor) {
    return NULL;
}

UDynamicMaterialControllerComponent::UDynamicMaterialControllerComponent() {
}

