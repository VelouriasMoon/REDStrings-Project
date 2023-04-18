#pragma once
#include "CoreMinimal.h"
#include "UObject/PrimaryAssetId.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AssetFuncLib.generated.h"

class UObject;
class USkeletalMeshComponent;
class UTexture2D;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UAssetFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAssetFuncLib();
    UFUNCTION(BlueprintCallable)
    static void SetForceMipLevelsToBeResidentByTexture(UTexture2D* Texture, float Seconds, int32 CinematicLODGroupMask, bool HighProirity);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceMipLevelsToBeResidentBySkeletalMeshComp(USkeletalMeshComponent* SkelMeshComp, float Seconds, int32 CinematicLODGroupMask, bool HighProirity);
    
    UFUNCTION(BlueprintCallable)
    static void SetChapterChunkPriority(int32 ChapterNo);
    
    UFUNCTION(BlueprintCallable)
    static void ResetForceMipLevelsToBeResidentByTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    static void ResetForceMipLevelsToBeResidentBySkeletalMeshComp(USkeletalMeshComponent* SkelMeshComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ObjectSoftRefToStringRaw(const TSoftObjectPtr<UObject>& Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ObjectSoftRefToString(const TSoftObjectPtr<UObject>& Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ObjectSoftRefToName(const TSoftObjectPtr<UObject>& Object);
    
    UFUNCTION(BlueprintCallable)
    static void ModifyAssets(TArray<UObject*> Assets);
    
    UFUNCTION(BlueprintCallable)
    static bool IsReadyForceMipLevelToBeResidentByTexture(UTexture2D* Texture, int32 requestLevel);
    
    UFUNCTION(BlueprintCallable)
    static bool IsReadyForceMipLevelsToBeResidentByTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFullInstallPackage();
    
    UFUNCTION(BlueprintCallable)
    static bool IsChunkLoaded(const int32 ChunkId, const bool isNotExistError);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChapterChunkLoaded(int32 ChapterNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPrimaryAssetPath(FPrimaryAssetId PrimaryAssetId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPackagePath(UObject* Object, FName& OutName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetAssetSoftDependencies(FName AssetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetAssetSearchableNameDependencies(FName AssetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetAssetPackagesDependencies(FName AssetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetAssetManageDependencies(FName AssetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetAssetHardDependencies(FName AssetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetAssetDependencies(FName AssetName, bool hard, bool soft, bool searchableName, bool manage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetAssetAllDependencies(FName AssetName);
    
};

