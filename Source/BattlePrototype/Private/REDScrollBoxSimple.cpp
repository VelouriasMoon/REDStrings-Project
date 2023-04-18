#include "REDScrollBoxSimple.h"

class UUserWidget;

bool UREDScrollBoxSimple::updateMouse() {
    return false;
}

void UREDScrollBoxSimple::updateAutoScroll(float DeltaTime) {
}

void UREDScrollBoxSimple::SetScrollSpeed(float Speed) {
}

void UREDScrollBoxSimple::setAutoScroll(float Offset) {
}

bool UREDScrollBoxSimple::scrollUp() {
    return false;
}

bool UREDScrollBoxSimple::scrollDown() {
    return false;
}

void UREDScrollBoxSimple::resetScrollOffset() {
}

bool UREDScrollBoxSimple::isMouseON() {
    return false;
}

UUserWidget* UREDScrollBoxSimple::createAndAddChildEx(UClass* ClassInfo) {
    return NULL;
}

UREDScrollBoxSimple::UREDScrollBoxSimple() {
    this->DebugMouseHitDisp = false;
    this->DebugMouseHitBarDisp = false;
    this->m_DebugDraw = NULL;
    this->m_DebugbarDraw = NULL;
}

