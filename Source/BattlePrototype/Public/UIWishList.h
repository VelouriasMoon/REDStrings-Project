#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIWishList.generated.h"

class UTextBlock;
class UUIGuide;
class UUIItemTrade;
class UUIShopItemDetails;
class UUIShopPartyStatus;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIWishList : public UUIBase {
    GENERATED_BODY()
public:
    UUIWishList();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UUIItemTrade* uiTrade, UUIShopItemDetails* uiItemDetail, UUIShopPartyStatus* uiPartyStatus);
    
    UFUNCTION(BlueprintCallable)
    void InitializeCommonParts(UTextBlock* textHelp, UUIGuide* uiKeyGuide);
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseWishList();
    
};

