#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UITitleCrossSave.generated.h"

class ARSTitleManager;
class UREDTextBlock;
class UUIGuide;
class UUITitleCrossSave_ConfirmWindow;
class UUITitleCrossSave_UpdatingWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITitleCrossSave : public UUIBase {
    GENERATED_BODY()
public:
    UUITitleCrossSave();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Start(ARSTitleManager* TitleManager);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animDefault, UREDTextBlock* textTitle, UREDTextBlock* textHelp, UUIGuide* UIGuide, UUITitleCrossSave_UpdatingWidget* uiUpdatingWidget, UUITitleCrossSave_ConfirmWindow* uiConfirmWindow);
    
};

