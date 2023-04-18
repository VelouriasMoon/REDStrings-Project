#include "AssetFuncLib.h"

class UObject;
class USkeletalMeshComponent;
class UTexture2D;

void UAssetFuncLib::SetForceMipLevelsToBeResidentByTexture(UTexture2D* Texture, float Seconds, int32 CinematicLODGroupMask, bool HighProirity) {
}

void UAssetFuncLib::SetForceMipLevelsToBeResidentBySkeletalMeshComp(USkeletalMeshComponent* SkelMeshComp, float Seconds, int32 CinematicLODGroupMask, bool HighProirity) {
}

void UAssetFuncLib::SetChapterChunkPriority(int32 ChapterNo) {
}

void UAssetFuncLib::ResetForceMipLevelsToBeResidentByTexture(UTexture2D* Texture) {
}

void UAssetFuncLib::ResetForceMipLevelsToBeResidentBySkeletalMeshComp(USkeletalMeshComponent* SkelMeshComp) {
}

FString UAssetFuncLib::ObjectSoftRefToStringRaw(const TSoftObjectPtr<UObject>& Object) {
    return TEXT("");
}

FString UAssetFuncLib::ObjectSoftRefToString(const TSoftObjectPtr<UObject>& Object) {
    return TEXT("");
}

FName UAssetFuncLib::ObjectSoftRefToName(const TSoftObjectPtr<UObject>& Object) {
    return NAME_None;
}

void UAssetFuncLib::ModifyAssets(TArray<UObject*> Assets) {
}

bool UAssetFuncLib::IsReadyForceMipLevelToBeResidentByTexture(UTexture2D* Texture, int32 requestLevel) {
    return false;
}

bool UAssetFuncLib::IsReadyForceMipLevelsToBeResidentByTexture(UTexture2D* Texture) {
    return false;
}

bool UAssetFuncLib::IsFullInstallPackage() {
    return false;
}

bool UAssetFuncLib::IsChunkLoaded(const int32 ChunkId, const bool isNotExistError) {
    return false;
}

bool UAssetFuncLib::IsChapterChunkLoaded(int32 ChapterNo) {
    return false;
}

FString UAssetFuncLib::GetPrimaryAssetPath(FPrimaryAssetId PrimaryAssetId) {
    return TEXT("");
}

bool UAssetFuncLib::GetPackagePath(UObject* Object, FName& OutName) {
    return false;
}

TArray<FName> UAssetFuncLib::GetAssetSoftDependencies(FName AssetName) {
    return TArray<FName>();
}

TArray<FName> UAssetFuncLib::GetAssetSearchableNameDependencies(FName AssetName) {
    return TArray<FName>();
}

TArray<FName> UAssetFuncLib::GetAssetPackagesDependencies(FName AssetName) {
    return TArray<FName>();
}

TArray<FName> UAssetFuncLib::GetAssetManageDependencies(FName AssetName) {
    return TArray<FName>();
}

TArray<FName> UAssetFuncLib::GetAssetHardDependencies(FName AssetName) {
    return TArray<FName>();
}

TArray<FName> UAssetFuncLib::GetAssetDependencies(FName AssetName, bool hard, bool soft, bool searchableName, bool manage) {
    return TArray<FName>();
}

TArray<FName> UAssetFuncLib::GetAssetAllDependencies(FName AssetName) {
    return TArray<FName>();
}

UAssetFuncLib::UAssetFuncLib() {
}

