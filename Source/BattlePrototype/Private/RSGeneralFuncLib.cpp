#include "RSGeneralFuncLib.h"

class AActor;
class ACharacter;
class APlayerController;
class UActorComponent;
class UMaterialInterface;
class UMeshComponent;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class USkinnedMeshComponent;
class UTexture;

void URSGeneralFuncLib::WorldPhysicsIdling(UObject* WorldContextObject, float IdlingSec) {
}

void URSGeneralFuncLib::ShrinkActorArray(const TArray<AActor*>& InActors, TArray<AActor*>& OutActors) {
}

void URSGeneralFuncLib::SetVisibleMaterialFromSlotName(USkinnedMeshComponent* Mesh, const FString& Name, bool bShow, int32 lodIndex, bool IsCaseCheck) {
}

void URSGeneralFuncLib::SetVisibleMaterialAllLODsFromSlotName(USkinnedMeshComponent* Mesh, const FString& Name, bool bShow, bool IsCaseCheck) {
}

void URSGeneralFuncLib::SetVisibleMaterialAllLODs(USkinnedMeshComponent* Mesh, int32 MaterialID, bool bShow) {
}

void URSGeneralFuncLib::SetVisibleMaterialAll(USkinnedMeshComponent* Mesh, bool bShow) {
}

void URSGeneralFuncLib::SetVisibleMaterial(USkinnedMeshComponent* Mesh, int32 MaterialID, bool bShow, int32 lodIndex) {
}

void URSGeneralFuncLib::SetVectorParameterArrayFromSlotName(UMeshComponent* Mesh, FName SlotName, bool IsCaseCheck, const TArray<FName>& ParameterName, const TArray<FLinearColor>& Value, bool CreateDynamicMaterial) {
}

void URSGeneralFuncLib::SetVectorParameterArrayFromIndexList(UMeshComponent* Mesh, const TArray<int32>& MaterialSlotIndexList, const TArray<FName>& ParameterName, const TArray<FLinearColor>& Value, bool CreateDynamicMaterial) {
}

void URSGeneralFuncLib::SetVectorParameterArrayExcludeSlotName(UMeshComponent* Mesh, FName SlotName, bool IsCaseCheck, const TArray<FName>& ParameterName, const TArray<FLinearColor>& Value, bool CreateDynamicMaterial) {
}

void URSGeneralFuncLib::SetVectorParameterAllArray(UMeshComponent* Mesh, const TArray<FName>& ParameterName, const TArray<FLinearColor>& Value, bool CreateDynamicMaterial) {
}

void URSGeneralFuncLib::SetVectorParameterAll(UMeshComponent* Mesh, FName ParameterName, FLinearColor Value, bool CreateDynamicMaterial) {
}

void URSGeneralFuncLib::SetTextureParameterAllArray(UMeshComponent* Mesh, const TArray<FName>& ParameterName, const TArray<UTexture*>& Value, bool CreateDynamicMaterial) {
}

void URSGeneralFuncLib::SetTextureParameterAll(UMeshComponent* Mesh, FName ParameterName, UTexture* Value, bool CreateDynamicMaterial) {
}

void URSGeneralFuncLib::SetScalarParameterFromSlotName(USkinnedMeshComponent* Mesh, const FString& SlotName, FName ParameterName, float Value, bool IsCaseCheck, bool CreateDynamicMaterial) {
}

void URSGeneralFuncLib::SetScalarParameterArrayFromSlotName(UMeshComponent* Mesh, FName SlotName, bool IsCaseCheck, const TArray<FName>& ParameterName, const TArray<float>& Value, bool CreateDynamicMaterial) {
}

void URSGeneralFuncLib::SetScalarParameterArrayFromIndexList(UMeshComponent* Mesh, const TArray<int32>& MaterialSlotIndexList, const TArray<FName>& ParameterName, const TArray<float>& Value, bool CreateDynamicMaterial) {
}

void URSGeneralFuncLib::SetScalarParameterArrayExcludeSlotName(UMeshComponent* Mesh, FName SlotName, bool IsCaseCheck, const TArray<FName>& ParameterName, const TArray<float>& Value, bool CreateDynamicMaterial) {
}

void URSGeneralFuncLib::SetScalarParameterAllArray(UMeshComponent* Mesh, const TArray<FName>& ParameterName, const TArray<float>& Value, bool CreateDynamicMaterial) {
}

void URSGeneralFuncLib::SetScalarParameterAll(UMeshComponent* Mesh, FName ParameterName, float Value, bool CreateDynamicMaterial) {
}

void URSGeneralFuncLib::SetScalarParameter(USkinnedMeshComponent* Mesh, int32 MaterialIndex, FName ParameterName, float Value, bool CreateDynamicMaterial) {
}

void URSGeneralFuncLib::SetEnableFrameRateSmoothing(UObject* WorldContextObject, bool bEnable) {
}

void URSGeneralFuncLib::SetCellLightingParamter(float LightPower, float LightSunnyMax) {
}

TArray<int32> URSGeneralFuncLib::SearchMeshMaterialFromSlotName(USkinnedMeshComponent* Mesh, const FString& Name, bool IsCaseCheck) {
    return TArray<int32>();
}

TArray<int32> URSGeneralFuncLib::SearchMeshCompMaterialFromSlotName(UMeshComponent* Mesh, const FString& Name, bool IsCaseCheck) {
    return TArray<int32>();
}

TArray<int32> URSGeneralFuncLib::SearchMeshCompMaterialExcludeSlotName(UMeshComponent* Mesh, const FString& Name, bool IsCaseCheck) {
    return TArray<int32>();
}

bool URSGeneralFuncLib::IsVisibleMaterial(USkinnedMeshComponent* Mesh, int32 MaterialID) {
    return false;
}

bool URSGeneralFuncLib::IsPlaySimulate() {
    return false;
}

bool URSGeneralFuncLib::IsPlayMovieCapture() {
    return false;
}

bool URSGeneralFuncLib::IsInDisplayScreen(const APlayerController* PC, const FVector& targetPos) {
    return false;
}

bool URSGeneralFuncLib::IsEditor() {
    return false;
}

bool URSGeneralFuncLib::IsBodySimulatingPhysics(UPrimitiveComponent* Primitive) {
    return false;
}

bool URSGeneralFuncLib::HasRedEnemyMaterialComponent(UMeshComponent* Mesh) {
    return false;
}

bool URSGeneralFuncLib::HasRedEnemyMaterialActor(AActor* Actor) {
    return false;
}

bool URSGeneralFuncLib::HasMaterialParent(UMaterialInterface* TestMaterial, UMaterialInterface* CheckMaterial) {
    return false;
}

bool URSGeneralFuncLib::HasCelLookMaterialComponent(UMeshComponent* Mesh) {
    return false;
}

bool URSGeneralFuncLib::HasCelLookMaterialActor(AActor* Actor) {
    return false;
}

FString URSGeneralFuncLib::GetRedSettingPurpose() {
    return TEXT("");
}

float URSGeneralFuncLib::GetPrimitiveBoundsScale(UPrimitiveComponent* Primitive) {
    return 0.0f;
}

void URSGeneralFuncLib::GetChildrenMeshComponents(TArray<UMeshComponent*>& OutMeshComps, USceneComponent* TargetComponent, bool IncludeAllDescendants) {
}

void URSGeneralFuncLib::ClearViewStateMIDPool(UObject* WorldContextObject) {
}

void URSGeneralFuncLib::ClearUnusedRenderTargets(UObject* WorldContextObject) {
}

void URSGeneralFuncLib::CharacterMoveSmooth(ACharacter* InCharacter, const FVector& InVelocity, const float DeltaSeconds) {
}

UActorComponent* URSGeneralFuncLib::AddActorComponent(AActor* Actor, UClass* ComponentClass) {
    return NULL;
}

URSGeneralFuncLib::URSGeneralFuncLib() {
}

