#include "UISASActionIcon.h"

class AActor;
class UWidgetAnimation;

void UUISASActionIcon::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUISASActionIcon::setWorldOffset(const FVector& worldOffset) {
}


void UUISASActionIcon::setOwnerActor(AActor* NewOwnerActor) {
}


bool UUISASActionIcon::isUsable() const {
    return false;
}

void UUISASActionIcon::InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animIn2, UWidgetAnimation* animOut2, UWidgetAnimation* animSelect) {
}

UUISASActionIcon::UUISASActionIcon() {
    this->m_isUsable = true;
    this->OwnerActor = NULL;
}

