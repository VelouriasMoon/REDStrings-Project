#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "ManagerInterface.h"
#include "NpcMergeMeshResource.h"
#include "RSActorSystemBase.h"
#include "ResourceMipPrestreamEventTable.h"
#include "ResourceManager.generated.h"

class ASnowCaptureBase;
class UDataTable;
class UMaterialInstance;
class UObject;
class USkeletalMesh;
class UStaticMesh;
class UTexture2D;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AResourceManager : public ARSActorSystemBase, public IManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FNpcMergeMeshResource> NpcMergeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MipPrestreamMeshDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> MipPrestreams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> MipPrestreamTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> NotExistsAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> ExistsAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UTexture2D*, int32> ReleaseTransientTextures;
    
public:
    AResourceManager();
    UFUNCTION(BlueprintCallable)
    void SetMipPrestreamMesh(FName MeshName, bool bLoad, bool HighPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetMipPrestreamEvent(const FResourceMipPrestreamEventTable& EventData, bool bLoad);
    
    UFUNCTION(BlueprintCallable)
    void ResetMipPrestreamMesh(FName MeshName, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ResetMipPrestreamEvent(const FResourceMipPrestreamEventTable& EventData, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllMipPrestream();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllLockMipPrestreamMesh();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProtectedGetMipPrestreamPlayerSoftMeshes(TArray<TSoftObjectPtr<USkeletalMesh>>& SkeletalMeshes, TArray<TSoftObjectPtr<UObject>>& Attachment1Meshes, TArray<TSoftObjectPtr<UMaterialInstance>>& Attachment1Materials, TArray<TSoftObjectPtr<UObject>>& Attachment2Meshes, TArray<TSoftObjectPtr<UMaterialInstance>>& Attachment2Materials, TArray<TSoftObjectPtr<UObject>>& Attachment3Meshes, TArray<TSoftObjectPtr<UMaterialInstance>>& Attachment3Materials, EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProtectedGetMipPrestreamPlayerMeshes(TArray<USkeletalMesh*>& SkeletalMeshes, TArray<UStaticMesh*>& StaticMeshes, EPlayerID playerId, bool bLoad);
    
public:
    UFUNCTION(BlueprintCallable)
    void LockMipPrestreamMesh(const TArray<FName>& MeshNames);
    
    UFUNCTION(BlueprintCallable)
    bool IsReadyMipPrestreamMesh(FName MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool IsReadyAllMipPrestream();
    
    UFUNCTION(BlueprintCallable)
    void GetSnowCaptures(TArray<ASnowCaptureBase*>& OutSnowCaptures);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMipPrestreamTextureNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMipPrestreamMeshNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMipPrestreamLockMeshNum();
    
    UFUNCTION(BlueprintCallable)
    void DumpNPCMergeMesh();
    
    UFUNCTION(BlueprintCallable)
    void DumpMipPrestream();
    
    UFUNCTION(BlueprintCallable)
    void ClearNotExistsList();
    
    UFUNCTION(BlueprintCallable)
    bool CheckNotExists(FName Name);
    
    UFUNCTION(BlueprintCallable)
    bool CheckExists(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void AddReleaseTransientTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    void AddNotExistsList(FName Name);
    
    
    // Fix for true pure virtual functions not being implemented
};

