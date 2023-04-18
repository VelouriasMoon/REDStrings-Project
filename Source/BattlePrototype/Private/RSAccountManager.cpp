#include "RSAccountManager.h"

bool URSAccountManager::UpdateUserAccountID() {
    return false;
}

bool URSAccountManager::UpdateController() {
    return false;
}

void URSAccountManager::Test_XboxOneGetUserID() {
}

void URSAccountManager::SetCheckAccountInvalidBitFlag(ECheckAccountFlag Flag, const bool IsInvalid) {
}

void URSAccountManager::SetActiveAllController(const int32 _ControllerId) {
}

void URSAccountManager::ResetAccount() {
}

bool URSAccountManager::RequestFirstSignIn() {
    return false;
}

void URSAccountManager::OutputLocalPlayerInfo() {
}

void URSAccountManager::OutputDebugInfo() {
}

void URSAccountManager::OutputControllerInfo() {
}

void URSAccountManager::OutputAllLoginProfileID() {
}

bool URSAccountManager::OpenLoginUI(bool IsFirst) {
    return false;
}

void URSAccountManager::OnFirstConnect(const FString& AccountId) {
}

void URSAccountManager::OnAccountReconnect(const FString& AccountId) {
}

void URSAccountManager::OnAccountCutting(const FString& AccountId) {
}

void URSAccountManager::OnAccountConnectFromInvalidIndex(int32 ControllerId, const FString& AccountId) {
}

void URSAccountManager::OnAccountChange(const FString& PrevAccountId, const FString& NowAccountId) {
}

void URSAccountManager::GetLocalPlayerUserInfo() {
}

FString URSAccountManager::GetLocalPlayerUserID() {
    return TEXT("");
}

FString URSAccountManager::GetLocalPlayerProfileID(const int32 _LocalPlayerIndex) {
    return TEXT("");
}

int32 URSAccountManager::GetLocalPlayerControllerID() {
    return 0;
}

FString URSAccountManager::GetControllerProfileID(const int32 _ControllerId) {
    return TEXT("");
}

bool URSAccountManager::FirstCheckUserAccount() {
    return false;
}

bool URSAccountManager::FirstButtonPushCheck() {
    return false;
}

URSAccountManager::URSAccountManager() {
    this->_gameInstance = NULL;
    this->m_UserAccountID = TEXT("ID_INVALID");
    this->m_AssumedDefaultUserAccountID = TEXT("ID_INVALID");
    this->m_isFirstButtonPushCheck = false;
    this->m_isFirstCheckSuccessed = false;
    this->m_isInvalidPairingCheck = false;
    this->m_DelayCounter = 0.00f;
    this->m_bDebugInvalidXB1ProfileCheck = true;
    this->m_bDebugTickOutputLog = false;
}

