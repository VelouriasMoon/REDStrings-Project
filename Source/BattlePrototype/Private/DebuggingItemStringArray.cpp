#include "DebuggingItemStringArray.h"

class ADebuggingItemBase;

void ADebuggingItemStringArray::SetStringIndex(int32 InIndex) {
}

void ADebuggingItemStringArray::SetComboBoxSetting(const TArray<FText>& InStringArray) {
}

void ADebuggingItemStringArray::OnKeyRightFunc(const ADebuggingItemBase* InItem, bool IsRepeat, int32 InSpeed) {
}

void ADebuggingItemStringArray::OnKeyLeftFunc(const ADebuggingItemBase* InItem, bool IsRepeat, int32 InSpeed) {
}

int32 ADebuggingItemStringArray::GetStringIndex() const {
    return 0;
}

FText ADebuggingItemStringArray::GetString() const {
    return FText::GetEmpty();
}

int32 ADebuggingItemStringArray::GetIndexByString(FText SearchString) const {
    return 0;
}

ADebuggingItemStringArray::ADebuggingItemStringArray() {
    this->Index = 0;
}

