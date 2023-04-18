#include "PurposeMessageParamManager.h"

class URSGameInstance;

void UPurposeMessageParamManager::SetPurposeMessageNum(int32 Num) {
}

void UPurposeMessageParamManager::SetPurposeMessage(const FString& messageID) {
}

void UPurposeMessageParamManager::InitData(URSGameInstance* gameInst) {
}

int32 UPurposeMessageParamManager::GetPurposeMessageNum() {
    return 0;
}

FName UPurposeMessageParamManager::GetPurposeMessage() {
    return NAME_None;
}

FName UPurposeMessageParamManager::GetDLCBondsPurposeMessage() {
    return NAME_None;
}

FName UPurposeMessageParamManager::GetBondsPurposeMessage(EPlayerID heroID, EPlayerID TargetID) {
    return NAME_None;
}

UPurposeMessageParamManager::UPurposeMessageParamManager() {
    this->dataTable_ = NULL;
    this->bondsPurposeTable_ = NULL;
}

