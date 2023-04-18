#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIMainContentsSubTab.generated.h"

class UREDTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIMainContentsSubTab : public UUIBase {
    GENERATED_BODY()
public:
    UUIMainContentsSubTab();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTitle(FText text);
    
    UFUNCTION(BlueprintCallable)
    void SetSelect(bool IsSelect);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UWidgetAnimation* animUnselect, UREDTextBlock* textCategory);
    
};

