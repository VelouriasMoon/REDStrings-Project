#include "MessageHudManager.h"

class UObject;

void AMessageHudManager::SkipMessage() const {
}

void AMessageHudManager::setSwapTagArray(const TArray<FString>& StringArray) {
}

void AMessageHudManager::setSwapTag(int32 Index, const FString& String) {
}

void AMessageHudManager::setPluralTagArray(const TArray<int32>& valueArray) {
}

void AMessageHudManager::setPluralTag(int32 Index, int32 Value) {
}

void AMessageHudManager::setOrdinalTagArray(const TArray<int32>& valueArray) {
}

void AMessageHudManager::setOrdinalTag(int32 Index, int32 Value) {
}

bool AMessageHudManager::setMessageTableName(const FString& messageTableName, UObject* Object) {
    return false;
}

void AMessageHudManager::setGenderTag(const ETextGender& textGender) {
}

void AMessageHudManager::PreLoadAllVoice(const FString& messageTableName) {
}

ETextGender AMessageHudManager::getTextGender() const {
    return ETextGender::Masculine;
}

TArray<FString> AMessageHudManager::getSwapTagArray() const {
    return TArray<FString>();
}

TArray<int32> AMessageHudManager::getPluralTagArray() const {
    return TArray<int32>();
}

TArray<int32> AMessageHudManager::getOrdinalTagArray() const {
    return TArray<int32>();
}

bool AMessageHudManager::getMessageTableName(FString& messageTableName, const UObject* Object) {
    return false;
}

void AMessageHudManager::GetMessageFromLabel(FString& Message, const FString& messageLabel, const FString& messageTable) {
}

void AMessageHudManager::GetMessageDataCellFromLabel(FMessageDataCell& MessageDataCell, const FString& messageLabel, const FString& messageTable) {
}

int32 AMessageHudManager::GetLastChoiceResult() const {
    return 0;
}

int32 AMessageHudManager::GetChoiceResult(int32 MessageIndex) const {
    return 0;
}

int32 AMessageHudManager::DrawMessage(int32 windowType, const FString& messageTableName, const FString& messageLabel, FName RipSyncBoardJointID, bool skipable, float DrawSecond, bool isSkipVoiceEnd, bool IsVoiceOnlyMessage, bool isWaitMode) {
    return 0;
}

void AMessageHudManager::clearAllTag() {
}

bool AMessageHudManager::CheckEndMessage(int32 MessageIndex) const {
    return false;
}

bool AMessageHudManager::CheckEndAllMessage(bool FlagCheckClose) const {
    return false;
}

AMessageHudManager::AMessageHudManager() {
    this->m_textGender = ETextGender::Masculine;
}

