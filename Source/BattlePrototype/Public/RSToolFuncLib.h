#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EEditorMobility.h"
#include "RSToolFuncLib.generated.h"

class AActor;
class UActorComponent;
class UInstancedStaticMeshComponent;
class UMaterialInterface;
class UObject;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSToolFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSToolFuncLib();
    UFUNCTION(BlueprintCallable)
    static void StartCaptureMovie(const FString& OutputFileName, int32 RecordSeconds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetupDrawEvents(UObject* WorldContextObject, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void GetDevelopUObjectCount(const TArray<UClass*>& ClassList, TArray<int32>& CountList, bool ChildClass);
    
    UFUNCTION(BlueprintCallable)
    static void EndCaptureMovie();
    
    UFUNCTION(BlueprintCallable)
    static void EditorSetComponentStaticShadow(UPrimitiveComponent* Component, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void EditorSetComponentStartAwake(UPrimitiveComponent* Component, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void EditorSetComponentMobility(USceneComponent* Component, EEditorMobility Mobility);
    
    UFUNCTION(BlueprintCallable)
    static void EditorSetComponentLightmapResolution(UPrimitiveComponent* Component, bool Enable, int32 resolution);
    
    UFUNCTION(BlueprintCallable)
    static void EditorSetComponentEmissiveForStaticLighting(UPrimitiveComponent* Component, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void EditorSetComponentEmissiveBoost(UPrimitiveComponent* Component, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void EditorSetComponentDynamicShadow(UPrimitiveComponent* Component, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void EditorSetComponentDiffuseBoost(UPrimitiveComponent* Component, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void EditorSetComponentAttachParentBound(USceneComponent* Component, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void EditorSetCanEverAffectNavigation(UActorComponent* Component, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void EditorSearchReferencerAsset(UObject* Target, TArray<UObject*> SearchList);
    
    UFUNCTION(BlueprintCallable)
    static void EditorSearchReferenceFromClassList(UObject* Target, TArray<UClass*> SearchList);
    
    UFUNCTION(BlueprintCallable)
    static void EditorSearchReferenceAsset(UObject* Target, TArray<UObject*> SearchList);
    
    UFUNCTION(BlueprintCallable)
    static bool EditorRemoveActorComponent(AActor* Actor, UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void EditorRefreshMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    static void EditorLogInstancedStaticMesh(UInstancedStaticMeshComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void EditorFlushInstancedStaticMesh(UInstancedStaticMeshComponent* Component, bool& HasError);
    
    UFUNCTION(BlueprintCallable)
    static void EditorDumpReferencerAsset(UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void EditorDumpReferenceAsset(UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void EditorClipboardCopy(const FString& text);
    
    UFUNCTION(BlueprintCallable)
    static void EditorCallConstructionScript(AActor* ActorInstance);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* EditorAddActorComponent(AActor* ActorInstance, UClass* ComponentClass, bool IsMovable);
    
    UFUNCTION(BlueprintCallable)
    static void CheckCaptureMovie();
    
    UFUNCTION(BlueprintCallable)
    static void CaptureProfileGPU(const FString& OutputFileName);
    
};

