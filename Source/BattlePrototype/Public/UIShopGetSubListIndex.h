#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIShopGetSubListIndex.generated.h"

class UImage;
class UOverlay;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIShopGetSubListIndex : public UUIBase {
    GENERATED_BODY()
public:
    UUIShopGetSubListIndex();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetQuestIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemIcon(const FName& ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBondsIcon();
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animDefaultMax, UTextBlock* textItemName, UImage* imageCross, UTextBlock* textGetNum, UOverlay* overlayNumSet, UTextBlock* textNumSum, UTextBlock* textNumSlash, UTextBlock* textNumMax);
    
};

