#include "DeadStateMediatorComponent.h"

void UDeadStateMediatorComponent::UpdateDead() {
}

bool UDeadStateMediatorComponent::TryStartDead() {
    return false;
}

void UDeadStateMediatorComponent::StartDead() {
}

void UDeadStateMediatorComponent::SetDisableAutoRevibeAfterDead() {
}

bool UDeadStateMediatorComponent::IsAbleDead() {
    return false;
}

UDeadStateMediatorComponent::UDeadStateMediatorComponent() {
    this->_deadStartTime = 0.00f;
    this->_deadKeepSec = 7.00f;
    this->_disableAutoRevive = false;
}

