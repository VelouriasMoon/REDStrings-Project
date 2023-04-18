#include "UIDiscover.h"

class AActor;
class UOverlay;
class UWidgetAnimation;

void UUIDiscover::UpdateStateDiscover(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIDiscover::UpdatePosDiscover() {
}

void UUIDiscover::Start(EDiscoverType Type, AActor* EmActor) {
}

void UUIDiscover::SetMaxTimer(float Timer) {
}

void UUIDiscover::SetDiscoverIndex(int32 Index) {
}


void UUIDiscover::InitializeData(UOverlay* FrameData) {
}

void UUIDiscover::InitializeAnime(UWidgetAnimation* default_none, UWidgetAnimation* default_discover, UWidgetAnimation* in_discover, UWidgetAnimation* out_discover, UWidgetAnimation* default_undiscover, UWidgetAnimation* in_undiscover, UWidgetAnimation* out_undiscover, UWidgetAnimation* default_undiscoverOver, UWidgetAnimation* out_undiscoverOver) {
}

int32 UUIDiscover::GetDiscoverIndex() {
    return 0;
}

void UUIDiscover::ForceVisible(bool Flag) {
}

void UUIDiscover::ForceCloseDead() {
}

void UUIDiscover::ForceClose() {
}

UUIDiscover::UUIDiscover() {
    this->m_EmActor = NULL;
}

