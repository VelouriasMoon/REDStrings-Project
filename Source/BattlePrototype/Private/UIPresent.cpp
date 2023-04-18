#include "UIPresent.h"

class UREDScrollBox;

void UUIPresent::updatePresentListMouseFocus() {
}

void UUIPresent::SetTarget(EPlayerID Target) {
}

void UUIPresent::restoreInputLayout() {
}

void UUIPresent::InitializeScrollBox(UREDScrollBox* ScrollBox) {
}

bool UUIPresent::GetSelectFlag() const {
    return false;
}

FName UUIPresent::GetItemID() const {
    return NAME_None;
}

void UUIPresent::backupInputLayout() {
}

UUIPresent::UUIPresent() {
    this->m_Target = EPlayerID::Invalid;
    this->m_FlagSelect = false;
}

