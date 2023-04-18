#include "DebuggingItemPlayTimeGroup.h"

class ADebuggingItemEvent;
class ADebuggingItemInt;

void ADebuggingItemPlayTimeGroup::UpdateDebugParam() {
}

void ADebuggingItemPlayTimeGroup::OnExecChangePlayTime(const ADebuggingItemEvent* Item) {
}

void ADebuggingItemPlayTimeGroup::OnChangePlayTimePartial(const ADebuggingItemInt* Item) {
}

void ADebuggingItemPlayTimeGroup::OnChangePlayTime(const ADebuggingItemInt* Item) {
}

ADebuggingItemPlayTimeGroup::ADebuggingItemPlayTimeGroup() {
    this->paramMan = NULL;
}

