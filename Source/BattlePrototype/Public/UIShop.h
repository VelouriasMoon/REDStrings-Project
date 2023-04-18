#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "EShopMode.h"
#include "Templates/SubclassOf.h"
#include "UIBase.h"
#include "UIShop.generated.h"

class AUIShop3DManager;
class UBorder;
class UCanvasPanel;
class UImage;
class UOverlay;
class UREDScrollBox;
class UTextBlock;
class UUIGuide;
class UUIItemTrade;
class UUIShopChoice;
class UUIShopGetContents;
class UUIShopItemDetails;
class UUIShopPartyStatus;
class UUIShopPayment;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIShop : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ListElementSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ListOffsetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ListIndexClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUIShop3DManager> BGModelClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIShop3DManager* BGModel;
    
public:
    UUIShop();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void Start(int32 shopId, int32 tradeShopId, EShopMode Mode);
    
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
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animInfoWindow, UWidgetAnimation* animInfoWindowIn, UWidgetAnimation* animInfoWindowOut, UWidgetAnimation* animChange1, UWidgetAnimation* animChange2, UCanvasPanel* scrollBoxParent, UREDScrollBox* ScrollBox, UUIItemTrade* UIItemTrade, UUIShopGetContents* uiGetContents, UUIShopItemDetails* UIShopItemDetails, UOverlay* uiPaymentParent, UUIShopPayment* UIShopPayment, UUIShopChoice* uiChoice, UUIShopPartyStatus* uiPartyStatus, UUIGuide* UIGuide, UTextBlock* textTitle, UTextBlock* textIndexItem, UTextBlock* textIndexHaveNum, UTextBlock* textIndexPrice, UTextBlock* textIndexBuySellNum, UTextBlock* textHelp, UBorder* shopListColor, UBorder* shopGoldSet);
    
    UFUNCTION(BlueprintCallable)
    void InitializeModeTab(int32 Mode, UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UTextBlock* textBuySell);
    
    UFUNCTION(BlueprintCallable)
    void InitializeItemCategory(int32 Category, UUIBase* Widget, UImage* imageSeparator, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UWidgetAnimation* animUnselect, UTextBlock* textCategory);
    
    UFUNCTION(BlueprintCallable)
    void InitializeArrowLR(int32 Index, UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision);
    
};

