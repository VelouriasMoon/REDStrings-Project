#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UITitleFirstLangaugeChange.generated.h"

class ARSTitleManager;
class UPaperFlipbook;
class UREDHorizonFlipbookWidget;
class UREDTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITitleFirstLangaugeChange : public UUIBase {
    GENERATED_BODY()
public:
    UUITitleFirstLangaugeChange();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetTitleManager(ARSTitleManager* TitleManager);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animDefault, UREDTextBlock* TextMain, UREDTextBlock* textLangauge);
    
    UFUNCTION(BlueprintCallable)
    void initializeIndex(UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UREDTextBlock* textIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitializeArrowLR(bool IsRight, UREDHorizonFlipbookWidget* Widget, UPaperFlipbook* defaultPF, UPaperFlipbook* selectPF, UPaperFlipbook* selectInPF, UPaperFlipbook* selectOutPF, UPaperFlipbook* decisionPF);
    
};

