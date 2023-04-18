#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIBooksTop.generated.h"

class UBorder;
class UImage;
class UREDRetainerBox;
class UTextBlock;
class UUIBrainMessage;
class UUICharaBooks;
class UUIClearGetter;
class UUIEnemyBooks;
class UUIGuide;
class UUIHelpMenu;
class UUIMainContents;
class UUIWishList;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIBooksTop : public UUIBase {
    GENERATED_BODY()
public:
    UUIBooksTop();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetContentsChange(bool IsChange);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingProgramAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEndMenu() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animInfoWindow, UWidgetAnimation* animInfoWindowIn, UWidgetAnimation* animInfoWindowOut, UBorder* borderAllColor, UBorder* borderPicture, UREDRetainerBox* retainerBoxMenu, UImage* imageGhostViewer, UImage* imageViewerNoise, UWidgetAnimation* animDefaultView, UWidgetAnimation* animChangeView, UWidgetAnimation* animChangeDefault, UUIBrainMessage* UIBrainMessage, UUICharaBooks* UICharaBooks, UUIEnemyBooks* UIEnemyBooks, UUIWishList* uiWish, UUIClearGetter* UIClearGetter, UUIHelpMenu* UIHelpMenu);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeCommonParts(UUIMainContents* Parent, UTextBlock* textHelp, UUIGuide* uiKeyGuide);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeCategory(int32 Category, UUserWidget* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animUnselect, UWidgetAnimation* animDecision, UTextBlock* textCategory);
    
    UFUNCTION(BlueprintCallable)
    void InitializeArrowLR(int32 Index, UUserWidget* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision);
    
};

