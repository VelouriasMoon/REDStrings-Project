#include "UITitleFirstConfigDifficulty.h"

class ARSTitleManager;
class UPaperFlipbook;
class UREDHorizonFlipbookWidget;
class UREDTextBlock;
class USpacer;
class UTextBlock;
class UUIBase;
class UWidgetAnimation;

void UUITitleFirstConfigDifficulty::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUITitleFirstConfigDifficulty::SetTitleManager(ARSTitleManager* NewTitleManager) {
}

bool UUITitleFirstConfigDifficulty::isBack() const {
    return false;
}

void UUITitleFirstConfigDifficulty::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* textDescription, UTextBlock* textDifficulty, USpacer* guideSpacer) {
}

void UUITitleFirstConfigDifficulty::initializeIndex(UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UREDTextBlock* textIndex) {
}

void UUITitleFirstConfigDifficulty::InitializeArrowLR(bool IsRight, UREDHorizonFlipbookWidget* Widget, UPaperFlipbook* defaultPF, UPaperFlipbook* selectPF, UPaperFlipbook* selectInPF, UPaperFlipbook* selectOutPF, UPaperFlipbook* decisionPF) {
}

UUITitleFirstConfigDifficulty::UUITitleFirstConfigDifficulty() {
    this->TitleManager = NULL;
}

