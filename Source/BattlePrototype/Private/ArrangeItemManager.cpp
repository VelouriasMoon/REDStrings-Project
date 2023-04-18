#include "ArrangeItemManager.h"

class AArrangeItemBase;

bool AArrangeItemManager::SetRebirth(const FName ID) {
    return false;
}

void AArrangeItemManager::SetRandomArrangeParam2Actor(AArrangeItemBase* _actor) {
}

bool AArrangeItemManager::SetIntervalTime(const FName ID, const float arrangeItemIntervaltime, float& resultIntervalTime) {
    return false;
}

bool AArrangeItemManager::SetAcquired(const FName ID, const bool Flag) {
    return false;
}

bool AArrangeItemManager::SetAccessed(const FName ID, const bool Flag) {
    return false;
}

bool AArrangeItemManager::GetArrangeItemParam(const FName ID, float& IntervalTime, bool& Acquired, bool& Accessed) {
    return false;
}

void AArrangeItemManager::ChangeAreaWork() {
}

AArrangeItemManager::AArrangeItemManager() {
    this->m_timerCount = 0.00f;
    this->m_LotteryPrintDispEndTime = 0.00f;
    this->m_isLotteryPrintDispDrawed = false;
    this->m_isDebugLotteryPrintDispFlag = false;
    this->m_isDebugForceRepopTimeFlag = false;
    this->m_debugForceRepopTime = 5.00f;
}

