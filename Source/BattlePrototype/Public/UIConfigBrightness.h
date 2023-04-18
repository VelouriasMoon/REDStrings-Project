#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIConfigBrightness.generated.h"

class UImage;
class UPaperFlipbook;
class UREDHorizonFlipbookWidget;
class UREDOverlay;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIConfigBrightness : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxX;
    
public:
    UUIConfigBrightness();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UImage* imageSlider, UTextBlock* textDescription, UREDOverlay* gauge_set);
    
    UFUNCTION(BlueprintCallable)
    void InitializeArrowLR(bool IsRight, UREDHorizonFlipbookWidget* Widget, UPaperFlipbook* defaultPF, UPaperFlipbook* selectPF, UPaperFlipbook* selectInPF, UPaperFlipbook* selectOutPF, UPaperFlipbook* decisionPF);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void applyBrightness(float fValue);
    
};

