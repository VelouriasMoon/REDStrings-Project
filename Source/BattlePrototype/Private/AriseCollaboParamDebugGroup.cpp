#include "AriseCollaboParamDebugGroup.h"

class ADebuggingItemEvent;

void AAriseCollaboParamDebugGroup::OnPageOpened() {
}

void AAriseCollaboParamDebugGroup::OnExecuteParameterChange(const ADebuggingItemEvent* Item) {
}

void AAriseCollaboParamDebugGroup::OnExecuteCheckSave(const ADebuggingItemEvent* Item) {
}

AAriseCollaboParamDebugGroup::AAriseCollaboParamDebugGroup() {
    this->DebugSaveLoadScreenParamManager = NULL;
}

