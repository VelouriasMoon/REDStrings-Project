#include "RSAsyncTaskActorComponent.h"

void URSAsyncTaskActorComponent::SetExecAsyncTask(bool bExec) {
}

bool URSAsyncTaskActorComponent::IsIdleAsyncTask() const {
    return false;
}

bool URSAsyncTaskActorComponent::IsDoneAsyncTask() const {
    return false;
}

URSAsyncTaskActorComponent::URSAsyncTaskActorComponent() {
    this->bDebugSyncExecFlag = false;
}

