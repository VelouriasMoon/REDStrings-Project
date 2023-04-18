#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIQuestChoice.generated.h"

class UHorizontalBox;
class UImage;
class UOverlay;
class UREDTextBlock;
class USpacer;
class UTextBlock;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIQuestChoice : public UUIBase {
    GENERATED_BODY()
public:
    UUIQuestChoice();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKinsuIcon(UImage* imageCategory, UImage* imageItemIconFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemIconNone(UImage* imageCategory, UImage* imageItemIconFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemIcon(FName ItemId, UImage* imageCategory, UImage* imageItemIconFrame);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UTextBlock* textWindowTitle, UOverlay* overlayMainGatherItem, USpacer* spacerMain, UOverlay* overlayMainOther, UTextBlock* TextMain, UVerticalBox* verticalBoxChoice, UVerticalBox* verticalBoxChoice2, UOverlay* overlayReward, UTextBlock* textRewardTitle, UHorizontalBox* horizontalBoxGuide);
    
    UFUNCTION(BlueprintCallable)
    void InitializeReward(int32 Index, UOverlay* Overlay, UImage* itemIconFrame, UImage* iconCategory);
    
    UFUNCTION(BlueprintCallable)
    void initializeIndex(int32 Index, UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UREDTextBlock* textIndex);
    
};

