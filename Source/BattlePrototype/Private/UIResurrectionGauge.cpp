#include "UIResurrectionGauge.h"

class AActor;
class UImage;
class USpacer;
class UWidgetAnimation;

void UUIResurrectionGauge::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIResurrectionGauge::setWorldOffset(const FVector& worldOffset) {
}

void UUIResurrectionGauge::setOwnerActor(AActor* NewOwnerActor) {
}

void UUIResurrectionGauge::setMode(EResurrectionIconMode Mode) {
}


void UUIResurrectionGauge::InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UWidgetAnimation* animIn2, UWidgetAnimation* animOut2, UImage* imageIcon, USpacer* Spacer) {
}

UUIResurrectionGauge::UUIResurrectionGauge() {
    this->OwnerActor = NULL;
}

