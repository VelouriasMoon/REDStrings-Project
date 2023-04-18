#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIShopChoice.generated.h"

class UOverlay;
class UREDTextBlock;
class UTextBlock;
class UUIShopPayment;
class UUIShopTransfer;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIShopChoice : public UUIBase {
    GENERATED_BODY()
public:
    UUIShopChoice();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animBuySellTransfer, UTextBlock* textWindowTitle, UTextBlock* TextMain, UVerticalBox* multiGroupParent, UVerticalBox* choiceSet, UOverlay* goldSet, UUIShopPayment* childShopPayment, UUIShopTransfer* childShopTransfer, UOverlay* guideSet);
    
    UFUNCTION(BlueprintCallable)
    void initializeIndex(int32 Index, UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UREDTextBlock* textIndex);
    
};

