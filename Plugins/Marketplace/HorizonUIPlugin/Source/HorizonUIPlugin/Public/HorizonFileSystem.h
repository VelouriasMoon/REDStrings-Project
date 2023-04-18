#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HorizonFileSystem.generated.h"

class UFont;
class UHorizonFileSystem;
class UMaterial;
class UPaperFlipbook;
class USoundBase;
class UTexture2D;

UCLASS(Blueprintable, Config=HorizonPlugin)
class HORIZONUI_API UHorizonFileSystem : public UObject {
    GENERATED_BODY()
public:
    UHorizonFileSystem();
    UFUNCTION(BlueprintCallable)
    UObject* LoadUAsset(const FString& packageFilePath);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* LoadTexture2D(const FString& packageFilePath, int32& OutWidth, int32& OutHeight);
    
    UFUNCTION(BlueprintCallable)
    USoundBase* LoadSound(const FString& packageFilePath);
    
    UFUNCTION(BlueprintCallable)
    UPaperFlipbook* LoadPaperFlipbook(const FString& packageFilePath);
    
    UFUNCTION(BlueprintCallable)
    UMaterial* LoadMaterial(const FString& packageFilePath);
    
    UFUNCTION(BlueprintCallable)
    UFont* LoadFont(const FString& packageFilePath);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonFileSystem* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    static void DestroyInstance();
    
    UFUNCTION(BlueprintCallable)
    void CreateDirectoryRecursively(const FString& FolderToMake);
    
};

