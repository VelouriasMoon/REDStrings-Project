#include "CharacterVitalityDataAsset.h"

UCharacterVitalityDataAsset::UCharacterVitalityDataAsset() {
    this->OccurrenceSlowSpeed = 0.02f;
    this->DelayTimeBeforeNextWave = 1.50f;
    this->AllWaveDeleteTime = 1.00f;
    this->CenterWaveRandomRangeMin = 6;
    this->CenterWaveRandomRangeMax = 9;
    this->SideWaveRandomRangeMin = 1;
    this->SideWaveRandomRangeMax = 5;
    this->CenterWaveRandomRightMoveRange = 0;
    this->CenterWaveRandomLeftMoveRange = 1;
    this->SideWaveRandomMinMoveRange = 2;
    this->SideWaveRandomMaxMoveRange = 3;
    this->SpecialGapBaseValue = 0.08f;
}

