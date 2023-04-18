#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
//-FallbackName=Vector
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RSGeneralFuncLib.generated.h"

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

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSGeneralFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSGeneralFuncLib();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void WorldPhysicsIdling(UObject* WorldContextObject, float IdlingSec);
    
    UFUNCTION(BlueprintCallable)
    static void ShrinkActorArray(const TArray<AActor*>& InActors, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibleMaterialFromSlotName(USkinnedMeshComponent* Mesh, const FString& Name, bool bShow, int32 lodIndex, bool IsCaseCheck);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibleMaterialAllLODsFromSlotName(USkinnedMeshComponent* Mesh, const FString& Name, bool bShow, bool IsCaseCheck);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibleMaterialAllLODs(USkinnedMeshComponent* Mesh, int32 MaterialID, bool bShow);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibleMaterialAll(USkinnedMeshComponent* Mesh, bool bShow);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibleMaterial(USkinnedMeshComponent* Mesh, int32 MaterialID, bool bShow, int32 lodIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetVectorParameterArrayFromSlotName(UMeshComponent* Mesh, FName SlotName, bool IsCaseCheck, const TArray<FName>& ParameterName, const TArray<FLinearColor>& Value, bool CreateDynamicMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void SetVectorParameterArrayFromIndexList(UMeshComponent* Mesh, const TArray<int32>& MaterialSlotIndexList, const TArray<FName>& ParameterName, const TArray<FLinearColor>& Value, bool CreateDynamicMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void SetVectorParameterArrayExcludeSlotName(UMeshComponent* Mesh, FName SlotName, bool IsCaseCheck, const TArray<FName>& ParameterName, const TArray<FLinearColor>& Value, bool CreateDynamicMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void SetVectorParameterAllArray(UMeshComponent* Mesh, const TArray<FName>& ParameterName, const TArray<FLinearColor>& Value, bool CreateDynamicMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void SetVectorParameterAll(UMeshComponent* Mesh, FName ParameterName, FLinearColor Value, bool CreateDynamicMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextureParameterAllArray(UMeshComponent* Mesh, const TArray<FName>& ParameterName, const TArray<UTexture*>& Value, bool CreateDynamicMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextureParameterAll(UMeshComponent* Mesh, FName ParameterName, UTexture* Value, bool CreateDynamicMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalarParameterFromSlotName(USkinnedMeshComponent* Mesh, const FString& SlotName, FName ParameterName, float Value, bool IsCaseCheck, bool CreateDynamicMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalarParameterArrayFromSlotName(UMeshComponent* Mesh, FName SlotName, bool IsCaseCheck, const TArray<FName>& ParameterName, const TArray<float>& Value, bool CreateDynamicMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalarParameterArrayFromIndexList(UMeshComponent* Mesh, const TArray<int32>& MaterialSlotIndexList, const TArray<FName>& ParameterName, const TArray<float>& Value, bool CreateDynamicMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalarParameterArrayExcludeSlotName(UMeshComponent* Mesh, FName SlotName, bool IsCaseCheck, const TArray<FName>& ParameterName, const TArray<float>& Value, bool CreateDynamicMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalarParameterAllArray(UMeshComponent* Mesh, const TArray<FName>& ParameterName, const TArray<float>& Value, bool CreateDynamicMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalarParameterAll(UMeshComponent* Mesh, FName ParameterName, float Value, bool CreateDynamicMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalarParameter(USkinnedMeshComponent* Mesh, int32 MaterialIndex, FName ParameterName, float Value, bool CreateDynamicMaterial);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEnableFrameRateSmoothing(UObject* WorldContextObject, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetCellLightingParamter(float LightPower, float LightSunnyMax);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> SearchMeshMaterialFromSlotName(USkinnedMeshComponent* Mesh, const FString& Name, bool IsCaseCheck);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> SearchMeshCompMaterialFromSlotName(UMeshComponent* Mesh, const FString& Name, bool IsCaseCheck);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> SearchMeshCompMaterialExcludeSlotName(UMeshComponent* Mesh, const FString& Name, bool IsCaseCheck);
    
    UFUNCTION(BlueprintCallable)
    static bool IsVisibleMaterial(USkinnedMeshComponent* Mesh, int32 MaterialID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlaySimulate();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayMovieCapture();
    
    UFUNCTION(BlueprintCallable)
    static bool IsInDisplayScreen(const APlayerController* PC, const FVector& targetPos);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEditor();
    
    UFUNCTION(BlueprintCallable)
    static bool IsBodySimulatingPhysics(UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable)
    static bool HasRedEnemyMaterialComponent(UMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable)
    static bool HasRedEnemyMaterialActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool HasMaterialParent(UMaterialInterface* TestMaterial, UMaterialInterface* CheckMaterial);
    
    UFUNCTION(BlueprintCallable)
    static bool HasCelLookMaterialComponent(UMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable)
    static bool HasCelLookMaterialActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRedSettingPurpose();
    
    UFUNCTION(BlueprintCallable)
    static float GetPrimitiveBoundsScale(UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable)
    static void GetChildrenMeshComponents(TArray<UMeshComponent*>& OutMeshComps, USceneComponent* TargetComponent, bool IncludeAllDescendants);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearViewStateMIDPool(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearUnusedRenderTargets(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void CharacterMoveSmooth(ACharacter* InCharacter, const FVector& InVelocity, const float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* AddActorComponent(AActor* Actor, UClass* ComponentClass);
    
};

