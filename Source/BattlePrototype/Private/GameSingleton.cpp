#include "GameSingleton.h"

class UGameSingleton;

UGameSingleton* UGameSingleton::GetForBP() {
    return NULL;
}

UGameSingleton::UGameSingleton() {
    this->m_MinimizeTimer = 0.00f;
    this->m_ResolutionChangeTimer = 0.00f;
    this->m_DefaultResolutionTimer = 0.00f;
    this->m_IsFocus = true;
}

