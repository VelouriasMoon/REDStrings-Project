#include "UIBrainMessage.h"

class UREDScrollBox;
class UUserWidget;


bool UUIBrainMessage::updateBrainMessageMouseSE() {
    return false;
}

void UUIBrainMessage::updateBrainMessageMouseFocus() {
}

void UUIBrainMessage::stopMessageScrollSE() {
}

void UUIBrainMessage::SetOldScrollOffset(float Offset) {
}

void UUIBrainMessage::SetFlagEnableClose(bool isPlay) {
}


void UUIBrainMessage::ResetReplyBondsEpisodeFlag() {
}


void UUIBrainMessage::playMessageScrollSE() {
}

void UUIBrainMessage::ListUnFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIBrainMessage::ListFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

bool UUIBrainMessage::isUpdateBrainThreadMouseFocus(int32& cursorIndex) {
    return false;
}

bool UUIBrainMessage::IsReplyClose() const {
    return false;
}

bool UUIBrainMessage::IsReplyBondsEpisode() const {
    return false;
}

bool UUIBrainMessage::isLockInput() const {
    return false;
}


void UUIBrainMessage::InitializeList(UREDScrollBox* ScrollBox, UREDScrollBox* scrollboxMessage) {
}

bool UUIBrainMessage::GetFlagEnableClose() const {
    return false;
}

void UUIBrainMessage::clearLockInput() {
}


UUIBrainMessage::UUIBrainMessage() {
    this->m_FlagReplyBondsEpisode = false;
    this->m_FlagReplyTest = false;
    this->m_FlagReplyClose = false;
    this->m_FlagMouseInput = false;
}

