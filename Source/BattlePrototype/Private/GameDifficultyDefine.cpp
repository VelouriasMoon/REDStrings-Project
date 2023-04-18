#include "GameDifficultyDefine.h"

void UGameDifficultyDefine::SetDefaultMag(float _defaultMag) {
}

void UGameDifficultyDefine::SetAddMag(float _addMag) {
}

float UGameDifficultyDefine::GetDifficultyMag() {
    return 0.0f;
}

float UGameDifficultyDefine::GetDefaultMag() {
    return 0.0f;
}

bool UGameDifficultyDefine::DifficultyMagCalc() {
    return false;
}

UGameDifficultyDefine::UGameDifficultyDefine() {
    this->m_addMag = 0.50f;
    this->m_difficultyMag = 0.00f;
    this->m_defaultMag = 1.00f;
}

