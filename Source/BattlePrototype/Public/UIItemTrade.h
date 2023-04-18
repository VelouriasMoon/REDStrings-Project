#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "UIBase.h"
#include "UIItemTrade.generated.h"

class UREDScrollBox;
class UTextBlock;
class UUIItemTradeListIndex;
class UUIItemTradeMaterialListIndex;
class UUIShop;
class UUIShopChoice;
class UUIShopItemDetails;
class UUIShopPartyStatus;
class UUIWishList;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIItemTrade : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ListElementSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ListOffsetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ListIndexClass;
    
public:
    UUIItemTrade();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartWishList();
    
    UFUNCTION(BlueprintCallable)
    void Start(int32 tradeShopId, bool& isNewItemAvailableAddLineup);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListUpdateElement(int32 Index, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListUnFocusMouse(int32 isMouseScroll, int32 Index, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListUnFocus(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListFocusMouse(int32 isMouseScroll, int32 Index, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListFocus(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UREDScrollBox* ScrollBox, UUIItemTradeListIndex* uiListIndexBase, UTextBlock* textIndexItem, UTextBlock* textIndexHaveNum, UUIItemTradeMaterialListIndex* uiMaterialListIndex1, UUIItemTradeMaterialListIndex* uiMaterialListIndex2, UUIItemTradeMaterialListIndex* uiMaterialListIndex3, UTextBlock* textMaterialName, UTextBlock* textMaterialHaveNum, UTextBlock* textMaterialNeedNum);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeFromWishList(UUIWishList* UIWishList, UUIShopItemDetails* uiItemDetail, UUIShopPartyStatus* uiPartyStatus);
    
    UFUNCTION(BlueprintCallable)
    void InitializeFromShop(UUIShop* UIShop, UUIShopItemDetails* uiItemDetail, UUIShopChoice* uiChoice, UUIShopPartyStatus* uiPartyStatus);
    
    UFUNCTION(BlueprintCallable)
    void CloseWishList();
    
};

