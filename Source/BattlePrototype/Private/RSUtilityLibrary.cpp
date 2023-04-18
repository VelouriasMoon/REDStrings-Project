#include "RSUtilityLibrary.h"
#include "Templates/SubclassOf.h"

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

void URSUtilityLibrary::VisionSimulatorReturnAjitoFunc(const UObject* WorldContextObject) {
}

void URSUtilityLibrary::VisionSimulatorRetryActorStopFunc(const UObject* WorldContextObject) {
}

void URSUtilityLibrary::UpdateDLCInfo(const UObject* WorldContextObject, TArray<FName> entitledContentsList, TArray<FName> invalidContentsList, bool isInvalidDLCInvalidation) {
}

void URSUtilityLibrary::UpdateBoundsComponent(USceneComponent* Component) {
}

void URSUtilityLibrary::UnloadLevelInstance(UObject* WorldContextObject, ULevelStreamingDynamic* LevelStreaming) {
}

void URSUtilityLibrary::StartDeadGameOverPreWork(const UObject* WorldContextObject) {
}

AActor* URSUtilityLibrary::SpawnActorFromBPFilePath(UObject* WorldContextObject, const FString& Path) {
    return NULL;
}

void URSUtilityLibrary::ShippingDebugString(const FString& outString) {
}

void URSUtilityLibrary::SetUROParameter(USkinnedMeshComponent* Mesh, TArray<float> Thesholds, int32 MaxEvalRateForInterpolation, int32 BaseNonRenderedUpdateRate) {
}

void URSUtilityLibrary::SetupPPMaskParticlenative(UObject* WorldContextObject, TArray<ASequencerParticle*>& SequencerParticles, TArray<int32>& RestoreCustomStencil, bool Enable) {
}

void URSUtilityLibrary::SetShadowMapAtlasTargetsEnabled(bool Enabled) {
}

void URSUtilityLibrary::SetRenderAfterDOF(UMaterial* Material, bool IsEnable) {
}

void URSUtilityLibrary::SetPlayTrial2Flag(UObject* WorldContextObject, const bool bYuito, const bool Flag) {
}

void URSUtilityLibrary::SetPicturizeQuality(int32 Quality) {
}

void URSUtilityLibrary::SetMainViewOverrideAA(bool bOverride, int32 AAMethod) {
}

void URSUtilityLibrary::SetLightChannnel(UPrimitiveComponent* Primitive, bool Channel0, bool Channel1, bool Channel2) {
}

void URSUtilityLibrary::SetGameViewRenderLayer(uint8 RenderLayer) {
}

void URSUtilityLibrary::SetGamePausedRS(const UObject* WorldContextObject, bool bPaused, FName ClaimantName, bool bPauseInputManager) {
}

void URSUtilityLibrary::SetForcedLOD(USceneComponent* Mesh, int32 lodIndex, bool bApplyChiledComponent) {
}

void URSUtilityLibrary::SetEnableURO(USkinnedMeshComponent* Mesh, bool bEnable) {
}

void URSUtilityLibrary::SetDisplayBrightnessNative(UObject* WorldContextObject, int32 Brightness) {
}

void URSUtilityLibrary::SetCelLookLightDirection(FVector LightDirection) {
}

void URSUtilityLibrary::SetBgEdgeDriveParameter(float Length, float Smooth, float ColorShift, float Parameter4, float EdgeThresholdNomrmal, float EdgeThresholdLuminance, float Parameter7, float Parameter8) {
}

void URSUtilityLibrary::SetBgEdgeDriveLocation(FVector Location) {
}

void URSUtilityLibrary::SetBgEdgeDriveColor(FLinearColor InnerColor, FLinearColor OuterColor) {
}

void URSUtilityLibrary::SetAddContentsNewFlag(const UObject* WorldContextObject, FName contentsName, const bool Flag) {
}

void URSUtilityLibrary::SaveDataLoadAfterParamAdjust(const UObject* WorldContextObject) {
}

void URSUtilityLibrary::RestorePPMaskParticlenative(UObject* WorldContextObject, const TArray<ASequencerParticle*>& SequencerParticles, const TArray<int32>& RestoreCustomStencil) {
}

void URSUtilityLibrary::ResetRenderTargets(const UObject* WorldContextObject) {
}

void URSUtilityLibrary::ReplaceMaterialInstancePlatformTexture(UMaterialInstanceDynamic* MaterialInstance) {
}

void URSUtilityLibrary::ReplaceMaterialInstanceFromImagePlatformTexture(UImage* Image) {
}

FPostProcessSettings URSUtilityLibrary::RemovePostProcessMaterialFromPPS(const FPostProcessSettings& BaseSettings, UMaterialInterface* RemoveMaterial) {
    return FPostProcessSettings{};
}

void URSUtilityLibrary::RemovePostProcessMaterialFromComponent(UPostProcessComponent* PPComponent, UMaterialInterface* RemoveMaterial) {
}

void URSUtilityLibrary::RefreshSkinMeshSkipAnimNotify(USkeletalMeshComponent* SkeletalMesh) {
}

void URSUtilityLibrary::RefreshSkinMesh(USkinnedMeshComponent* SkinMesh) {
}

void URSUtilityLibrary::RedUnImplement() {
}

void URSUtilityLibrary::RedEnsure(bool isCheck, const FString& Message) {
}

void URSUtilityLibrary::RedAssert(bool isCheck, const FString& Message) {
}

void URSUtilityLibrary::OutputNowTime(const FString& LogText) {
}

AActor* URSUtilityLibrary::LoadSoftObjectActor(TSoftObjectPtr<AActor> Target) {
    return NULL;
}

UObject* URSUtilityLibrary::LoadSoftObject(TSoftObjectPtr<UObject> Target) {
    return NULL;
}

TSubclassOf<AActor> URSUtilityLibrary::LoadSoftClassActor(TSoftClassPtr<AActor> Target) {
    return NULL;
}

UClass* URSUtilityLibrary::LoadSoftClass(TSoftClassPtr<UObject> Target) {
    return NULL;
}

UObject* URSUtilityLibrary::LoadObjectGeneric(const FString& FilePath) {
    return NULL;
}

UDataTable* URSUtilityLibrary::LoadDataTable(const FString& FilePath) {
    return NULL;
}

void URSUtilityLibrary::LoadAssetFromStringAssetReference(UObject* WorldContextObject, FSoftObjectPath StringAsset, URSUtilityLibrary::FOnAssetLoaded OnLoaded, FLatentActionInfo LatentInfo, bool NoFindCheck) {
}

void URSUtilityLibrary::LevelChangeBeforeWorkFromIngame(const UObject* WorldContextObject) {
}

bool URSUtilityLibrary::IsRootMotionAnimMontage(UAnimMontage* anim) {
    return false;
}

bool URSUtilityLibrary::IsNotAppliedDLCAndReceiveBrainMessage(UObject* WorldContextObject) {
    return false;
}

bool URSUtilityLibrary::IsNotAppliedDLC(const UObject* WorldContextObject, TArray<FName>& notAppliedAddContentsNameList, const bool isPurchasedOnly) {
    return false;
}

bool URSUtilityLibrary::IsNewDLC(const UObject* WorldContextObject, bool isParamUpdate) {
    return false;
}

bool URSUtilityLibrary::IsGameClearThisPlay(const UObject* WorldContextObject) {
    return false;
}

bool URSUtilityLibrary::IsExistNotInformPurchasedAddContents(const UObject* WorldContextObject, TArray<FName>& addContentsNameList, const bool isUpdateSystemSave) {
    return false;
}

bool URSUtilityLibrary::IsExistNotInformNewAddContents(const UObject* WorldContextObject, TArray<FName>& addContentsNameList, const bool isUpdateSystemSave) {
    return false;
}

bool URSUtilityLibrary::IsDLCOverPossession(const UObject* WorldContextObject, FName contentsName) {
    return false;
}

bool URSUtilityLibrary::IsDLCHaveNoRightsInApplied(const UObject* WorldContextObject, TArray<FName> appliedAddContentsNameList) {
    return false;
}

bool URSUtilityLibrary::IsDisplayVertical(bool& IsVertical) {
    return false;
}

bool URSUtilityLibrary::IsAppliedDLC(const UObject* WorldContextObject, FName contentsName) {
    return false;
}

bool URSUtilityLibrary::IsApplicationActive() {
    return false;
}

bool URSUtilityLibrary::IsAnimMontageStoped(UAnimInstance* AnimInstance, UAnimSequenceBase* anim) {
    return false;
}

bool URSUtilityLibrary::IsAllSlotNotAppliedAndNotNotifiedDLC(const UObject* WorldContextObject, TArray<FName>& resultAddContentsNameList) {
    return false;
}

bool URSUtilityLibrary::IsAddContentsNewFlag(const UObject* WorldContextObject, FName contentsName) {
    return false;
}

void URSUtilityLibrary::InvalidDLCInvalidation(const UObject* WorldContextObject, TArray<FName> invalidContentsList) {
}

bool URSUtilityLibrary::HasWorldEndOfFrameUpdates(const UObject* WorldContextObject) {
    return false;
}

bool URSUtilityLibrary::HasSimpleCollision(UPrimitiveComponent* Primitive) {
    return false;
}

void URSUtilityLibrary::GeWorldPostProcesstEnabledMaterials(UObject* WorldContextObject, FVector Location, TArray<UMaterialInterface*>& OutMaterials, TArray<FString>& OutMaterialNames) {
}

TArray<APostProcessVolume*> URSUtilityLibrary::GetWorldPostProcessVolume(UObject* WorldContextObject) {
    return TArray<APostProcessVolume*>();
}

float URSUtilityLibrary::GetUROUpdateRate(USkinnedMeshComponent* Mesh) {
    return 0.0f;
}

void URSUtilityLibrary::GetToday(const UObject* WorldContextObject, int32& Year, int32& Month, int32& Day) {
}

bool URSUtilityLibrary::GetSystemAvailableWindowedResolutions(const TArray<FScreenResolutionSetting> InResolutions, TArray<FScreenResolutionSetting>& OutResolutions, bool bIgnoreRefreshRate) {
    return false;
}

bool URSUtilityLibrary::GetSystemAvailableResolutions(TArray<FScreenResolutionSetting>& Resolutions, bool bIgnoreRefreshRate) {
    return false;
}

bool URSUtilityLibrary::GetSystemAvailableFullscreenResolutions(const TArray<FScreenResolutionSetting> InResolutions, TArray<FScreenResolutionSetting>& OutResolutions, bool bIgnoreRefreshRate) {
    return false;
}

UStaticMeshComponent* URSUtilityLibrary::GetStaticMeshFromActor(AActor* Actor) {
    return NULL;
}

TArray<UStaticMeshComponent*> URSUtilityLibrary::GetStaticMeshArrayFromActor(AActor* Actor) {
    return TArray<UStaticMeshComponent*>();
}

USkeletalMeshComponent* URSUtilityLibrary::GetSkeletalMeshFromActor(AActor* Actor) {
    return NULL;
}

bool URSUtilityLibrary::GetScreenResolution(FVector2D& resolution, bool& IsVertical) {
    return false;
}

URSGameInstance* URSUtilityLibrary::GetRSGameInstance(const UObject* WorldContextObject) {
    return NULL;
}

FName URSUtilityLibrary::GetPrimaryAssetTypeName(const FPrimaryAssetType& assetType) {
    return NAME_None;
}

bool URSUtilityLibrary::GetPlayTrial2Flag(UObject* WorldContextObject, const bool bYuito) {
    return false;
}

bool URSUtilityLibrary::GetNativeScreenResolution(FVector2D& resolution, bool& IsVertical) {
    return false;
}

float URSUtilityLibrary::GetMaxDistanceFactor(USkinnedMeshComponent* Mesh) {
    return 0.0f;
}

bool URSUtilityLibrary::GetInitialScreenResolution(FVector2D& resolution, bool& IsVertical) {
    return false;
}

uint8 URSUtilityLibrary::GetGameViewRenderLayer() {
    return 0;
}

FRotator URSUtilityLibrary::GetCurrentCameraRotation(const UObject* WorldContextObject) {
    return FRotator{};
}

FTransform URSUtilityLibrary::GetComposedRefPoseTransform(USkeletalMesh* SkeletalMesh, FName BoneName) {
    return FTransform{};
}

FVector URSUtilityLibrary::GetCelLookLightDirection() {
    return FVector{};
}

void URSUtilityLibrary::GetCelLookAmbientReplaceParam(FLinearColor& OutColor, float& OutRate) {
}

TSubclassOf<AActor> URSUtilityLibrary::GetAssetUClass(FName ClassName, FName AssetName) {
    return NULL;
}

bool URSUtilityLibrary::GetAppropriateSystemAvailableResolutions(FScreenResolutionSetting& resolution, const int32 Width, const int32 Height, const bool bIgnoreRefreshRate) {
    return false;
}

TArray<AActor*> URSUtilityLibrary::GetActorsFromLevelStreaming(ULevelStreaming* Level) {
    return TArray<AActor*>();
}

AActor* URSUtilityLibrary::GetActorFromTagForLevelName(const UObject* WorldContextObject, FName Tag, FName LevelName) {
    return NULL;
}

AActor* URSUtilityLibrary::GetActorFromTagConst(const UObject* WorldObject, const FName& Tag) {
    return NULL;
}

AActor* URSUtilityLibrary::GetActorFromTag(UObject* WorldObject, FName Tag) {
    return NULL;
}

void URSUtilityLibrary::GameOverActorStopFunc(const UObject* WorldContextObject) {
}

void URSUtilityLibrary::GameClearSaveParamAdjust(const UObject* WorldContextObject) {
}

void URSUtilityLibrary::ForceUploadGPUScene() {
}

void URSUtilityLibrary::ForceGC_NoEditor(bool bFullPurge) {
}

void URSUtilityLibrary::ForceGC(bool bFullPurge) {
}

void URSUtilityLibrary::ExNewGameParamAdjust(const UObject* WorldContextObject, const bool isTakeOverPlayerLv, const bool isTakeOverBrainMap) {
}

void URSUtilityLibrary::DoFlushRenderingCommands() {
}

void URSUtilityLibrary::DebugLogWarning(FText warningText) {
}

void URSUtilityLibrary::DebugDisplayURO(USkinnedMeshComponent* Mesh, bool bDisplay) {
}

UTextureRenderTarget2D* URSUtilityLibrary::CreateRenderTarget2DCustom(UObject* WorldContextObject, int32 Width, int32 Height, ERenderTargetCustomFormat Format, TEnumAsByte<TextureAddress> AddressX, TEnumAsByte<TextureAddress> AddressY, bool LinearGamma) {
    return NULL;
}

UMaterialInstanceDynamic* URSUtilityLibrary::CreateDynamicMaterialInstanceFromName_Particle(URSParticleSystemComponentBase* RSParticleComponent, const FName EmitterName, UMaterialInterface* SourceMaterial) {
    return NULL;
}

UMaterialInstanceDynamic* URSUtilityLibrary::CreateDynamicMaterialInstanceFromName_Mesh(UMeshComponent* MeshComponent, const FName MaterialName, UMaterialInterface* SourceMaterial) {
    return NULL;
}

void URSUtilityLibrary::CopySequencerTemplateToCineCamera(ARSLevelSequenceActor* Sequencer, FMovieSceneObjectBindingID BindingID, UCineCameraComponent* CineCamera) {
}

void URSUtilityLibrary::CopyBaseCineCameraToCineCamera(UCineCameraComponent* BaseCineCamera, UCineCameraComponent* ToCineCamera) {
}

EPlayerID URSUtilityLibrary::ConvertSAStoPlayerID(E_SASKindNative SasKind) {
    return EPlayerID::Invalid;
}

E_SASKindNative URSUtilityLibrary::ConvertPlayerIDtoSAS(EPlayerID playerId) {
    return E_SASKindNative::Fire;
}

FString URSUtilityLibrary::ConvertAssetPathPlatformName(const FString& Path) {
    return TEXT("");
}

bool URSUtilityLibrary::ConstructLocalEntitleData(const UObject* WorldContextObject) {
    return false;
}

bool URSUtilityLibrary::CompareSkeleton(UAnimSequence* AnimSequence, USkeletalMeshComponent* SkelMeshComp) {
    return false;
}

void URSUtilityLibrary::ClearPlayerOverlapEvent(const UObject* WorldContextObject) {
}

void URSUtilityLibrary::ClearMainViewTemporalBuffer() {
}

FPostProcessSettings URSUtilityLibrary::CalcStaticCapturePostProcessSettings(USceneCaptureComponent2D* SceneCapture, TArray<APostProcessVolume*> PostProcessLists, TArray<FPostProcessSettings> AddPPSs, FVector Location, float AddPPSPriority, bool CheckEnable) {
    return FPostProcessSettings{};
}

FPostProcessSettings URSUtilityLibrary::CalcScenePostProcessVolume(UObject* WorldContextObject, FVector Location, bool CheckEnable) {
    return FPostProcessSettings{};
}

FPostProcessSettings URSUtilityLibrary::CalcSceneCapturePostProcessSettings(USceneCaptureComponent2D* SceneCapture, TArray<APostProcessVolume*> PostProcessLists, FVector Location, bool CheckEnable) {
    return FPostProcessSettings{};
}

FTransform URSUtilityLibrary::CalcRootMotionTransform(USkeletalMeshComponent* Mesh, bool bWorld) {
    return FTransform{};
}

FPostProcessSettings URSUtilityLibrary::CalcPostProcessVolume(TArray<APostProcessVolume*> PostProcessLists, FVector Location, bool CheckEnable) {
    return FPostProcessSettings{};
}

int32 URSUtilityLibrary::BitFlagOn(int32 Flag, int32 bitIndex) {
    return 0;
}

int32 URSUtilityLibrary::BitFlagOff(int32 Flag, int32 bitIndex) {
    return 0;
}

bool URSUtilityLibrary::BitFlagCheck(int32 Flag, int32 bitIndex) {
    return false;
}

void URSUtilityLibrary::BackToTitle(const UObject* WorldContextObject, const bool bAccountReset) {
}

bool URSUtilityLibrary::ApplyDLC(const UObject* WorldContextObject, FName contentsName, bool isForceApply) {
    return false;
}

void URSUtilityLibrary::AddStageParameterSettings(const FStageParameterSettings& BaseSetting, const FStageParameterSettings& OverrideSetting, float Weight, FStageParameterSettings& OutSettings) {
}

FPostProcessSettings URSUtilityLibrary::AddPostProcessSettingsCamera(const FPostProcessSettings& BaseSettings, UCineCameraComponent* OverrideCamera) {
    return FPostProcessSettings{};
}

FPostProcessSettings URSUtilityLibrary::AddPostProcessSettings(const FPostProcessSettings& BaseSettings, const FPostProcessSettings& OverrideSettings, float Weight) {
    return FPostProcessSettings{};
}

FWeightedBlendables URSUtilityLibrary::AddPostProcessMaterials(const FWeightedBlendables& BaseMaterials, const FWeightedBlendables& OverrideMaterials, float Weight) {
    return FWeightedBlendables{};
}

FString URSUtilityLibrary::AddAssetPathSuffix(const FString& Path, const FString& Suffix, int32 LastIndex) {
    return TEXT("");
}

FString URSUtilityLibrary::AddAssetPathPrefix(const FString& Path, const FString& Prefix, int32 Index) {
    return TEXT("");
}

URSUtilityLibrary::URSUtilityLibrary() {
}

