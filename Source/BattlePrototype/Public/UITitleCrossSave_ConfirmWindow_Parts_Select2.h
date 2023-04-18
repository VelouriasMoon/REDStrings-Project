#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UITitleCrossSave_ConfirmWindow_Parts_Select2.generated.h"

class UPaperFlipbook;
class UREDHorizonFlipbookWidget;
class UREDTextBlock;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITitleCrossSave_ConfirmWindow_Parts_Select2 : public UUIBase {
    GENERATED_BODY()
public:
    UUITitleCrossSave_ConfirmWindow_Parts_Select2();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis();
    
    UFUNCTION(BlueprintCallable)
    void initializeIndex(int32 Index, UUserWidget* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UWidgetAnimation* animEnable, UWidgetAnimation* animEnableIn, UWidgetAnimation* animEnableOut, UREDTextBlock* textIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitializeArrowLR(bool IsRight, UREDHorizonFlipbookWidget* Widget, UPaperFlipbook* defaultPF, UPaperFlipbook* selectPF, UPaperFlipbook* selectInPF, UPaperFlipbook* selectOutPF, UPaperFlipbook* decisionPF);
    
};

