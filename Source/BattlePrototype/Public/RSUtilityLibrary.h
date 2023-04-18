#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "UObject/PrimaryAssetId.h"
//-FallbackName=Rotator
#include "UObject/SoftObjectPath.h"
//-FallbackName=Transform
//-FallbackName=Vector
#include "Math/Vector2D.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "Engine/Scene.h"
#include "Engine/Texture.h"
#include "Engine/Scene.h"
#include "MovieSceneObjectBindingID.h"
#include "EPlayerID.h"
#include "ERenderTargetCustomFormat.h"
#include "E_SASKindNative.h"
#include "ScreenResolutionSetting.h"
#include "StageParameterSettings.h"
#include "Templates/SubclassOf.h"
#include "RSUtilityLibrary.generated.h"

class AActor;
class APostProcessVolume;
class ARSLevelSequenceActor;
class ASequencerParticle;
class UAnimInstance;
class UAnimMontage;
class UAnimSequence;
class UAnimSequenceBase;
class UCineCameraComponent;
class UDataTable;
class UImage;
class ULevelStreaming;
class ULevelStreamingDynamic;
class UMaterial;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMeshComponent;
class UObject;
class UPostProcessComponent;
class UPrimitiveComponent;
class URSGameInstance;
class URSParticleSystemComponentBase;
class USceneCaptureComponent2D;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USkinnedMeshComponent;
class UStaticMeshComponent;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAssetLoaded, UObject*, Loaded);
    
    URSUtilityLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void VisionSimulatorReturnAjitoFunc(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void VisionSimulatorRetryActorStopFunc(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateDLCInfo(const UObject* WorldContextObject, TArray<FName> entitledContentsList, TArray<FName> invalidContentsList, bool isInvalidDLCInvalidation);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateBoundsComponent(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnloadLevelInstance(UObject* WorldContextObject, ULevelStreamingDynamic* LevelStreaming);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartDeadGameOverPreWork(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorFromBPFilePath(UObject* WorldContextObject, const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static void ShippingDebugString(const FString& outString);
    
    UFUNCTION(BlueprintCallable)
    static void SetUROParameter(USkinnedMeshComponent* Mesh, TArray<float> Thesholds, int32 MaxEvalRateForInterpolation, int32 BaseNonRenderedUpdateRate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetupPPMaskParticlenative(UObject* WorldContextObject, TArray<ASequencerParticle*>& SequencerParticles, TArray<int32>& RestoreCustomStencil, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowMapAtlasTargetsEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetRenderAfterDOF(UMaterial* Material, bool IsEnable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPlayTrial2Flag(UObject* WorldContextObject, const bool bYuito, const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetPicturizeQuality(int32 Quality);
    
    UFUNCTION(BlueprintCallable)
    static void SetMainViewOverrideAA(bool bOverride, int32 AAMethod);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightChannnel(UPrimitiveComponent* Primitive, bool Channel0, bool Channel1, bool Channel2);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameViewRenderLayer(uint8 RenderLayer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGamePausedRS(const UObject* WorldContextObject, bool bPaused, FName ClaimantName, bool bPauseInputManager);
    
    UFUNCTION(BlueprintCallable)
    static void SetForcedLOD(USceneComponent* Mesh, int32 lodIndex, bool bApplyChiledComponent);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableURO(USkinnedMeshComponent* Mesh, bool bEnable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDisplayBrightnessNative(UObject* WorldContextObject, int32 Brightness);
    
    UFUNCTION(BlueprintCallable)
    static void SetCelLookLightDirection(FVector LightDirection);
    
    UFUNCTION(BlueprintCallable)
    static void SetBgEdgeDriveParameter(float Length, float Smooth, float ColorShift, float Parameter4, float EdgeThresholdNomrmal, float EdgeThresholdLuminance, float Parameter7, float Parameter8);
    
    UFUNCTION(BlueprintCallable)
    static void SetBgEdgeDriveLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static void SetBgEdgeDriveColor(FLinearColor InnerColor, FLinearColor OuterColor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAddContentsNewFlag(const UObject* WorldContextObject, FName contentsName, const bool Flag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SaveDataLoadAfterParamAdjust(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RestorePPMaskParticlenative(UObject* WorldContextObject, const TArray<ASequencerParticle*>& SequencerParticles, const TArray<int32>& RestoreCustomStencil);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetRenderTargets(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ReplaceMaterialInstancePlatformTexture(UMaterialInstanceDynamic* MaterialInstance);
    
    UFUNCTION(BlueprintCallable)
    static void ReplaceMaterialInstanceFromImagePlatformTexture(UImage* Image);
    
    UFUNCTION(BlueprintCallable)
    static FPostProcessSettings RemovePostProcessMaterialFromPPS(const FPostProcessSettings& BaseSettings, UMaterialInterface* RemoveMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void RemovePostProcessMaterialFromComponent(UPostProcessComponent* PPComponent, UMaterialInterface* RemoveMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshSkinMeshSkipAnimNotify(USkeletalMeshComponent* SkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshSkinMesh(USkinnedMeshComponent* SkinMesh);
    
    UFUNCTION(BlueprintCallable)
    static void RedUnImplement();
    
    UFUNCTION(BlueprintCallable)
    static void RedEnsure(bool isCheck, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void RedAssert(bool isCheck, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void OutputNowTime(const FString& LogText);
    
    UFUNCTION(BlueprintCallable)
    static AActor* LoadSoftObjectActor(TSoftObjectPtr<AActor> Target);
    
    UFUNCTION(BlueprintCallable)
    static UObject* LoadSoftObject(TSoftObjectPtr<UObject> Target);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<AActor> LoadSoftClassActor(TSoftClassPtr<AActor> Target);
    
    UFUNCTION(BlueprintCallable)
    static UClass* LoadSoftClass(TSoftClassPtr<UObject> Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* LoadObjectGeneric(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* LoadDataTable(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadAssetFromStringAssetReference(UObject* WorldContextObject, FSoftObjectPath StringAsset, URSUtilityLibrary::FOnAssetLoaded OnLoaded, FLatentActionInfo LatentInfo, bool NoFindCheck);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LevelChangeBeforeWorkFromIngame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRootMotionAnimMontage(UAnimMontage* anim);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsNotAppliedDLCAndReceiveBrainMessage(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsNotAppliedDLC(const UObject* WorldContextObject, TArray<FName>& notAppliedAddContentsNameList, const bool isPurchasedOnly);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsNewDLC(const UObject* WorldContextObject, bool isParamUpdate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsGameClearThisPlay(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsExistNotInformPurchasedAddContents(const UObject* WorldContextObject, TArray<FName>& addContentsNameList, const bool isUpdateSystemSave);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsExistNotInformNewAddContents(const UObject* WorldContextObject, TArray<FName>& addContentsNameList, const bool isUpdateSystemSave);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsDLCOverPossession(const UObject* WorldContextObject, FName contentsName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsDLCHaveNoRightsInApplied(const UObject* WorldContextObject, TArray<FName> appliedAddContentsNameList);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisplayVertical(bool& IsVertical);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsAppliedDLC(const UObject* WorldContextObject, FName contentsName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsApplicationActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnimMontageStoped(UAnimInstance* AnimInstance, UAnimSequenceBase* anim);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsAllSlotNotAppliedAndNotNotifiedDLC(const UObject* WorldContextObject, TArray<FName>& resultAddContentsNameList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsAddContentsNewFlag(const UObject* WorldContextObject, FName contentsName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void InvalidDLCInvalidation(const UObject* WorldContextObject, TArray<FName> invalidContentsList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasWorldEndOfFrameUpdates(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool HasSimpleCollision(UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GeWorldPostProcesstEnabledMaterials(UObject* WorldContextObject, FVector Location, TArray<UMaterialInterface*>& OutMaterials, TArray<FString>& OutMaterialNames);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<APostProcessVolume*> GetWorldPostProcessVolume(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetUROUpdateRate(USkinnedMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetToday(const UObject* WorldContextObject, int32& Year, int32& Month, int32& Day);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSystemAvailableWindowedResolutions(const TArray<FScreenResolutionSetting> InResolutions, TArray<FScreenResolutionSetting>& OutResolutions, bool bIgnoreRefreshRate);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSystemAvailableResolutions(TArray<FScreenResolutionSetting>& Resolutions, bool bIgnoreRefreshRate);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSystemAvailableFullscreenResolutions(const TArray<FScreenResolutionSetting> InResolutions, TArray<FScreenResolutionSetting>& OutResolutions, bool bIgnoreRefreshRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStaticMeshComponent* GetStaticMeshFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UStaticMeshComponent*> GetStaticMeshArrayFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMeshComponent* GetSkeletalMeshFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool GetScreenResolution(FVector2D& resolution, bool& IsVertical);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URSGameInstance* GetRSGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetPrimaryAssetTypeName(const FPrimaryAssetType& assetType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetPlayTrial2Flag(UObject* WorldContextObject, const bool bYuito);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNativeScreenResolution(FVector2D& resolution, bool& IsVertical);
    
    UFUNCTION(BlueprintCallable)
    static float GetMaxDistanceFactor(USkinnedMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable)
    static bool GetInitialScreenResolution(FVector2D& resolution, bool& IsVertical);
    
    UFUNCTION(BlueprintCallable)
    static uint8 GetGameViewRenderLayer();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FRotator GetCurrentCameraRotation(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetComposedRefPoseTransform(USkeletalMesh* SkeletalMesh, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetCelLookLightDirection();
    
    UFUNCTION(BlueprintCallable)
    static void GetCelLookAmbientReplaceParam(FLinearColor& OutColor, float& OutRate);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<AActor> GetAssetUClass(FName ClassName, FName AssetName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAppropriateSystemAvailableResolutions(FScreenResolutionSetting& resolution, const int32 Width, const int32 Height, const bool bIgnoreRefreshRate);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetActorsFromLevelStreaming(ULevelStreaming* Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* GetActorFromTagForLevelName(const UObject* WorldContextObject, FName Tag, FName LevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetActorFromTagConst(const UObject* WorldObject, const FName& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetActorFromTag(UObject* WorldObject, FName Tag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GameOverActorStopFunc(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GameClearSaveParamAdjust(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ForceUploadGPUScene();
    
    UFUNCTION(BlueprintCallable)
    static void ForceGC_NoEditor(bool bFullPurge);
    
    UFUNCTION(BlueprintCallable)
    static void ForceGC(bool bFullPurge);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ExNewGameParamAdjust(const UObject* WorldContextObject, const bool isTakeOverPlayerLv, const bool isTakeOverBrainMap);
    
    UFUNCTION(BlueprintCallable)
    static void DoFlushRenderingCommands();
    
    UFUNCTION(BlueprintCallable)
    static void DebugLogWarning(FText warningText);
    
    UFUNCTION(BlueprintCallable)
    static void DebugDisplayURO(USkinnedMeshComponent* Mesh, bool bDisplay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTextureRenderTarget2D* CreateRenderTarget2DCustom(UObject* WorldContextObject, int32 Width, int32 Height, ERenderTargetCustomFormat Format, TEnumAsByte<TextureAddress> AddressX, TEnumAsByte<TextureAddress> AddressY, bool LinearGamma);
    
    UFUNCTION(BlueprintCallable)
    static UMaterialInstanceDynamic* CreateDynamicMaterialInstanceFromName_Particle(URSParticleSystemComponentBase* RSParticleComponent, const FName EmitterName, UMaterialInterface* SourceMaterial);
    
    UFUNCTION(BlueprintCallable)
    static UMaterialInstanceDynamic* CreateDynamicMaterialInstanceFromName_Mesh(UMeshComponent* MeshComponent, const FName MaterialName, UMaterialInterface* SourceMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void CopySequencerTemplateToCineCamera(ARSLevelSequenceActor* Sequencer, FMovieSceneObjectBindingID BindingID, UCineCameraComponent* CineCamera);
    
    UFUNCTION(BlueprintCallable)
    static void CopyBaseCineCameraToCineCamera(UCineCameraComponent* BaseCineCamera, UCineCameraComponent* ToCineCamera);
    
    UFUNCTION(BlueprintCallable)
    static EPlayerID ConvertSAStoPlayerID(E_SASKindNative SasKind);
    
    UFUNCTION(BlueprintCallable)
    static E_SASKindNative ConvertPlayerIDtoSAS(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    static FString ConvertAssetPathPlatformName(const FString& Path);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ConstructLocalEntitleData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool CompareSkeleton(UAnimSequence* AnimSequence, USkeletalMeshComponent* SkelMeshComp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearPlayerOverlapEvent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ClearMainViewTemporalBuffer();
    
    UFUNCTION(BlueprintCallable)
    static FPostProcessSettings CalcStaticCapturePostProcessSettings(USceneCaptureComponent2D* SceneCapture, TArray<APostProcessVolume*> PostProcessLists, TArray<FPostProcessSettings> AddPPSs, FVector Location, float AddPPSPriority, bool CheckEnable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FPostProcessSettings CalcScenePostProcessVolume(UObject* WorldContextObject, FVector Location, bool CheckEnable);
    
    UFUNCTION(BlueprintCallable)
    static FPostProcessSettings CalcSceneCapturePostProcessSettings(USceneCaptureComponent2D* SceneCapture, TArray<APostProcessVolume*> PostProcessLists, FVector Location, bool CheckEnable);
    
    UFUNCTION(BlueprintCallable)
    static FTransform CalcRootMotionTransform(USkeletalMeshComponent* Mesh, bool bWorld);
    
    UFUNCTION(BlueprintCallable)
    static FPostProcessSettings CalcPostProcessVolume(TArray<APostProcessVolume*> PostProcessLists, FVector Location, bool CheckEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BitFlagOn(int32 Flag, int32 bitIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BitFlagOff(int32 Flag, int32 bitIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BitFlagCheck(int32 Flag, int32 bitIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BackToTitle(const UObject* WorldContextObject, const bool bAccountReset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ApplyDLC(const UObject* WorldContextObject, FName contentsName, bool isForceApply);
    
    UFUNCTION(BlueprintCallable)
    static void AddStageParameterSettings(const FStageParameterSettings& BaseSetting, const FStageParameterSettings& OverrideSetting, float Weight, FStageParameterSettings& OutSettings);
    
    UFUNCTION(BlueprintCallable)
    static FPostProcessSettings AddPostProcessSettingsCamera(const FPostProcessSettings& BaseSettings, UCineCameraComponent* OverrideCamera);
    
    UFUNCTION(BlueprintCallable)
    static FPostProcessSettings AddPostProcessSettings(const FPostProcessSettings& BaseSettings, const FPostProcessSettings& OverrideSettings, float Weight);
    
    UFUNCTION(BlueprintCallable)
    static FWeightedBlendables AddPostProcessMaterials(const FWeightedBlendables& BaseMaterials, const FWeightedBlendables& OverrideMaterials, float Weight);
    
    UFUNCTION(BlueprintCallable)
    static FString AddAssetPathSuffix(const FString& Path, const FString& Suffix, int32 LastIndex);
    
    UFUNCTION(BlueprintCallable)
    static FString AddAssetPathPrefix(const FString& Path, const FString& Prefix, int32 Index);
    
};

