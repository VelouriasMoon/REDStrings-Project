#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialParameterInfo -FallbackName=MaterialParameterInfo
#include "MaterialOverrideParameters.h"
#include "MeshMaterialOverrideParameters.h"
#include "RSMaterialLibrary.generated.h"

class ANpcSkeletalMeshActor;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UMeshComponent;
class UObject;
class USkeletalMeshComponent;
class UTexture2D;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSMaterialLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSMaterialLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateMaterialPreSkinFacialNormalToSlotsNative(UObject* WorldContextObject, USkeletalMeshComponent* SkelMeshComp, bool bIsEvent, const TArray<int32>& MaterialSlots);
    
    UFUNCTION(BlueprintCallable)
    static bool SetVectorParameterByIndex(UMaterialInstanceDynamic* DynamicMaterial, int32 ParameterIndex, const FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetScalarParameterByIndex(UMaterialInstanceDynamic* DynamicMaterial, int32 ParameterIndex, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetMeshMaterialOverrideParameters(UMeshComponent* Mesh, const FMeshMaterialOverrideParameters& OverrideParam, bool ClearParam);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaterialOverrideParameters(UMaterialInstanceDynamic* MaterialInstanceDynamic, const FMaterialOverrideParameters& OutParam, bool ClearParam);
    
    UFUNCTION(BlueprintCallable)
    static void ResetMIDScalarParameterValueFromDefault(TArray<UMeshComponent*> MeshComps, const TArray<FName>& ParameterNames);
    
    UFUNCTION(BlueprintCallable)
    static void ResetMIDScalarParameterValue(TArray<UMeshComponent*> MeshComps, const TArray<FName>& ParameterNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetVectorParameterIndex(UMaterialInstanceDynamic* DynamicMaterial, const FName& ParameterName, int32& OutParameterIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool GetVectorParameterByIndex(UMaterialInstanceDynamic* DynamicMaterial, int32 ParameterIndex, FLinearColor& outValue);
    
    UFUNCTION(BlueprintCallable)
    static bool GetScalarParameterIndex(UMaterialInstanceDynamic* DynamicMaterial, const FName& ParameterName, int32& OutParameterIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool GetScalarParameterByIndex(UMaterialInstanceDynamic* DynamicMaterial, int32 ParameterIndex, float& outValue);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRsVectorParameterValue(UMaterialInstance* MaterialInstance, const FName& ParameterName, FLinearColor& outValue);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRsTextureParameterValue(UMaterialInstance* MaterialInstance, const FName& ParameterName, UTexture2D*& outValue);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRsScalarParameterValue(UMaterialInstance* MaterialInstance, const FName& ParameterName, float& outValue);
    
    UFUNCTION(BlueprintCallable)
    static void GetMeshMaterialOverrideParameters(UMeshComponent* Mesh, FMeshMaterialOverrideParameters& OutParam);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMaterialStaticSwitch(UMaterialInterface* Material, const FName& ParameterName, UPARAM(Ref) bool& StaticSwitch);
    
    UFUNCTION(BlueprintCallable)
    static void GetMaterialOverrideParametersALLHierarchy(UMaterialInstance* MaterialInstance, FMaterialOverrideParameters& OutParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetMaterialOverrideParameters(UMaterialInstance* MaterialInstance, FMaterialOverrideParameters& OutParam);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMaterialInstanceParameterGroupName(UMaterialInstance* MaterialInstance, const FMaterialParameterInfo& ParameterInfo, FName& OutGroup);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMaterialInstanceAllVectorParameterInfo(UMaterialInstance* MaterialInstance, TArray<FMaterialParameterInfo>& Info);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMaterialInstanceAllScalarParameterInfo(UMaterialInstance* MaterialInstance, TArray<FMaterialParameterInfo>& Info);
    
    UFUNCTION(BlueprintCallable)
    static UMaterialInterface* GetMaterialFromPath(const FString& Path, bool Load);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetDefaultVectorParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, FLinearColor& ParameterValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetDefaultScalarParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, float& ParameterValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EnableMaterialPreSkinFacialNormalNPCNative(UObject* WorldContextObject, ANpcSkeletalMeshActor* NPCActor, bool bEnabled, bool bIsEvent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EnableMaterialPreSkinFacialNormalNative(UObject* WorldContextObject, USkeletalMeshComponent* SkelMeshComp, bool bEnabled, bool bIsEvent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DumpMaterialParameterCollection(UObject* WorldContextObject, UObject* Collection);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMaterialInstanceDynamic* CopyNeonWireDepthParameterNative2(UObject* WorldContextObject, int32 WireMaterialIndex, USkeletalMeshComponent* WireDepthComp, UMaterialInstanceDynamic* WireMaterial, USkeletalMeshComponent* TargetMeshComp, UMaterialInterface* HologramWireMaterial, UMaterialInterface* WireDepthMaterial, UMaterialInterface* HologramWireDepthMaterial);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CopyNeonWireDepthParameterNative(UObject* WorldContextObject, int32 WireMaterialIndex, USkeletalMeshComponent* WireDepthComp, UMaterialInstanceDynamic* WireMaterial, USkeletalMeshComponent* TargetMeshComp);
    
    UFUNCTION(BlueprintCallable)
    static void ClearOverrideMaterials(UMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCharacterMaterial(UMeshComponent* MeshComp, UMaterialInterface* BodyMat, UMaterialInterface* BodyLUTMat, UMaterialInterface* EyeMat, UMaterialInterface* EyeLUTMat, UMaterialInterface* HairMat, UMaterialInterface* HairLUTMat, UMaterialInterface* SkinMat, UMaterialInterface* SkinLUTMat, UMaterialInterface* OutlineMat, UMaterialInterface* OutlineLUTMat, UMaterialInterface* MaskMat, UMaterialInterface* MaskLUTMat, UMaterialInterface* Wire0Mat, UMaterialInterface* Wire1Mat, UMaterialInterface* HologramMat, UMaterialInterface* HoodMat, UMaterialInterface* SheathMat, UMaterialInterface* OtherMat, UMaterialInterface* OtherLUTMat, TArray<UMaterialInterface*> BaseLUTMaterials);
    
};

