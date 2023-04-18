#include "AddContentManager.h"

bool UAddContentManager::IsEntitled(FName AddContentName) const {
    return false;
}

bool UAddContentManager::IsCheckingEntitlementInProgress() {
    return false;
}

TArray<FName> UAddContentManager::GetInvalidContentsList(TArray<FName> possessionContentsList) {
    return TArray<FName>();
}

TArray<FName> UAddContentManager::GetEntitledContentsList() const {
    return TArray<FName>();
}

TArray<FName> UAddContentManager::GetAllContentsList() {
    return TArray<FName>();
}

bool UAddContentManager::GetAddContentsTitleIdAndExplanationId(FName AddContentName, FString& TitleID, FString& ExplanationID) {
    return false;
}

bool UAddContentManager::GetAddContentsPresentInfo(TArray<FAddContentsPresentInfo>& infoList, FName AddContentName) {
    return false;
}

bool UAddContentManager::GetAddContentRefDataID(FName& ID, FName AddContentName) {
    return false;
}

bool UAddContentManager::GetAddContentRefDataCell(FAddContentRefDataCell& rowParam, FName AddContentName) {
    return false;
}

bool UAddContentManager::ConstructLocalEntitleData() {
    return false;
}

UAddContentManager::UAddContentManager() {
    this->_RefDataTable = NULL;
    this->_AddContentsPresentListDataTable = NULL;
}

