#pragma once
#include "CoreMinimal.h"
#include "EHelpImageType.h"
#include "TutoMoviePlayType.h"
#include "UIBase.h"
#include "UITutoTipsParts.generated.h"

class UTextBlock;
class UTexture2D;
class UUIHelpParts;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITutoTipsParts : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMovieStopFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHelpImageType ImageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString pathname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Load;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Failure;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PathData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TutoMoviePlayType PlaySelect;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UTexture2D*, int32> ReleaseTipsTextures;
    
public:
    UUITutoTipsParts();
    UFUNCTION(BlueprintCallable)
    void TextureRelease();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopMovieForce();
    
    UFUNCTION(BlueprintCallable)
    void SetVisiblePageUI(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void setPageText(const FString& MainText, const FString& TitleText, int32 pageNo, int32 pageMax);
    
    UFUNCTION(BlueprintCallable)
    void setImageType(const FString& NewPathname, EHelpImageType NewImageType);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* LoadTipsTexture(const FString& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool isPlayMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool isMovieStop();
    
    UFUNCTION(BlueprintCallable)
    bool isLoadFailure();
    
    UFUNCTION(BlueprintCallable)
    bool isLoad();
    
    UFUNCTION(BlueprintCallable)
    void InitializeText(UTextBlock* textTitle, UTextBlock* TextMain, UTextBlock* textPage1, UTextBlock* textPage2, UTextBlock* textSlash);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool initializeMovie();
    
    UFUNCTION(BlueprintCallable)
    void InitializeArrow(int32 Index, UUIHelpParts* arrow);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnime(UWidgetAnimation* default1_, UWidgetAnimation* default2_, UWidgetAnimation* default_none);
    
};

