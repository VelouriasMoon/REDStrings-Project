#include "HorizonFileSystem.h"

class UFont;
class UHorizonFileSystem;
class UMaterial;
class UObject;
class UPaperFlipbook;
class USoundBase;
class UTexture2D;

UObject* UHorizonFileSystem::LoadUAsset(const FString& packageFilePath) {
    return NULL;
}

UTexture2D* UHorizonFileSystem::LoadTexture2D(const FString& packageFilePath, int32& OutWidth, int32& OutHeight) {
    return NULL;
}

USoundBase* UHorizonFileSystem::LoadSound(const FString& packageFilePath) {
    return NULL;
}

UPaperFlipbook* UHorizonFileSystem::LoadPaperFlipbook(const FString& packageFilePath) {
    return NULL;
}

UMaterial* UHorizonFileSystem::LoadMaterial(const FString& packageFilePath) {
    return NULL;
}

UFont* UHorizonFileSystem::LoadFont(const FString& packageFilePath) {
    return NULL;
}

UHorizonFileSystem* UHorizonFileSystem::GetInstance() {
    return NULL;
}

void UHorizonFileSystem::DestroyInstance() {
}

void UHorizonFileSystem::CreateDirectoryRecursively(const FString& FolderToMake) {
}

UHorizonFileSystem::UHorizonFileSystem() {
}

