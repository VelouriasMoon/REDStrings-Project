#include "UITutoOperation.h"

class UImage;
class UOverlay;
class UREDRetainerBox;
class UUITutoOperationParts;
class UWidgetAnimation;

void UUITutoOperation::UpdateStateTutoOperation(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUITutoOperation::Start(FName helpID) {
}

void UUITutoOperation::OperationEnd() {
}

void UUITutoOperation::InitializeTutoOperationList(int32 ListIndex, UOverlay* overlayData, UUITutoOperationParts* textleft) {
}

void UUITutoOperation::InitializeTutoOperation(UREDRetainerBox* REDRetainerBox, UImage* boximage) {
}

void UUITutoOperation::InitializeAnime(UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* default_none, UWidgetAnimation* default_) {
}

UUITutoOperation::UUITutoOperation() {
    this->m_pClassSelect = NULL;
    this->m_pPartsParent = NULL;
    this->OwnerActor = NULL;
    this->m_pHudBase = NULL;
}

