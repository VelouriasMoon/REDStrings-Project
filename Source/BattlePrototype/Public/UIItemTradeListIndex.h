#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIItemTradeListIndex.generated.h"

class UImage;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIItemTradeListIndex : public UUIBase {
    GENERATED_BODY()
public:
    UUIItemTradeListIndex();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetItemInfo(const FName& ItemId, int32 tradeItemIndex, bool canTrade, int32 takeNum);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animDefaultEnough, UWidgetAnimation* animDefaultMax, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectEnough, UWidgetAnimation* animSelectMax, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectInEnough, UWidgetAnimation* animSelectInMax, UWidgetAnimation* animSelect2, UWidgetAnimation* animSelect2Enough, UWidgetAnimation* animSelect2Max, UWidgetAnimation* animChangeTradeItemIn, UWidgetAnimation* animChangeTradeItemInEnough, UWidgetAnimation* animChangeTradeItemInMax, UWidgetAnimation* animChangeTradeItemOut, UWidgetAnimation* animChangeTradeItemOutEnough, UWidgetAnimation* animChangeTradeItemOutMax, UImage* imageNewIcon, UImage* imageWish, UTextBlock* textItemName, UTextBlock* textNumHave);
    
};

