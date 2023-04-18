#include "ResourceManager.h"

class ASnowCaptureBase;
class UMaterialInstance;
class UObject;
class USkeletalMesh;
class UStaticMesh;
class UTexture2D;

void AResourceManager::SetMipPrestreamMesh(FName MeshName, bool bLoad, bool HighPriority) {
}

void AResourceManager::SetMipPrestreamEvent(const FResourceMipPrestreamEventTable& EventData, bool bLoad) {
}

void AResourceManager::ResetMipPrestreamMesh(FName MeshName, bool bForce) {
}

void AResourceManager::ResetMipPrestreamEvent(const FResourceMipPrestreamEventTable& EventData, bool bForce) {
}

void AResourceManager::ResetAllMipPrestream() {
}

void AResourceManager::ResetAllLockMipPrestreamMesh() {
}

void AResourceManager::ProtectedGetMipPrestreamPlayerSoftMeshes_Implementation(TArray<TSoftObjectPtr<USkeletalMesh>>& SkeletalMeshes, TArray<TSoftObjectPtr<UObject>>& Attachment1Meshes, TArray<TSoftObjectPtr<UMaterialInstance>>& Attachment1Materials, TArray<TSoftObjectPtr<UObject>>& Attachment2Meshes, TArray<TSoftObjectPtr<UMaterialInstance>>& Attachment2Materials, TArray<TSoftObjectPtr<UObject>>& Attachment3Meshes, TArray<TSoftObjectPtr<UMaterialInstance>>& Attachment3Materials, EPlayerID playerId) {
}

void AResourceManager::ProtectedGetMipPrestreamPlayerMeshes_Implementation(TArray<USkeletalMesh*>& SkeletalMeshes, TArray<UStaticMesh*>& StaticMeshes, EPlayerID playerId, bool bLoad) {
}

void AResourceManager::LockMipPrestreamMesh(const TArray<FName>& MeshNames) {
}

bool AResourceManager::IsReadyMipPrestreamMesh(FName MeshName) {
    return false;
}

bool AResourceManager::IsReadyAllMipPrestream() {
    return false;
}

void AResourceManager::GetSnowCaptures(TArray<ASnowCaptureBase*>& OutSnowCaptures) {
}

int32 AResourceManager::GetMipPrestreamTextureNum() {
    return 0;
}

int32 AResourceManager::GetMipPrestreamMeshNum() {
    return 0;
}

int32 AResourceManager::GetMipPrestreamLockMeshNum() {
    return 0;
}

void AResourceManager::DumpNPCMergeMesh() {
}

void AResourceManager::DumpMipPrestream() {
}

void AResourceManager::ClearNotExistsList() {
}

bool AResourceManager::CheckNotExists(FName Name) {
    return false;
}

bool AResourceManager::CheckExists(FName Name) {
    return false;
}

void AResourceManager::AddReleaseTransientTexture(UTexture2D* Texture) {
}

void AResourceManager::AddNotExistsList(FName Name) {
}

AResourceManager::AResourceManager() {
    this->MipPrestreamMeshDataTable = NULL;
}

