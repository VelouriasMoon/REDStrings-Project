#include "REDScrollBoxElement.h"

class UOverlay;
class UREDScrollBoxElement;
class USpacer;

void UREDScrollBoxElement::SetMouseInputLevel(int32 inputLevel) {
}

void UREDScrollBoxElement::SetMouseInputDisable(bool Flag) {
}

void UREDScrollBoxElement::SetMouseDisable(bool Flag) {
}


void UREDScrollBoxElement::InitializeThis(UOverlay* Overlay, USpacer* Spacer) {
}

UREDScrollBoxElement* UREDScrollBoxElement::GetThis() {
    return NULL;
}

int32 UREDScrollBoxElement::GetMouseInputLevel() const {
    return 0;
}

bool UREDScrollBoxElement::GetMouseInputDisable() const {
    return false;
}

bool UREDScrollBoxElement::GetMouseDisable() const {
    return false;
}

bool UREDScrollBoxElement::GetHitWidget() {
    return false;
}

FVector2D UREDScrollBoxElement::GetAbsoluteSize() {
    return FVector2D{};
}

FVector2D UREDScrollBoxElement::GetAbsolutePosition() {
    return FVector2D{};
}

UREDScrollBoxElement::UREDScrollBoxElement() : UUserWidget(FObjectInitializer::Get()) {
    this->Widget = NULL;
}

