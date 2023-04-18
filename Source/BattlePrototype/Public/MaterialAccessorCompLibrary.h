#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMaterialAccessorSetupID.h"
#include "MACVariableFloat.h"
#include "MACVariableVector.h"
#include "MaterialAccessorCompLibrary.generated.h"

class UMeshComponent;
class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UMaterialAccessorCompLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMaterialAccessorCompLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetupMeshMACParametersNative(UObject* WorldContextObject, UMeshComponent* MeshComp, const TArray<FMACVariableFloat>& MACScalars, const TArray<EMaterialAccessorSetupID>& MACScalarSetupIDs, const TArray<FMACVariableVector>& MACVectors, const TArray<EMaterialAccessorSetupID>& MACVectorSetupIDs);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetupMeshListMACParametersNative(UObject* WorldContextObject, const TArray<UMeshComponent*> MeshComps, const TArray<FMACVariableFloat>& MACScalars, const TArray<EMaterialAccessorSetupID>& MACScalarSetupIDs, const TArray<FMACVariableVector>& MACVectors, const TArray<EMaterialAccessorSetupID>& MACVectorSetupIDs);
    
};

