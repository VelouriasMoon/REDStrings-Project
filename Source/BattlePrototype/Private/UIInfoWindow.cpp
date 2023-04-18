#include "UIInfoWindow.h"

class UImage;
class UOverlay;
class USpacer;
class UTextBlock;
class UWidgetAnimation;

void UUIInfoWindow::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIInfoWindow::setVisibleGuide(bool Flag) {
}



void UUIInfoWindow::setMessage(const FString& Message) {
}

void UUIInfoWindow::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* TextMain, USpacer* Spacer, UOverlay* guideOverlay, UImage* imageGuideLine, UImage* imageFade) {
}

UUIInfoWindow::UUIInfoWindow() {
    this->isWarning = false;
    this->PlayingSE = NULL;
}

