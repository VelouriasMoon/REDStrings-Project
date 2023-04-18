#include "DebuggingItemBool.h"

class ADebuggingItemBase;

void ADebuggingItemBool::SetValue(bool InValue) {
}

void ADebuggingItemBool::OnKeySelectFunc(const ADebuggingItemBase* InItem, bool IsRepeat) {
}

bool ADebuggingItemBool::GetValue() const {
    return false;
}

ADebuggingItemBool::ADebuggingItemBool() {
    this->Value = false;
}

