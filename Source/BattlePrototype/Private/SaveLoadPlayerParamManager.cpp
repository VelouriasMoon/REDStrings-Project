#include "SaveLoadPlayerParamManager.h"

USaveLoadPlayerParamManager::USaveLoadPlayerParamManager() {
    this->m_BattleMemberMain = EPlayerID::Invalid;
    this->m_BattleMemberLeft = EPlayerID::Invalid;
    this->m_BattleMemberRight = EPlayerID::Invalid;
    this->m_NpcAssistCountHP = 0;
    this->m_NpcAssistCountBadStatus = 0;
    this->m_NpcAssistCountRevive = 0;
    this->m_bDriveUsedFlag = false;
}

