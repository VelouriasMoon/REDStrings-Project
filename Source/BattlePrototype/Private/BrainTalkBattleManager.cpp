#include "BrainTalkBattleManager.h"

UBrainTalkBattleManager::UBrainTalkBattleManager() {
    this->_gameInstance = NULL;
    this->m_KizunaLvUpFlow = EBrainTalkKizunaLvUpFlow::Standby;
    this->m_KizunaLvUpReplayTime = 0;
}

