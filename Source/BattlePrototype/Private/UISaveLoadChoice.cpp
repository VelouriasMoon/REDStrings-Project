#include "UISaveLoadChoice.h"

class UOverlay;
class UTextBlock;
class UUIBase;
class UVerticalBox;
class UWidgetAnimation;

void UUISaveLoadChoice::UpdateStateSaveLoadChoice(int32 State, int32 SubState, float DeltaSeconds) {
}

bool UUISaveLoadChoice::StartSaveLoadChoice(const FString& textTitle, const FString& TextMain, int32 DefaultIndex, const FString& textIndex1, const FString& textIndex2, int32 textNum, bool cancelable, int32 CancelIndex) {
    return false;
}

void UUISaveLoadChoice::InitializeText(UTextBlock* textTitle, UTextBlock* TextMain, UVerticalBox* textVerticalBox, UOverlay* guideOverlay) {
}

void UUISaveLoadChoice::initializeSaveLoadSelectIndex(int32 Index, UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UTextBlock* textIndex) {
}

void UUISaveLoadChoice::InitializeAnime(UWidgetAnimation* default_none, UWidgetAnimation* default_) {
}

bool UUISaveLoadChoice::getResultAct() const {
    return false;
}

int32 UUISaveLoadChoice::getResult() const {
    return 0;
}

UUISaveLoadChoice::UUISaveLoadChoice() {
}

