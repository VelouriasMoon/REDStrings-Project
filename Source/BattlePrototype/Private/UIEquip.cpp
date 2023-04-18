#include "UIEquip.h"

class UOverlay;
class UREDScrollBox;

void UUIEquip::updatEquipListMouseFocus() {
}

void UUIEquip::updateProgramAnimation(float DeltaSeconds) {
}

void UUIEquip::SetDefaultCursor(EPlayerID CharaID, bool IsVisual) {
}

void UUIEquip::ResetDefaultCursor() {
}

void UUIEquip::removeDuplicateAccessories(FName checkItemID, TArray<FPlayerInfo>& playerList, int32 cursorChara) {
}

void UUIEquip::playContentsOut() {
}

void UUIEquip::playContentsIn() {
}

bool UUIEquip::isPlayingProgramAnimation() const {
    return false;
}

bool UUIEquip::isPlayingContentsOut() const {
    return false;
}

bool UUIEquip::isPlayingContentsIn() const {
    return false;
}

bool UUIEquip::isEquip_ac4043(int32 cursorCategory, EPlayerID characterId) {
    return false;
}

bool UUIEquip::isEquip_ac3065(int32 cursorCategory, EPlayerID characterId) {
    return false;
}

bool UUIEquip::isEnableWeaponSkin() const {
    return false;
}

void UUIEquip::InitializeThis(UOverlay* overlayAllSet, UOverlay* overlay2) {
}

void UUIEquip::InitializeScrollBox(UREDScrollBox* ScrollBox) {
}

UUIEquip::UUIEquip() {
    this->m_IsSetDefaultCursorParam = false;
    this->m_IsDefaultCursorVisual = false;
    this->m_DefaultCharaID = EPlayerID::Invalid;
}

