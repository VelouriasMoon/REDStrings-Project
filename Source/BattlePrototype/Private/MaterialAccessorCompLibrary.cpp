#include "MaterialAccessorCompLibrary.h"

class UMeshComponent;
class UObject;

void UMaterialAccessorCompLibrary::SetupMeshMACParametersNative(UObject* WorldContextObject, UMeshComponent* MeshComp, const TArray<FMACVariableFloat>& MACScalars, const TArray<EMaterialAccessorSetupID>& MACScalarSetupIDs, const TArray<FMACVariableVector>& MACVectors, const TArray<EMaterialAccessorSetupID>& MACVectorSetupIDs) {
}

void UMaterialAccessorCompLibrary::SetupMeshListMACParametersNative(UObject* WorldContextObject, const TArray<UMeshComponent*> MeshComps, const TArray<FMACVariableFloat>& MACScalars, const TArray<EMaterialAccessorSetupID>& MACScalarSetupIDs, const TArray<FMACVariableVector>& MACVectors, const TArray<EMaterialAccessorSetupID>& MACVectorSetupIDs) {
}

UMaterialAccessorCompLibrary::UMaterialAccessorCompLibrary() {
}

