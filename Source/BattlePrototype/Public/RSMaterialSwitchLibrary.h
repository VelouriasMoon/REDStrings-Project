#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MaterialSwitchCache.h"
#include "RSMaterialSwitchLibrary.generated.h"

class UMaterialInterface;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSMaterialSwitchLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSMaterialSwitchLibrary();
    UFUNCTION(BlueprintCallable)
    static void SwitchMaterialExcludeLayerID(UPARAM(Ref) FMaterialSwitchCache& MaterialCache, int32 LayerID, UPrimitiveComponent* Primitive, const TArray<FName>& ExcludeMaterialSlots, UMaterialInterface* NewMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void SwitchMaterialExclude(UPARAM(Ref) FMaterialSwitchCache& MaterialCache, UPrimitiveComponent* Primitive, const TArray<FName>& ExcludeMaterialSlots, UMaterialInterface* NewMaterial, int32& LayerID);
    
    UFUNCTION(BlueprintCallable)
    static void SwitchMaterial(UPARAM(Ref) FMaterialSwitchCache& MaterialCache, UPrimitiveComponent* Primitive, UMaterialInterface* NewMaterial, int32& LayerID);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreSwitchMaterialLayerIDs(UPARAM(Ref) FMaterialSwitchCache& MaterialCache, const TArray<int32>& LayerIDs, bool ClearCache);
    
    UFUNCTION(BlueprintCallable)
    static bool RestoreSwitchMaterial(UPARAM(Ref) FMaterialSwitchCache& MaterialCache, int32 RestoreNum);
    
    UFUNCTION(BlueprintCallable)
    static void ClearSwitchMaterialLayerIDs(UPARAM(Ref) FMaterialSwitchCache& MaterialCache, const TArray<int32>& LayerIDs);
    
    UFUNCTION(BlueprintCallable)
    static void ClearMaterialSwitchCache(UPARAM(Ref) FMaterialSwitchCache& MaterialCache);
    
};

