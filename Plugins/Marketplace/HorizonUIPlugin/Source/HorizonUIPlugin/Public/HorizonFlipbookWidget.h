#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "HorizonFlipbookWidget.generated.h"

class UPaperFlipbook;

UCLASS(Blueprintable)
class HORIZONUI_API UHorizonFlipbookWidget : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperFlipbook* PaperFlipbook;
    
    UHorizonFlipbookWidget();
    UFUNCTION(BlueprintCallable)
    void StopAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetFlipbook(UPaperFlipbook* InFlipbook);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAnimationDuration(float InDuration);
    
    UFUNCTION(BlueprintCallable)
    void ResumeAnimation();
    
    UFUNCTION(BlueprintCallable)
    void ResetAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PauseAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEndAnimation() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentAnimationDuration();
    
};

