#include "QuestDataUtility.h"

class UObject;

void UQuestDataUtility::SetDLCBondsStartTargetChar(const UObject* WorldContextObject, FName dlcBondsID, EPlayerID startChar) {
}

bool UQuestDataUtility::KillEnemyDataForSubQuest(const UObject* WorldContextObject, FName enemyName, FHCHitResult hcResult, EPsychicObjectUniqueType poType, bool bBrainCrashMulti, EPlayerID holoPlayerID) {
    return false;
}

void UQuestDataUtility::GetCharStartedDLCBonds(const UObject* WorldContextObject, FName dlcBondsID, EPlayerID& startedCharID) {
}

bool UQuestDataUtility::CheckFinishedDLCBonds(const UObject* WorldContextObject, EPlayerID heroID, EPlayerID TargetID, int32 dlcNumber) {
    return false;
}

bool UQuestDataUtility::CheckDLCQuestContentCheck(const UObject* WorldContextObject, FName questId) {
    return false;
}

UQuestDataUtility::UQuestDataUtility() {
}

