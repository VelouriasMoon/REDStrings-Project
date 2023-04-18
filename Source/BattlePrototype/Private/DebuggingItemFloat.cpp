#include "DebuggingItemFloat.h"

class ADebuggingItemBase;

void ADebuggingItemFloat::SetValue(float InValue) {
}

void ADebuggingItemFloat::SetSliderSettings(float InMin, float InMax, float InStep) {
}

void ADebuggingItemFloat::OnKeyRightFunc(const ADebuggingItemBase* InItem, bool IsRepeat, int32 InSpeed) {
}

void ADebuggingItemFloat::OnKeyLeftFunc(const ADebuggingItemBase* InItem, bool IsRepeat, int32 InSpeed) {
}

float ADebuggingItemFloat::GetValue() const {
    return 0.0f;
}

ADebuggingItemFloat::ADebuggingItemFloat() {
    this->Min = 0.00f;
    this->Max = 1.00f;
    this->Step = 0.00f;
    this->Value = 0.00f;
}

