#pragma once
#include "CoreMinimal.h"
#include "UITitleFirstConfirmChildBase.h"
#include "UITitleFirstConfirmChildText.generated.h"

class UREDScrollBoxSimple;
class UREDTextBlock;
class UUITitleFirstConfirmSelect2;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITitleFirstConfirmChildText : public UUITitleFirstConfirmChildBase {
    GENERATED_BODY()
public:
    UUITitleFirstConfirmChildText();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animDefault, UREDTextBlock* TextMain, UREDTextBlock* textTitle, UREDTextBlock* textHelp, UREDScrollBoxSimple* ScrollBox, UUITitleFirstConfirmSelect2* uiSelect2);
    
};

