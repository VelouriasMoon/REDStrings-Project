#include "BrainMessageParamManager.h"

class URSGameInstance;

void UBrainMessageParamManager::UpdateMessageIndication_BindInner(int32 threadNum) {
}

void UBrainMessageParamManager::UpdateMessageIndication_Bind() {
}

void UBrainMessageParamManager::UpdateMessageIndication(int32 threadNum, int32 messageNum, bool isReply, const bool isNoticeEnable) {
}

void UBrainMessageParamManager::StopThreadTimer() {
}

TArray<FName> UBrainMessageParamManager::StartAndGetBirthdayThreadID(int32 Year, int32 Month, int32 Day) {
    return TArray<FName>();
}

void UBrainMessageParamManager::SetStopUpdatingMessageFlag(bool bStop) {
}

void UBrainMessageParamManager::SetIsOpenThred(int32 threadNum, bool IsOpen) {
}

void UBrainMessageParamManager::SetAlreadyLookNum(int32 threadNum, int32 lookNum) {
}

void UBrainMessageParamManager::SetAlreadyEmergenceNum(int32 threadNum, int32 lookNum) {
}

void UBrainMessageParamManager::ResumeThreadTimer() {
}

bool UBrainMessageParamManager::IsReadyToReply(int32 threadNum, int32 messageNum, bool ignoreCommonTimming) {
    return false;
}

bool UBrainMessageParamManager::IsBanToReply(int32 threadNum, int32 messageNum) {
    return false;
}

bool UBrainMessageParamManager::IsActiveThreadTimer(int32 threadNum) {
    return false;
}

void UBrainMessageParamManager::InitData(URSGameInstance* gameInst) {
}

void UBrainMessageParamManager::InitBirthdayData() {
}

void UBrainMessageParamManager::InitAtExNewGame(EPlayerID MainPlayerID) {
}

bool UBrainMessageParamManager::GetTiedBondsEPID(int32 threadNum, int32 messageNum, FString& bondsBPReference) {
    return false;
}

int32 UBrainMessageParamManager::GetThreadNumFromThreadID(FName threadID) {
    return 0;
}

FBirthdayBrainMessageData UBrainMessageParamManager::GetThreadNameFromBirthdayID(FName threadID) {
    return FBirthdayBrainMessageData{};
}

void UBrainMessageParamManager::GetSortedIndexArrayForSortID(TArray<int32>& resultArray) {
}

void UBrainMessageParamManager::GetSortedIndexArray(EBrainMesSortType SortType, TArray<int32>& sortedIndexArray) {
}

int32 UBrainMessageParamManager::GetNextMessageNum(int32 threadNum) {
    return 0;
}

bool UBrainMessageParamManager::GetIsOpenThread(int32 threadNum) {
    return false;
}

TArray<int32> UBrainMessageParamManager::GetEmergenceMessageNum(int32 threadNum) {
    return TArray<int32>();
}

int32 UBrainMessageParamManager::GetAlreadyLookNum(int32 threadNum) {
    return 0;
}

int32 UBrainMessageParamManager::GetAlreadyEmergenceNum(int32 threadNum) {
    return 0;
}

void UBrainMessageParamManager::FinishWork(URSGameInstance* gameInst) {
}

void UBrainMessageParamManager::DoChangeMainPlayer() {
}

void UBrainMessageParamManager::CheckMessageConditions(int32 threadNum, int32 messageNum, bool isReply, const bool isNoticeEnable) {
}

bool UBrainMessageParamManager::CheckAppropriateThreadFromTitleID(FName TitleID, EPlayerID MainPlayerID) {
    return false;
}

void UBrainMessageParamManager::AllOpenMessageIgnorConditionsAndLock(const int32 targetThread) {
}

void UBrainMessageParamManager::AddMessageIgnorConditions(const int32 targetThread, const int32 messageNum) {
}

UBrainMessageParamManager::UBrainMessageParamManager() {
    this->gameInst_ = NULL;
    this->brainMessageData_ = NULL;
    this->levelManager_ = NULL;
    this->bUseDebugReplyTime_DEBUG = false;
    this->debugReplyTime_DEBUG = 3.00f;
}

