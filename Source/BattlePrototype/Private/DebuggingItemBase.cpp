#include "DebuggingItemBase.h"

class ADebuggingItemBase;

ADebuggingItemBase* ADebuggingItemBase::SearchItem(const FText& InHashName, bool InRecursive, bool InIgnoreCase) {
    return NULL;
}

void ADebuggingItemBase::Dump(int32 InIndent) {
}

void ADebuggingItemBase::DestroyItem(bool DestroyChild) {
}


ADebuggingItemBase::ADebuggingItemBase() {
    this->Priority = 0;
}

