#include "RSToolFuncLib.h"

class AActor;
class UActorComponent;
class UInstancedStaticMeshComponent;
class UMaterialInterface;
class UObject;
class UPrimitiveComponent;
class USceneComponent;

void URSToolFuncLib::StartCaptureMovie(const FString& OutputFileName, int32 RecordSeconds) {
}

void URSToolFuncLib::SetupDrawEvents(UObject* WorldContextObject, bool Enable) {
}

void URSToolFuncLib::GetDevelopUObjectCount(const TArray<UClass*>& ClassList, TArray<int32>& CountList, bool ChildClass) {
}

void URSToolFuncLib::EndCaptureMovie() {
}

void URSToolFuncLib::EditorSetComponentStaticShadow(UPrimitiveComponent* Component, bool Enable) {
}

void URSToolFuncLib::EditorSetComponentStartAwake(UPrimitiveComponent* Component, bool Enable) {
}

void URSToolFuncLib::EditorSetComponentMobility(USceneComponent* Component, EEditorMobility Mobility) {
}

void URSToolFuncLib::EditorSetComponentLightmapResolution(UPrimitiveComponent* Component, bool Enable, int32 resolution) {
}

void URSToolFuncLib::EditorSetComponentEmissiveForStaticLighting(UPrimitiveComponent* Component, bool Enable) {
}

void URSToolFuncLib::EditorSetComponentEmissiveBoost(UPrimitiveComponent* Component, float Value) {
}

void URSToolFuncLib::EditorSetComponentDynamicShadow(UPrimitiveComponent* Component, bool Enable) {
}

void URSToolFuncLib::EditorSetComponentDiffuseBoost(UPrimitiveComponent* Component, float Value) {
}

void URSToolFuncLib::EditorSetComponentAttachParentBound(USceneComponent* Component, bool Enable) {
}

void URSToolFuncLib::EditorSetCanEverAffectNavigation(UActorComponent* Component, bool Enable) {
}

void URSToolFuncLib::EditorSearchReferencerAsset(UObject* Target, TArray<UObject*> SearchList) {
}

void URSToolFuncLib::EditorSearchReferenceFromClassList(UObject* Target, TArray<UClass*> SearchList) {
}

void URSToolFuncLib::EditorSearchReferenceAsset(UObject* Target, TArray<UObject*> SearchList) {
}

bool URSToolFuncLib::EditorRemoveActorComponent(AActor* Actor, UActorComponent* Component) {
    return false;
}

void URSToolFuncLib::EditorRefreshMaterial(UMaterialInterface* Material) {
}

void URSToolFuncLib::EditorLogInstancedStaticMesh(UInstancedStaticMeshComponent* Component) {
}

void URSToolFuncLib::EditorFlushInstancedStaticMesh(UInstancedStaticMeshComponent* Component, bool& HasError) {
}

void URSToolFuncLib::EditorDumpReferencerAsset(UObject* Target) {
}

void URSToolFuncLib::EditorDumpReferenceAsset(UObject* Target) {
}

void URSToolFuncLib::EditorClipboardCopy(const FString& text) {
}

void URSToolFuncLib::EditorCallConstructionScript(AActor* ActorInstance) {
}

UActorComponent* URSToolFuncLib::EditorAddActorComponent(AActor* ActorInstance, UClass* ComponentClass, bool IsMovable) {
    return NULL;
}

void URSToolFuncLib::CheckCaptureMovie() {
}

void URSToolFuncLib::CaptureProfileGPU(const FString& OutputFileName) {
}

URSToolFuncLib::URSToolFuncLib() {
}

