#include "UIParty.h"

class UBorder;
class UImage;
class UREDScrollBox;

void UUIParty::updateProgramAnimation(float DeltaSeconds) {
}

void UUIParty::updatePartyMouseFocus() {
}

void UUIParty::playContentsOut2() {
}

void UUIParty::playContentsOut() {
}

void UUIParty::playContentsIn() {
}

bool UUIParty::isPlayingProgramAnimation() const {
    return false;
}

bool UUIParty::isPlayingContentsOut2() const {
    return false;
}

bool UUIParty::isPlayingContentsOut() const {
    return false;
}

bool UUIParty::isPlayingContentsIn() const {
    return false;
}

void UUIParty::InitializeThis(UBorder* borderAllColor, UImage* imageRT1) {
}

void UUIParty::InitializeScrollBox(UREDScrollBox* ScrollBox) {
}

void UUIParty::bonsai10450() {
}

UUIParty::UUIParty() {
    this->CursorPosMain = 0;
    this->CursorPosSub = 0;
    this->CursorPosLock = 0;
    this->InfoIndex = 0;
    this->InfoLockIndex = 0;
}

