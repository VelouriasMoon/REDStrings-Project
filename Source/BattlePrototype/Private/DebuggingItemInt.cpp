#include "DebuggingItemInt.h"

class ADebuggingItemBase;

void ADebuggingItemInt::SetValue(int32 InValue) {
}

void ADebuggingItemInt::SetSliderSettings(int32 InMin, int32 InMax, int32 InStep) {
}

void ADebuggingItemInt::OnKeyRightFunc(const ADebuggingItemBase* InItem, bool IsRepeat, int32 InSpeed) {
}

void ADebuggingItemInt::OnKeyLeftFunc(const ADebuggingItemBase* InItem, bool IsRepeat, int32 InSpeed) {
}

int32 ADebuggingItemInt::GetValue() const {
    return 0;
}

ADebuggingItemInt::ADebuggingItemInt() {
    this->Min = 0;
    this->Max = 100;
    this->Step = 1;
    this->Value = 0;
}

