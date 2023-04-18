#include "UISaveLoadList.h"

class UImage;
class UOverlay;
class UTextBlock;
class UWidgetAnimation;

void UUISaveLoadList::UpdateStateSaveLoadList(int32 State, int32 SubState, float DeltaSeconds) {
}






void UUISaveLoadList::InitializeNoDataListAnime(UWidgetAnimation* Decide, UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* select, UWidgetAnimation* default_none, UWidgetAnimation* default_) {
}

void UUISaveLoadList::InitializeListTextTime(UTextBlock* textDayTime, UTextBlock* textDayhh, UTextBlock* textDaymm, UTextBlock* textDayss, UTextBlock* textTimehh, UTextBlock* textTimemm, UTextBlock* textTimess) {
}

void UUISaveLoadList::InitializeListTextCommon(UImage* imageLine, UImage* imageClearIcon, UTextBlock* textDay1, UTextBlock* textDay2, UTextBlock* textTime1, UTextBlock* textTime2) {
}

void UUISaveLoadList::InitializeListText(UImage* imageScreen, UTextBlock* textChapter, UTextBlock* textChapterTitle, UTextBlock* textInfo, UTextBlock* textPlLv, UTextBlock* PlLvNum, UTextBlock* PlName, UTextBlock* textDayFixTime, UTextBlock* textPlEx, UImage* imagePlEx, UTextBlock* textSlash, UTextBlock* textSaveType) {
}

void UUISaveLoadList::InitializeListClear(UOverlay* clear_01, UOverlay* clear_02, UTextBlock* textclear_01, UTextBlock* textclear_02) {
}

void UUISaveLoadList::InitializeListAnime(UWidgetAnimation* Decide, UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* select, UWidgetAnimation* default_none, UWidgetAnimation* default_) {
}

void UUISaveLoadList::InitializeDataExLoadAnime(UWidgetAnimation* Decide, UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* select, UWidgetAnimation* default_none, UWidgetAnimation* default_) {
}

void UUISaveLoadList::InitializeDataBreakListAnime(UWidgetAnimation* Decide, UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* select, UWidgetAnimation* default_none, UWidgetAnimation* default_) {
}

SaveLoadListType UUISaveLoadList::getSaveDataType() {
    return SaveLoadListType::NoData;
}

UUISaveLoadList::UUISaveLoadList() {
    this->m_SaveLoadListType = SaveLoadListType::NoData;
}

