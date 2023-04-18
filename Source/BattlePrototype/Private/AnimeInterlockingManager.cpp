#include "AnimeInterlockingManager.h"

void UAnimeInterlockingManager::SetIsChallengeInfoCorrectAnswer(bool isCorrectAnswer) {
}

void UAnimeInterlockingManager::SetIsAnimeInterlockingNumRewardAchievement(FName AnimeInterlockingNumRewardName, const bool isAchievement) {
}

void UAnimeInterlockingManager::SetIsAnimeInterlockingNoticedFlag(FName AnimeInterlockingName, const bool isNoticed) {
}

void UAnimeInterlockingManager::SetIsAnimeInterlockingNewFlag(FName AnimeInterlockingName, const bool isNewFlag) {
}

void UAnimeInterlockingManager::SetIsAnimeInterlockingGetReward(FName AnimeInterlockingName, const bool isGetReward) {
}

void UAnimeInterlockingManager::SetIsAnimeInterlockingGetNumReward(FName AnimeInterlockingNumRewardName, const bool isGetNumReward) {
}

void UAnimeInterlockingManager::SetIsAnimeInterlockingAchievementQuest(FName AnimeInterlockingName, const bool isAchievementQuest) {
}

void UAnimeInterlockingManager::SetChallengeInfoAnimeInterlockingName(FName AnimeInterlockingName) {
}

bool UAnimeInterlockingManager::SetAnimeInterlockingSaveParams(FName AnimeInterlockingName, FAnimeInterlockingSaveParams& SaveParams) {
    return false;
}

bool UAnimeInterlockingManager::SetAnimeInterlockingNumRewardSaveParams(FName AnimeInterlockingNumName, FAnimeInterlockingNumRewardSaveParams& SaveParams) {
    return false;
}

void UAnimeInterlockingManager::SetAnimeInterlockingIncorrectAnswerNum(FName AnimeInterlockingName, const int32 IncorrectAnswerNum) {
}

bool UAnimeInterlockingManager::IsEnableQuest(FName AnimeInterlockingName) {
    return false;
}

bool UAnimeInterlockingManager::IsChallengeInfoCorrectAnswer() {
    return false;
}

bool UAnimeInterlockingManager::IsAnimeInterlockingNumRewardAchievement(FName AnimeInterlockingNumRewardName) {
    return false;
}

bool UAnimeInterlockingManager::IsAnimeInterlockingNoticedFlag(FName AnimeInterlockingName) {
    return false;
}

bool UAnimeInterlockingManager::IsAnimeInterlockingNewFlag(FName AnimeInterlockingName) {
    return false;
}

bool UAnimeInterlockingManager::IsAnimeInterlockingGetReward(FName AnimeInterlockingName) {
    return false;
}

bool UAnimeInterlockingManager::IsAnimeInterlockingGetNumReward(FName AnimeInterlockingNumRewardName) {
    return false;
}

bool UAnimeInterlockingManager::IsAnimeInterlockingAchievementQuest(FName AnimeInterlockingName) {
    return false;
}

int32 UAnimeInterlockingManager::GetQuestClearNum() {
    return 0;
}

FName UAnimeInterlockingManager::GetChallengeInfoAnimeInterlockingName() {
    return NAME_None;
}

bool UAnimeInterlockingManager::GetAnimeInterlockingSubReward(FName AnimeInterlockingName, FAnimeInterlockingsPresentList& presentList) {
    return false;
}

bool UAnimeInterlockingManager::GetAnimeInterlockingSaveParams(FName AnimeInterlockingName, FAnimeInterlockingSaveParams& SaveParams) {
    return false;
}

bool UAnimeInterlockingManager::GetAnimeInterlockingRewardToKins(const FString& ItemId, int32& KinsNum) {
    return false;
}

bool UAnimeInterlockingManager::GetAnimeInterlockingReward(FName AnimeInterlockingName, FAnimeInterlockingsPresentList& presentList) {
    return false;
}

void UAnimeInterlockingManager::GetAnimeInterlockingRefDataList(FName AnimeInterlockingName, TArray<FAnimeInterlockingRefDataCell>& refDataList) {
}

bool UAnimeInterlockingManager::GetAnimeInterlockingRefData(FName AnimeInterlockingName, FAnimeInterlockingRefDataCell& refData) {
    return false;
}

bool UAnimeInterlockingManager::GetAnimeInterlockingNumSubReward(FName AnimeInterlockingNumName, FAnimeInterlockingsPresentList& presentList) {
    return false;
}

bool UAnimeInterlockingManager::GetAnimeInterlockingNumRewardSaveParams(FName AnimeInterlockingNumName, FAnimeInterlockingNumRewardSaveParams& SaveParams) {
    return false;
}

bool UAnimeInterlockingManager::GetAnimeInterlockingNumReward(FName AnimeInterlockingNumName, FAnimeInterlockingsPresentList& presentList) {
    return false;
}

void UAnimeInterlockingManager::GetAnimeInterlockingNumRefDataList(FName AnimeInterlockingNumName, TArray<FAnimeInterlockingNumRefDataCell>& refDataList) {
}

bool UAnimeInterlockingManager::GetAnimeInterlockingNumRefData(FName AnimeInterlockingNumName, FAnimeInterlockingNumRefDataCell& refData) {
    return false;
}

int32 UAnimeInterlockingManager::GetAnimeInterlockingIncorrectAnswerNum(FName AnimeInterlockingName) {
    return 0;
}

void UAnimeInterlockingManager::GetAcquirableButNotAcquiredNumRewardNameList(TArray<FName>& nameList) {
}

void UAnimeInterlockingManager::AddAnimeInterlockingIncorrectAnswerNum(FName AnimeInterlockingName) {
}

UAnimeInterlockingManager::UAnimeInterlockingManager() {
    this->m_gameInstance = NULL;
    this->m_AnimeInterlockingData_DataTable = NULL;
    this->m_AnimeInterlockingReward_DataTable = NULL;
    this->m_AnimeInterlockingSubReward_DataTable = NULL;
    this->m_AnimeInterlockingNumData_DataTable = NULL;
    this->m_AnimeInterlockingNumReward_DataTable = NULL;
    this->m_AnimeInterlockingSubNumReward_DataTable = NULL;
    this->m_AnimeInterlockingRewardToKins_DataTable = NULL;
}

