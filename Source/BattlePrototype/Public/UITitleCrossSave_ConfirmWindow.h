#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UITitleCrossSave_ConfirmWindow.generated.h"

class UREDScrollBoxSimple;
class UREDTextBlock;
class UUITitleCrossSave_ConfirmWindow_Parts_Select2;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITitleCrossSave_ConfirmWindow : public UUIBase {
    GENERATED_BODY()
public:
    UUITitleCrossSave_ConfirmWindow();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animDefault, UREDTextBlock* TextMain, UREDScrollBoxSimple* ScrollBox, UUITitleCrossSave_ConfirmWindow_Parts_Select2* uiSelect2);
    
};

