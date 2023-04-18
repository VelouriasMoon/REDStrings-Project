#include "HorizonFlipbookWidget.h"

class UPaperFlipbook;

void UHorizonFlipbookWidget::StopAnimation() {
}

void UHorizonFlipbookWidget::SetFlipbook(UPaperFlipbook* InFlipbook) {
}

void UHorizonFlipbookWidget::SetCurrentAnimationDuration(float InDuration) {
}

void UHorizonFlipbookWidget::ResumeAnimation() {
}

void UHorizonFlipbookWidget::ResetAnimation() {
}

void UHorizonFlipbookWidget::PlayAnimation() {
}

void UHorizonFlipbookWidget::PauseAnimation() {
}

bool UHorizonFlipbookWidget::isEndAnimation() const {
    return false;
}

float UHorizonFlipbookWidget::GetCurrentAnimationDuration() {
    return 0.0f;
}

UHorizonFlipbookWidget::UHorizonFlipbookWidget() {
    this->bIsStartTick = true;
    this->NumOfLoop = 0;
    this->PaperFlipbook = NULL;
}

