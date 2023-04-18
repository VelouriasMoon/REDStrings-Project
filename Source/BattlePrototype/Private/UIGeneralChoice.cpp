#include "UIGeneralChoice.h"

class UImage;
class UREDTextBlock;
class UTextBlock;
class UUIBase;
class UVerticalBox;
class UWidgetAnimation;

void UUIGeneralChoice::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIGeneralChoice::start4(const FString& TextMain, int32 DefaultIndex, const FString& textIndex1, const FString& textIndex2, const FString& textIndex3, const FString& textIndex4, bool cancelable, int32 CancelIndex, bool IsFade) {
}

void UUIGeneralChoice::start3(const FString& TextMain, int32 DefaultIndex, const FString& textIndex1, const FString& textIndex2, const FString& textIndex3, bool cancelable, int32 CancelIndex, bool IsFade) {
}

void UUIGeneralChoice::start2(const FString& TextMain, int32 DefaultIndex, const FString& textIndex1, const FString& textIndex2, bool cancelable, int32 CancelIndex, bool IsFade) {
}

void UUIGeneralChoice::start1(const FString& TextMain, const FString& textIndex, bool cancelable, int32 CancelIndex, bool IsFade) {
}

void UUIGeneralChoice::notice_start2(const FString& TextMain, int32 DefaultIndex, const FString& textIndex1, const FString& textIndex2) {
}

void UUIGeneralChoice::notice_start1(const FString& TextMain, const FString& textIndex) {
}

bool UUIGeneralChoice::IsCancel() const {
    return false;
}

void UUIGeneralChoice::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* TextMain, UVerticalBox* indexListParent, UImage* imageGhost, UImage* imagepgBlack) {
}

void UUIGeneralChoice::initializeIndex(int32 Index, UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UREDTextBlock* textIndex) {
}

int32 UUIGeneralChoice::getResult() const {
    return 0;
}

UUIGeneralChoice::UUIGeneralChoice() {
}

