#include "UINoticeMessage.h"

class UImage;
class UOverlay;
class UTextBlock;
class UWidgetAnimation;

void UUINoticeMessage::UpdateStateNoticeMessage(int32 State, int32 SubState, float DeltaSeconds) {
}


bool UUINoticeMessage::RemoveEventSubQuest() {
    return false;
}

bool UUINoticeMessage::RemoveEventClearGetter() {
    return false;
}

bool UUINoticeMessage::RemoveEvent(EUINoticeMessageCallType Type, FName ID) {
    return false;
}

bool UUINoticeMessage::RemoveBrainMessageEvent(FName threadID) {
    return false;
}

void UUINoticeMessage::InitializeNoticeMessage(UTextBlock* textName, UTextBlock* textDetails, UImage* noticeImage, UImage* kizunaImage, UImage* ClearImage, UImage* frame1Image, UImage* frame2Image, UImage* frame3Image, UImage* noiseImage, UOverlay* bmguide) {
}

void UUINoticeMessage::InitializeAnime(UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* default_none, UWidgetAnimation* default_) {
}

void UUINoticeMessage::AddEvent(EUINoticeMessageCallType Type, FName ID) {
}

UUINoticeMessage::UUINoticeMessage() {
    this->DispTimerMax = 0.00f;
}

