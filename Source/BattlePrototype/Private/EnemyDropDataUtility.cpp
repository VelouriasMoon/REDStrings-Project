#include "EnemyDropDataUtility.h"

int32 UEnemyDropDataUtility::GetDropMoney(const FEnemyDropDataCell& rCell) {
    return 0;
}

float UEnemyDropDataUtility::GetDropItemProbability(const FEnemyDropDataCell& rCell) {
    return 0.0f;
}

int32 UEnemyDropDataUtility::GetDropExperience(const FEnemyDropDataCell& rCell) {
    return 0;
}

FString UEnemyDropDataUtility::GetDebugLotteryParamString(int32 Index) {
    return TEXT("");
}

bool UEnemyDropDataUtility::GetDataDropItemID(const FEnemyDropDataCell& rCell, const bool isRare, FName& ItemId, int32& itemNum, bool killByBrainCrash, FName EnemyId, int32 tableNo, float Rate, float randnum) {
    return false;
}

bool UEnemyDropDataUtility::GetCoreDropItemID(const FEnemyDropDataCell& rCell, const bool isRare, FName& ItemId, int32& itemNum, bool killByBrainCrash, FName EnemyId, int32 tableNo, float Rate, float randnum) {
    return false;
}

void UEnemyDropDataUtility::DebugDropItemLotteryParam(FName EnemyId, int32 tableNo, float Rate, float randnum) {
}

UEnemyDropDataUtility::UEnemyDropDataUtility() {
}

