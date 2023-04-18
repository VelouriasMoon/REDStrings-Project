#include "UIBooksTop.h"

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

void UUIBooksTop::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIBooksTop::SetContentsChange(bool IsChange) {
}

bool UUIBooksTop::isPlayingProgramAnimation() const {
    return false;
}

bool UUIBooksTop::isEndMenu() const {
    return false;
}

void UUIBooksTop::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animInfoWindow, UWidgetAnimation* animInfoWindowIn, UWidgetAnimation* animInfoWindowOut, UBorder* borderAllColor, UBorder* borderPicture, UREDRetainerBox* retainerBoxMenu, UImage* imageGhostViewer, UImage* imageViewerNoise, UWidgetAnimation* animDefaultView, UWidgetAnimation* animChangeView, UWidgetAnimation* animChangeDefault, UUIBrainMessage* UIBrainMessage, UUICharaBooks* UICharaBooks, UUIEnemyBooks* UIEnemyBooks, UUIWishList* uiWish, UUIClearGetter* UIClearGetter, UUIHelpMenu* UIHelpMenu) {
}

void UUIBooksTop::InitializeCommonParts(UUIMainContents* Parent, UTextBlock* textHelp, UUIGuide* uiKeyGuide) {
}

void UUIBooksTop::InitializeCategory(int32 Category, UUserWidget* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animUnselect, UWidgetAnimation* animDecision, UTextBlock* textCategory) {
}

void UUIBooksTop::InitializeArrowLR(int32 Index, UUserWidget* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision) {
}

UUIBooksTop::UUIBooksTop() {
}

