#include "SaveLoadSystemParamManager.h"

void USaveLoadSystemParamManager::SetLastSaveSlotNo(const int32 slotNo) {
}

int32 USaveLoadSystemParamManager::GetLastSaveSlotNo() {
    return 0;
}

USaveLoadSystemParamManager::USaveLoadSystemParamManager() {
    this->m_LastSaveSlotNo = -2;
    this->m_ProgressID = 0;
    this->m_LocationID = -1;
    this->m_AreaID = -1;
    this->m_VariationID = -1;
    this->m_PortalID = -1;
    this->m_LiftFloorList.AddDefaulted(2);
}

