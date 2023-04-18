#include "TrialParamDebugGroup.h"

class ADebuggingItemEvent;

void ATrialParamDebugGroup::OnPageOpened() {
}

void ATrialParamDebugGroup::OnExecuteParameterChange(const ADebuggingItemEvent* Item) {
}

void ATrialParamDebugGroup::OnExecuteLoadTrialSave(const ADebuggingItemEvent* Item) {
}

ATrialParamDebugGroup::ATrialParamDebugGroup() {
    this->DebugSaveLoadScreenParamManager = NULL;
}

