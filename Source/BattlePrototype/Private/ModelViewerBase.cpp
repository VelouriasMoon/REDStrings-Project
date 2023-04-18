#include "ModelViewerBase.h"
#include "Templates/SubclassOf.h"

class AActor;
class ACameraActor;
class ANpcBase;
class ANpcSkeletalMeshActor;
class ARSCharacterBase;
class UObject;
class USaveGame;

void AModelViewerBase::SpawnCharacter(const int32 CharacterIndex) {
}

void AModelViewerBase::SortAssetDatalist(TArray<FAssetData>& AssetDataList) {
}

void AModelViewerBase::SetModelViewerCamera(ACameraActor* CameraActor) {
}




bool AModelViewerBase::PlayAnimation(UObject* MotionAsset, const bool isReplay, float InTimeToStartMontageAt) {
    return false;
}

bool AModelViewerBase::PauseAnimation() {
    return false;
}

void AModelViewerBase::OnChangeSelectCharacter(const int32 Index) {
}

bool AModelViewerBase::ModelViewerSave(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex) {
    return false;
}

USaveGame* AModelViewerBase::ModelViewerLoad(const FString& SlotName, const int32 UserIndex) {
    return NULL;
}


void AModelViewerBase::LoadCharacter(const int32 Index) {
}

bool AModelViewerBase::IsPlayAnimationMontage() {
    return false;
}

void AModelViewerBase::InitializePlayerInfo() {
}



TSubclassOf<ARSCharacterBase> AModelViewerBase::GetSelectCharacter() {
    return NULL;
}


TSoftClassPtr<ARSCharacterBase> AModelViewerBase::GetRSCharacterBase(const FString& assetPath) {
    return NULL;
}

TSoftClassPtr<ANpcSkeletalMeshActor> AModelViewerBase::GetNpcSkeletalMeshActor(const FString& assetPath) {
    return NULL;
}

TSoftClassPtr<ANpcBase> AModelViewerBase::GetNpcBase(const FString& assetPath) {
    return NULL;
}

ANpcSkeletalMeshActor* AModelViewerBase::GetModelViewerSkeletalNpc() {
    return NULL;
}

ANpcBase* AModelViewerBase::GetModelViewerPlayerNpc() {
    return NULL;
}

ARSCharacterBase* AModelViewerBase::GetModelViewerPlayer() {
    return NULL;
}

ACameraActor* AModelViewerBase::GetModelViewerCamera() {
    return NULL;
}

float AModelViewerBase::GetMaxAnimationTime() {
    return 0.0f;
}

void AModelViewerBase::GetFolderNameListByPath(TArray<FString>& FolderNameList, const FString& SearchFolderPathFromContents) {
}

FString AModelViewerBase::GetDebugDrawMotionInfo() {
    return TEXT("");
}

float AModelViewerBase::GetCurrentAnimationTime() {
    return 0.0f;
}

float AModelViewerBase::GetCurrentAnimationFrame(const int32 digit) {
    return 0.0f;
}

FString AModelViewerBase::GetActorReferenceToString(TSoftClassPtr<AActor> charaActor) {
    return TEXT("");
}

FString AModelViewerBase::GetActorReferencePackageName(TSoftClassPtr<AActor> charaActor) {
    return TEXT("");
}

FString AModelViewerBase::GetActorReferenceAssetName(TSoftClassPtr<AActor> charaActor) {
    return TEXT("");
}

void AModelViewerBase::Debug_CreateModelViewerSkeletalNpc(TSubclassOf<ANpcSkeletalMeshActor> characterBP, const FString& playerStartName) {
}

void AModelViewerBase::Debug_CreateModelViewerCharacterNpc(TSubclassOf<ANpcBase> characterBP, const FString& playerStartName) {
}

void AModelViewerBase::Debug_CreateModelViewerCharacter(TSubclassOf<ARSCharacterBase> characterBP, const FString& playerStartName) {
}



void AModelViewerBase::CreateCharacterFileList() {
}

void AModelViewerBase::CreateAnimationFileList(FName CharacterIdentifier, FName CharacterName) {
}

int32 AModelViewerBase::CompareFName(FName Param1, FName Param2) {
    return 0;
}

bool AModelViewerBase::CompareAssetPath(const FString& ModelBPDisplayName, const FString& AnimationPath) {
    return false;
}

void AModelViewerBase::ChangePrevIndex() {
}

void AModelViewerBase::ChangeNextIndex() {
}

void AModelViewerBase::AddCharacter(TArray<TSubclassOf<ARSCharacterBase>> List) {
}

void AModelViewerBase::AddActorReferenceInfo(TSoftClassPtr<AActor> charaActor) {
}

AModelViewerBase::AModelViewerBase() {
    this->_modelViewerCamera = NULL;
    this->_modelViewerPlayer = NULL;
    this->_modelViewerPlayerNpc = NULL;
    this->_modelViewerSkeletalNpc = NULL;
    this->selectIndex = 0;
    this->_PlayingMotionAsset = NULL;
    this->_PlayingMotionAssetLength = 0.00f;
}

