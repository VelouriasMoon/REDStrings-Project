#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UITitleFirstConfirmSelect2.generated.h"

class UPaperFlipbook;
class UREDHorizonFlipbookWidget;
class UREDTextBlock;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITitleFirstConfirmSelect2 : public UUIBase {
    GENERATED_BODY()
public:
    UUITitleFirstConfirmSelect2();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis();
    
    UFUNCTION(BlueprintCallable)
    void initializeIndex(int32 Index, UUserWidget* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UWidgetAnimation* animEnable, UWidgetAnimation* animEnableIn, UWidgetAnimation* animEnableOut, UREDTextBlock* textIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitializeArrowLR(bool IsRight, UREDHorizonFlipbookWidget* Widget, UPaperFlipbook* defaultPF, UPaperFlipbook* selectPF, UPaperFlipbook* selectInPF, UPaperFlipbook* selectOutPF, UPaperFlipbook* decisionPF);
    
};

