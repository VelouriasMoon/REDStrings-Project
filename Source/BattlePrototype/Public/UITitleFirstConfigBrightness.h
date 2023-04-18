#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UITitleFirstConfigBrightness.generated.h"

class UImage;
class UPaperFlipbook;
class UREDHorizonFlipbookWidget;
class UREDOverlay;
class UREDTextBlock;
class USpacer;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITitleFirstConfigBrightness : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxX;
    
public:
    UUITitleFirstConfigBrightness();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isBack() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UImage* imageSlider, UTextBlock* textTopDescription, UTextBlock* textBottomDescription, UREDOverlay* gauge_set, USpacer* guideSpacer);
    
    UFUNCTION(BlueprintCallable)
    void initializeIndex(UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UREDTextBlock* textIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitializeArrowLR(bool IsRight, UREDHorizonFlipbookWidget* Widget, UPaperFlipbook* defaultPF, UPaperFlipbook* selectPF, UPaperFlipbook* selectInPF, UPaperFlipbook* selectOutPF, UPaperFlipbook* decisionPF);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void applyBrightness(float fValue);
    
};

