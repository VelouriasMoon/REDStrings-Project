#include "RSMaterialSwitchLibrary.h"

class UMaterialInterface;
class UPrimitiveComponent;

void URSMaterialSwitchLibrary::SwitchMaterialExcludeLayerID(FMaterialSwitchCache& MaterialCache, int32 LayerID, UPrimitiveComponent* Primitive, const TArray<FName>& ExcludeMaterialSlots, UMaterialInterface* NewMaterial) {
}

void URSMaterialSwitchLibrary::SwitchMaterialExclude(FMaterialSwitchCache& MaterialCache, UPrimitiveComponent* Primitive, const TArray<FName>& ExcludeMaterialSlots, UMaterialInterface* NewMaterial, int32& LayerID) {
}

void URSMaterialSwitchLibrary::SwitchMaterial(FMaterialSwitchCache& MaterialCache, UPrimitiveComponent* Primitive, UMaterialInterface* NewMaterial, int32& LayerID) {
}

void URSMaterialSwitchLibrary::RestoreSwitchMaterialLayerIDs(FMaterialSwitchCache& MaterialCache, const TArray<int32>& LayerIDs, bool ClearCache) {
}

bool URSMaterialSwitchLibrary::RestoreSwitchMaterial(FMaterialSwitchCache& MaterialCache, int32 RestoreNum) {
    return false;
}

void URSMaterialSwitchLibrary::ClearSwitchMaterialLayerIDs(FMaterialSwitchCache& MaterialCache, const TArray<int32>& LayerIDs) {
}

void URSMaterialSwitchLibrary::ClearMaterialSwitchCache(FMaterialSwitchCache& MaterialCache) {
}

URSMaterialSwitchLibrary::URSMaterialSwitchLibrary() {
}

