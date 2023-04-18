#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EUIMain3DCharacterSceneID.h"
#include "EUIMain3DEquipCameraID.h"
#include "UIMain3DBGCameraSetting.h"
#include "UIMain3DCharacterEquipSetting.h"
#include "UIMain3DCharacterPlayerSetting.h"
#include "UIMain3DCharacterSceneSetting.h"
#include "UIMain3DManager.generated.h"

class UDataTable;
class UMeshComponent;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API AUIMain3DManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SceneDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerEquipGeneralDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BGCameraDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> TextureStreamingWaitLimit;
    
public:
    AUIMain3DManager();
protected:
    UFUNCTION(BlueprintCallable)
    void ResetTextureStreamingWaitLimit();
    
    UFUNCTION(BlueprintCallable)
    void LoadTextureRelationEquip(UMeshComponent* MeshComp);
    
    UFUNCTION(BlueprintCallable)
    bool IsTexturesThatUsedAtMeshLoaded(UMeshComponent* MeshComp);
    
    UFUNCTION(BlueprintCallable)
    bool GetSceneSetting(EUIMain3DCharacterSceneID SceneID, FUIMain3DCharacterSceneSetting& Setting);
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerSetting(int32 PlayerUniqueID, FUIMain3DCharacterPlayerSetting& Setting);
    
    UFUNCTION(BlueprintCallable)
    bool GetEquipSetting(UDataTable* DataTable, EUIMain3DEquipCameraID CameraID, FUIMain3DCharacterEquipSetting& Setting);
    
    UFUNCTION(BlueprintCallable)
    bool GetBGCameraSetting(FUIMain3DBGCameraSetting& Setting);
    
};

