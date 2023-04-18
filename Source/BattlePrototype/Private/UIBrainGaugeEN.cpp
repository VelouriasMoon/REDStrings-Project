#include "UIBrainGaugeEN.h"

void UUIBrainGaugeEN::StartBrainField() {
}

void UUIBrainGaugeEN::SetGaugePercent(float percent, float Time) {
}

void UUIBrainGaugeEN::SetGaugeMax(bool IsFull) {
}

void UUIBrainGaugeEN::EndBrainField() {
}

UUIBrainGaugeEN::UUIBrainGaugeEN() {
    this->m_Percent = 0.00f;
    this->m_Time = 0.00f;
    this->m_FlagPercentUpdate = false;
    this->m_FlagGaugeMax = false;
    this->m_FlagBrainField = false;
}

