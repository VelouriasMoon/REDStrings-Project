#include "UIClearGetter.h"

class UBorder;
class UCanvasPanel;
class UImage;
class UOverlay;
class UREDScrollBox;
class UREDScrollBoxSimple;
class USpacer;
class UTextBlock;
class UUIBooksTop;
class UUIGuide;
class UUIMainContents;
class UUIQuestChoice;
class UUIQuestIcon;
class UUserWidget;

void UUIClearGetter::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}



void UUIClearGetter::OnClearMission_Implementation(EClearGetterType Type) {
}

void UUIClearGetter::ListUpdateElement_Implementation(int32 Index, UUserWidget* Widget) {
}

void UUIClearGetter::ListUnFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIClearGetter::ListUnFocus_Implementation(UUserWidget* Widget) {
}

void UUIClearGetter::ListFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIClearGetter::ListFocus_Implementation(UUserWidget* Widget) {
}

void UUIClearGetter::InitializeThis(UBorder* borderAllColor, UREDScrollBox* scrollBoxMain, UREDScrollBoxSimple* scrollBoxSub, UTextBlock* textTitle, UTextBlock* textIndexProgress, UTextBlock* textIndexReward, USpacer* spacerDescription1, USpacer* spacerDescription2, UUIQuestIcon* UIQuestIcon, UCanvasPanel* questPanel, UOverlay* overlayProgressAll, UImage* imageLineQuest, UTextBlock* textProgressName) {
}

void UUIClearGetter::InitializeReward(int32 Index, UOverlay* textSet, UImage* imageItemRarity, UImage* imageItemCategory) {
}

void UUIClearGetter::InitializeProgressTime(UBorder* borderCurrentTime, UTextBlock* textCurrentTimeHH, UTextBlock* textCurrentTimeSeparate1, UTextBlock* textCurrentTimeMM, UTextBlock* textCurrentTimeSeparate2, UTextBlock* textCurrentTimeSS, UTextBlock* textSlash, UOverlay* overlayTargetTime, UTextBlock* textTargetTimeHH, UTextBlock* textTargetTimeSeparate1, UTextBlock* textTargetTimeMM, UTextBlock* textTargetTimeSeparate2, UTextBlock* textTargetTimeSS, UTextBlock* textBest, UOverlay* overlayBestTime, UTextBlock* textBestTimeHH, UTextBlock* textBestTimeSeparate1, UTextBlock* textBestTimeMM, UTextBlock* textBestTimeSeparate2, UTextBlock* textBestTimeSS) {
}

void UUIClearGetter::InitializeProgressItem(UOverlay* iconSet, UImage* imageItemRarity, UImage* imageItemCategory, UOverlay* numSet, UBorder* borderCurrent, UTextBlock* textProgressCurrent, UTextBlock* textProgressSlash, UTextBlock* textProgressTarget) {
}

void UUIClearGetter::InitializeFromMain(UUIMainContents* UIMainContents, UUIGuide* uiKeyGuide, UTextBlock* textHelp) {
}

void UUIClearGetter::InitializeFromBooks(UUIBooksTop* Parent, UUIQuestChoice* uiQuestPopup) {
}



UUIClearGetter::UUIClearGetter() {
    this->ListOffsetSize = 0.00f;
    this->ListIndexClass = NULL;
}

