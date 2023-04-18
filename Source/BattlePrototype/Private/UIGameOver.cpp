#include "UIGameOver.h"

class UTextBlock;
class UUIBase;
class UUIGuide;
class UUserWidget;
class UWidgetAnimation;

void UUIGameOver::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIGameOver::StartGameOver() {
}

bool UUIGameOver::IsEnd() const {
    return false;
}

void UUIGameOver::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOutRetry, UWidgetAnimation* animOutTitle, UTextBlock* textGameOver, UTextBlock* textDescription, UTextBlock* textRetry, UTextBlock* textReturnToTitle, UUIGuide* childKeyGuide, UUserWidget* childWidget, UWidgetAnimation* animChildDefault, UWidgetAnimation* animChildIn, UWidgetAnimation* animChildOutRetry, UWidgetAnimation* animChildOutTitle) {
}

void UUIGameOver::initializeIndex(int32 Index, UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animDecision) {
}


EGameOverResult UUIGameOver::getResult() const {
    return EGameOverResult::Invalid;
}

UUIGameOver::UUIGameOver() {
    this->DefaultIndex = 0;
}

