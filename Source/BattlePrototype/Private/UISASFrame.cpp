#include "UISASFrame.h"

class UImage;
class UOverlay;
class UUINexusDriveSAS;
class UUISASFrame2;
class UWidgetAnimation;

void UUISASFrame::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}


void UUISASFrame::setObject(UUISASFrame2* frameObject, UImage* noneObject, UUINexusDriveSAS* nexusDriveSas, UImage* imageNexusDriveBase, UImage* imageNexusDriveCorner, UImage* imageNexusDriveCenter) {
}

void UUISASFrame::SetIconVisible(bool IsVisible) {
}

void UUISASFrame::setIconScale(const FVector2D& Scale) {
}

void UUISASFrame::setCombinationVision(bool isCv) {
}

void UUISASFrame::setButtonIndex(int32 Index) {
}

void UUISASFrame::setActiveWidgetFlag(bool isAcitveWidget) {
}

void UUISASFrame::SetActive(bool IsActiveSAS, bool isActiveCv) {
}

bool UUISASFrame::IsEnable() {
    return false;
}

bool UUISASFrame::IsDecide() const {
    return false;
}

void UUISASFrame::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animGauge_Full, UWidgetAnimation* animDecision, UWidgetAnimation* animGauge_FullIn, UWidgetAnimation* animGauge_Useing, UWidgetAnimation* animGauge_Full_Out, UWidgetAnimation* animDefault2, UWidgetAnimation* animChange1, UWidgetAnimation* animChange2, UOverlay* overlaySasSet, UImage* imageIcon01, UImage* imageIcon01Add, UImage* imageObjectNone, UImage* imageBaseEffect, UImage* imageSasGaugeUse, UImage* imageSasGaugeUseAdd, UUISASFrame2* UISASFrame2) {
}


UUISASFrame::UUISASFrame() {
    this->m_buttonIndex = 0;
}

