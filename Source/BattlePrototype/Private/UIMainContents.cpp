#include "UIMainContents.h"




void UUIMainContents::SetViewerMode(bool NewIsViewerMode) {
}

void UUIMainContents::SetTabEnable(int32 Index, bool IsEnable) {
}

void UUIMainContents::SetStartBrainMessage(bool isDefaultBrainMessage) {
}

void UUIMainContents::SetPopupMode(bool NewIsPopupMode) {
}

void UUIMainContents::SetOnlyWeaponMenu(bool NewIsOnlyWeaponMenu) {
}

void UUIMainContents::SetOnlyEnemyBooks(bool NewIsOnlyEnemyBooks) {
}

void UUIMainContents::SetOnlyBrainMessage(bool NewIsOnlyBrainMessage) {
}


bool UUIMainContents::SetChangeMainMenuTabR() {
    return false;
}

bool UUIMainContents::SetChangeMainMenuTabL() {
    return false;
}

bool UUIMainContents::SetChangeMainMenuTab(int32 nextindex) {
    return false;
}

void UUIMainContents::SetBrainMessageDefaultThread(FName threadID) {
}

void UUIMainContents::SetBrainMessageAutoMode(bool IsAuto) {
}







bool UUIMainContents::IsViewerMode() const {
    return false;
}

bool UUIMainContents::IsTabEnable(int32 Index) const {
    return false;
}

bool UUIMainContents::IsStartBrainMessage() const {
    return false;
}


bool UUIMainContents::IsPopupMode() const {
    return false;
}

bool UUIMainContents::IsOnlyWeaponMenu() const {
    return false;
}

bool UUIMainContents::IsOnlyEnemyBooks() const {
    return false;
}

bool UUIMainContents::IsOnlyBrainMessage() const {
    return false;
}

bool UUIMainContents::isLockTabChange() const {
    return false;
}






void UUIMainContents::ControlFunc(int32 SubState) {
}



UUIMainContents::UUIMainContents() {
    this->UIConfig = NULL;
    this->MenuIndex = 0;
    this->MenuIndexNext = 0;
    this->MenuIndexBackup = 0;
    this->TabEnableFlag = 0;
    this->mIsBrainMessageAutoMode = false;
    this->mIsMenuSingle = false;
}

