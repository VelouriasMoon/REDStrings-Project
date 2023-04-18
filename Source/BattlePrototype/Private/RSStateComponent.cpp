#include "RSStateComponent.h"

int32 URSStateComponent::Update_Implementation() {
    return 0;
}

bool URSStateComponent::Transition_Implementation() {
    return false;
}

void URSStateComponent::SetState(int32 StateIndex, int32 Param) {
}

void URSStateComponent::SetProcess(int32 NewNextProcess) {
}

void URSStateComponent::NextProcess() {
}

int32 URSStateComponent::GetProcess() const {
    return 0;
}

int32 URSStateComponent::Exit_Implementation(int32 NextStateIndex) {
    return 0;
}

int32 URSStateComponent::Enter_Implementation(int32 Param) {
    return 0;
}

void URSStateComponent::EndProcess() {
}

URSStateComponent::URSStateComponent() {
}

