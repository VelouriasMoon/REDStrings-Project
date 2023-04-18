#include "MaterialAccessorComponent.h"

class UMeshComponent;
class UTexture;


void UMaterialAccessorComponent::SetVisibleMaterialAllLODs(bool Show, int32 SlotHandle) {
}

void UMaterialAccessorComponent::SetVectorParameterByVariable(FMACVariableVector& Variable, EMaterialAccessorSetupID SetupID) {
}

void UMaterialAccessorComponent::SetVectorParameterByRegister(const TArray<FVector>& Variables, const TArray<EMaterialAccessorSetupID>& SetupIDs) {
}

void UMaterialAccessorComponent::SetVectorParameter(EMaterialAccessorSetupID SetupID, FLinearColor Value, FLinearColor DefaultValue, FName ParameterName, int32 SlotHandle) {
}

int32 UMaterialAccessorComponent::SetupMaterialBySlotName(const FString& SlotName) {
    return 0;
}

void UMaterialAccessorComponent::SetTextureParameter(UTexture* Texture, FName ParameterName, int32 SlotHandle) {
}

void UMaterialAccessorComponent::SetScalarParameterByVariable(FMACVariableFloat& Variable, EMaterialAccessorSetupID SetupID) {
}

void UMaterialAccessorComponent::SetScalarParameterByRegister(const TArray<float>& Variables, const TArray<EMaterialAccessorSetupID>& SetupIDs) {
}

void UMaterialAccessorComponent::SetScalarParameter(EMaterialAccessorSetupID SetupID, float Value, float DefaultValue, FName ParameterName, int32 SlotHandle) {
}

void UMaterialAccessorComponent::SetExcludeRestoreOverrideParameters(TArray<FName> ParameterNames) {
}

void UMaterialAccessorComponent::SetAppendMesh_Implementation(const TArray<UMeshComponent*>& InAppedMeshes) {
}


void UMaterialAccessorComponent::Reset() {
}

void UMaterialAccessorComponent::RegisterVectorParameters(const TArray<FMACVariableVector>& Variables) {
}

void UMaterialAccessorComponent::RegisterScalarParameters(const TArray<FMACVariableFloat>& Variables) {
}

void UMaterialAccessorComponent::ManualRestoreOverrideParametersBP() {
}

void UMaterialAccessorComponent::GetDefaultVectorParameterByVariable(FMACVariableVector& Variable) {
}

void UMaterialAccessorComponent::GetDefaultVectorParameterALL(FName ParameterName, FLinearColor& OutParameters) {
}

void UMaterialAccessorComponent::GetDefaultVectorParameter(TArray<int32> SearchSlots, FName ParameterName, FLinearColor& OutParameters) {
}

void UMaterialAccessorComponent::GetDefaultScalarParameterByVariable(FMACVariableFloat& Variable) {
}

void UMaterialAccessorComponent::GetDefaultScalarParameterALL(FName ParameterName, float& OutParameters) {
}

void UMaterialAccessorComponent::GetDefaultScalarParameter(TArray<int32> SearchSlots, FName ParameterName, float& OutParameters) {
}

void UMaterialAccessorComponent::AddColorByRate(float SumValue, FLinearColor BaseColor, float Rate, FLinearColor SourceColor, FLinearColor& OutColor) {
}

UMaterialAccessorComponent::UMaterialAccessorComponent() {
    this->Mesh = NULL;
    this->EnableRestoreOverrideParamters = true;
}

