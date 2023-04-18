#include "RSMaterialLibrary.h"

class ANpcSkeletalMeshActor;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UMeshComponent;
class UObject;
class USkeletalMeshComponent;
class UTexture2D;

void URSMaterialLibrary::UpdateMaterialPreSkinFacialNormalToSlotsNative(UObject* WorldContextObject, USkeletalMeshComponent* SkelMeshComp, bool bIsEvent, const TArray<int32>& MaterialSlots) {
}

bool URSMaterialLibrary::SetVectorParameterByIndex(UMaterialInstanceDynamic* DynamicMaterial, int32 ParameterIndex, const FLinearColor Value) {
    return false;
}

bool URSMaterialLibrary::SetScalarParameterByIndex(UMaterialInstanceDynamic* DynamicMaterial, int32 ParameterIndex, float Value) {
    return false;
}

void URSMaterialLibrary::SetMeshMaterialOverrideParameters(UMeshComponent* Mesh, const FMeshMaterialOverrideParameters& OverrideParam, bool ClearParam) {
}

void URSMaterialLibrary::SetMaterialOverrideParameters(UMaterialInstanceDynamic* MaterialInstanceDynamic, const FMaterialOverrideParameters& OutParam, bool ClearParam) {
}

void URSMaterialLibrary::ResetMIDScalarParameterValueFromDefault(TArray<UMeshComponent*> MeshComps, const TArray<FName>& ParameterNames) {
}

void URSMaterialLibrary::ResetMIDScalarParameterValue(TArray<UMeshComponent*> MeshComps, const TArray<FName>& ParameterNames) {
}

bool URSMaterialLibrary::GetVectorParameterIndex(UMaterialInstanceDynamic* DynamicMaterial, const FName& ParameterName, int32& OutParameterIndex) {
    return false;
}

bool URSMaterialLibrary::GetVectorParameterByIndex(UMaterialInstanceDynamic* DynamicMaterial, int32 ParameterIndex, FLinearColor& outValue) {
    return false;
}

bool URSMaterialLibrary::GetScalarParameterIndex(UMaterialInstanceDynamic* DynamicMaterial, const FName& ParameterName, int32& OutParameterIndex) {
    return false;
}

bool URSMaterialLibrary::GetScalarParameterByIndex(UMaterialInstanceDynamic* DynamicMaterial, int32 ParameterIndex, float& outValue) {
    return false;
}

bool URSMaterialLibrary::GetRsVectorParameterValue(UMaterialInstance* MaterialInstance, const FName& ParameterName, FLinearColor& outValue) {
    return false;
}

bool URSMaterialLibrary::GetRsTextureParameterValue(UMaterialInstance* MaterialInstance, const FName& ParameterName, UTexture2D*& outValue) {
    return false;
}

bool URSMaterialLibrary::GetRsScalarParameterValue(UMaterialInstance* MaterialInstance, const FName& ParameterName, float& outValue) {
    return false;
}

void URSMaterialLibrary::GetMeshMaterialOverrideParameters(UMeshComponent* Mesh, FMeshMaterialOverrideParameters& OutParam) {
}

bool URSMaterialLibrary::GetMaterialStaticSwitch(UMaterialInterface* Material, const FName& ParameterName, bool& StaticSwitch) {
    return false;
}

void URSMaterialLibrary::GetMaterialOverrideParametersALLHierarchy(UMaterialInstance* MaterialInstance, FMaterialOverrideParameters& OutParam) {
}

void URSMaterialLibrary::GetMaterialOverrideParameters(UMaterialInstance* MaterialInstance, FMaterialOverrideParameters& OutParam) {
}

bool URSMaterialLibrary::GetMaterialInstanceParameterGroupName(UMaterialInstance* MaterialInstance, const FMaterialParameterInfo& ParameterInfo, FName& OutGroup) {
    return false;
}

bool URSMaterialLibrary::GetMaterialInstanceAllVectorParameterInfo(UMaterialInstance* MaterialInstance, TArray<FMaterialParameterInfo>& Info) {
    return false;
}

bool URSMaterialLibrary::GetMaterialInstanceAllScalarParameterInfo(UMaterialInstance* MaterialInstance, TArray<FMaterialParameterInfo>& Info) {
    return false;
}

UMaterialInterface* URSMaterialLibrary::GetMaterialFromPath(const FString& Path, bool Load) {
    return NULL;
}

bool URSMaterialLibrary::GetDefaultVectorParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, FLinearColor& ParameterValue) {
    return false;
}

bool URSMaterialLibrary::GetDefaultScalarParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, float& ParameterValue) {
    return false;
}

void URSMaterialLibrary::EnableMaterialPreSkinFacialNormalNPCNative(UObject* WorldContextObject, ANpcSkeletalMeshActor* NPCActor, bool bEnabled, bool bIsEvent) {
}

void URSMaterialLibrary::EnableMaterialPreSkinFacialNormalNative(UObject* WorldContextObject, USkeletalMeshComponent* SkelMeshComp, bool bEnabled, bool bIsEvent) {
}

void URSMaterialLibrary::DumpMaterialParameterCollection(UObject* WorldContextObject, UObject* Collection) {
}

UMaterialInstanceDynamic* URSMaterialLibrary::CopyNeonWireDepthParameterNative2(UObject* WorldContextObject, int32 WireMaterialIndex, USkeletalMeshComponent* WireDepthComp, UMaterialInstanceDynamic* WireMaterial, USkeletalMeshComponent* TargetMeshComp, UMaterialInterface* HologramWireMaterial, UMaterialInterface* WireDepthMaterial, UMaterialInterface* HologramWireDepthMaterial) {
    return NULL;
}

void URSMaterialLibrary::CopyNeonWireDepthParameterNative(UObject* WorldContextObject, int32 WireMaterialIndex, USkeletalMeshComponent* WireDepthComp, UMaterialInstanceDynamic* WireMaterial, USkeletalMeshComponent* TargetMeshComp) {
}

void URSMaterialLibrary::ClearOverrideMaterials(UMeshComponent* Mesh) {
}

void URSMaterialLibrary::ChangeCharacterMaterial(UMeshComponent* MeshComp, UMaterialInterface* BodyMat, UMaterialInterface* BodyLUTMat, UMaterialInterface* EyeMat, UMaterialInterface* EyeLUTMat, UMaterialInterface* HairMat, UMaterialInterface* HairLUTMat, UMaterialInterface* SkinMat, UMaterialInterface* SkinLUTMat, UMaterialInterface* OutlineMat, UMaterialInterface* OutlineLUTMat, UMaterialInterface* MaskMat, UMaterialInterface* MaskLUTMat, UMaterialInterface* Wire0Mat, UMaterialInterface* Wire1Mat, UMaterialInterface* HologramMat, UMaterialInterface* HoodMat, UMaterialInterface* SheathMat, UMaterialInterface* OtherMat, UMaterialInterface* OtherLUTMat, TArray<UMaterialInterface*> BaseLUTMaterials) {
}

URSMaterialLibrary::URSMaterialLibrary() {
}

