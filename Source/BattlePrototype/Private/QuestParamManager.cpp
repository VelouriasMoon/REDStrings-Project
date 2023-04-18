#include "QuestParamManager.h"

class URSGameInstance;

void UQuestParamManager::ThrowSubQuestNotification(FName questId) {
}

void UQuestParamManager::SetSubQuestState(int32 QuestNumber, QuestProgressState State) {
}

void UQuestParamManager::SetNewIcon(QuestType qType, int32 QuestNumber, bool flg) {
}

void UQuestParamManager::SetMainQuestState(int32 QuestNumber, QuestProgressState State) {
}

void UQuestParamManager::SetBondsQuestState(int32 QuestNumber, QuestProgressState State) {
}

void UQuestParamManager::SetBondsQuestProgressRate(int32 QuestNumber, int32 Rate) {
}

void UQuestParamManager::SetActiveSubQuestNumber(int32 subQuestNumber) {
}

void UQuestParamManager::KillEnemy(FName enemyName, FHCHitResult hcResult, EPsychicObjectUniqueType poType, int32 killNum, bool bBrainCrashMulti, EPlayerID holoPlayerID) {
}

bool UQuestParamManager::IsUnlockContentMainQuest(FName Key, int32 contentNumber) {
    return false;
}

bool UQuestParamManager::IsUnlockContentBondsEpisode(FName Key, int32 contentNumber) {
    return false;
}

bool UQuestParamManager::IsTargetEnemyForActiveSubQuest(const FString& enemyName) {
    return false;
}

bool UQuestParamManager::IsSubQuestRelatedToThePlayer(int32 QuestNumber) {
    return false;
}

bool UQuestParamManager::IsQuestEnemy(FName enemyName) {
    return false;
}

bool UQuestParamManager::IsBondsQuestRelatedToThePlayer(int32 QuestNumber) {
    return false;
}

void UQuestParamManager::InProgressSubQuest(int32 subQuestNumber) {
}

void UQuestParamManager::InProgressBondsQuest(int32 bondsQuestNumber) {
}

void UQuestParamManager::InitData(URSGameInstance* gameInst) {
}

void UQuestParamManager::InitAtExNewGame(EPlayerID MainPlayerID) {
}

QuestProgressState UQuestParamManager::GetSubQuestState(int32 QuestNumber) {
    return QuestProgressState::qpNotOpen;
}

int32 UQuestParamManager::GetSubQuestNumberFromID(FName questId) {
    return 0;
}

int32 UQuestParamManager::GetSubQuestNumberAchieved(const FName& questId, const FName& TargetID) {
    return 0;
}

TArray<int32> UQuestParamManager::GetQuestSortID(QuestType questTyp, SortType SortType, int32 activeNumber) {
    return TArray<int32>();
}

QuestProgressState UQuestParamManager::GetMainQuestState(int32 QuestNumber) {
    return QuestProgressState::qpNotOpen;
}

int32 UQuestParamManager::GetMainQuestNumberFromID(FName questId) {
    return 0;
}

FName UQuestParamManager::GetMainQuestIDFromNumber(int32 QuestNumber) {
    return NAME_None;
}

void UQuestParamManager::GetItem(FName ItemName, int32 itemNum) {
}

FName UQuestParamManager::GetIDFromSubQuestNumber(int32 QuestNumber) {
    return NAME_None;
}

QuestProgressState UQuestParamManager::GetBondsQuestState(int32 QuestNumber) {
    return QuestProgressState::qpNotOpen;
}

int32 UQuestParamManager::GetBondsQuestProgressRate(int32 QuestNumber) {
    return 0;
}

int32 UQuestParamManager::GetBondsQuestNumberFromID(FName questId) {
    return 0;
}

FName UQuestParamManager::GetBondsEpisodeIDFromNumber(int32 Number) {
    return NAME_None;
}

int32 UQuestParamManager::GetActiveSubQuestNumber() {
    return 0;
}

bool UQuestParamManager::CheckSubQuestSuitableNowPlayer(int32 QuestNumber) {
    return false;
}

void UQuestParamManager::CheckSubQuestsStateNotOrder() {
}

bool UQuestParamManager::CheckPlayingDLCBondsNow() {
    return false;
}

bool UQuestParamManager::CheckNeedItem(FName ItemId) {
    return false;
}

bool UQuestParamManager::CheckFinishedDLCBonds(EPlayerID heroID, EPlayerID TargetID, int32 dlcNumber) {
    return false;
}

bool UQuestParamManager::CheckDLCQuestContentCheck(FName questId) {
    return false;
}

void UQuestParamManager::ChangeToProgressAllQuest() {
}

UQuestParamManager::UQuestParamManager() {
    this->activeMainQuest_ = -1;
    this->activeSubQuest_ = -1;
    this->activeSubQuestKasane_ = -1;
    this->bDrivemode_ = false;
}

