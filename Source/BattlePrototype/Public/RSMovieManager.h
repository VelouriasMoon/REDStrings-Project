#pragma once
#include "CoreMinimal.h"
#include "ManaDummy\EManaComponentStatus.h"
#include "GameFramework/Actor.h"
#include "ManagerInterface.h"
#include "MoviePauseEventDelegate.h"
#include "RSMovieManager.generated.h"

class UImage;
class UObject;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ARSMovieManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoviePauseEvent OnMoviePauseEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UObject*, int32> ReleaseManaTextures;
    
public:
    ARSMovieManager();
    UFUNCTION(BlueprintCallable)
    void TextureRelease();
    
    UFUNCTION(BlueprintCallable)
    void SetMovieTextureNative(UManaTexture* movieTexture, UMaterialInstanceDynamic* manaMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMovieTextureAndPrepare(UManaTexture* movieTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetMoviePrepareSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetMovieImageTexture(UImage* Image);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetIndividualSetting(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetManaComponentOtherNative();
    
    UFUNCTION(BlueprintCallable)
    void ResetFlags(UManaTexture* mana);
    
    UFUNCTION(BlueprintCallable)
    bool LoadMovieTexture(const FString& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    EManaComponentStatus GetStatusNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UManaTexture* GetManaTextureNative() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

