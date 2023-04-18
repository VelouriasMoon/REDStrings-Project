#include "OutgameDebuggingManager.h"

class ADebuggingItemBase;
class AOutgameDebuggingManager;
class UObject;

void AOutgameDebuggingManager::UnregisterChildFromItem(EOutgameDebuggingPage InPage, ADebuggingItemBase* InItem) {
}

void AOutgameDebuggingManager::UnregisterChildFromHashName(EOutgameDebuggingPage InPage, const FText& InHashName) {
}












void AOutgameDebuggingManager::StartWindow() {
}

void AOutgameDebuggingManager::SetPage(EOutgameDebuggingPage InPage) {
}

void AOutgameDebuggingManager::SetDebugDispRevisions(bool isDisp) {
}

ADebuggingItemBase* AOutgameDebuggingManager::SearchItem(EOutgameDebuggingPage InPage, const FText& InHashName, bool InIgnoreCase) {
    return NULL;
}

void AOutgameDebuggingManager::SaveDebuggingParameter() {
}

void AOutgameDebuggingManager::ResetDebuggingParameter() {
}

void AOutgameDebuggingManager::RegisterChild(EOutgameDebuggingPage InPage, ADebuggingItemBase* InItem) {
}

void AOutgameDebuggingManager::LoadDebuggingParameter(bool IsBroadcast) {
}

bool AOutgameDebuggingManager::IsReady() const {
    return false;
}

FString AOutgameDebuggingManager::GetRevisionString() {
    return TEXT("");
}

FString AOutgameDebuggingManager::GetDebuggingText(const FString& Key) {
    return TEXT("");
}

AOutgameDebuggingManager* AOutgameDebuggingManager::GetDebuggingManagerInstance(const UObject* WorldContextObject) {
    return NULL;
}

void AOutgameDebuggingManager::FinishWindow() {
}

void AOutgameDebuggingManager::ExportDebuggingItemText() {
}












void AOutgameDebuggingManager::Dump() {
}

bool AOutgameDebuggingManager::DebugIsDispRevisions() const {
    return false;
}












AOutgameDebuggingManager::AOutgameDebuggingManager() {
    this->Page = EOutgameDebuggingPage::System;
    this->DebuggingWidget = NULL;
    this->StartupObject = NULL;
    this->DebugAutoInputDelayTime = 0.00f;
    this->bDebugDispRevision = false;
}

