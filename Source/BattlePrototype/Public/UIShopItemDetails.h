#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIShopItemDetails.generated.h"

class UImage;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIShopItemDetails : public UUIBase {
    GENERATED_BODY()
public:
    UUIShopItemDetails();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetItemInfo(const FName& ItemId);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animDefaultMax, UWidgetAnimation* animDefaultNoSet, UImage* imageNewIcon, UImage* imageItemIcon, UImage* imageRarityFrame, UTextBlock* textItemName, UTextBlock* textParameter, UTextBlock* textItemDescription, UTextBlock* textHave, UTextBlock* textItemHaveNum, UTextBlock* textItemMaxNum, UTextBlock* textItemNumSlash);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearItemInfo();
    
};

