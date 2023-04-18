#include "ASTransition_BlueprintBase.h"


bool UASTransition_BlueprintBase::IsPlayEndForce() const {
    return false;
}

bool UASTransition_BlueprintBase::IsPlayEnd() const {
    return false;
}

float UASTransition_BlueprintBase::GetElapsedTime() const {
    return 0.0f;
}

float UASTransition_BlueprintBase::GetAnimTimeLength() const {
    return 0.0f;
}

float UASTransition_BlueprintBase::GetAnimTime() const {
    return 0.0f;
}

TEnumAsByte<EAnimCommandState> UASTransition_BlueprintBase::CheckCommandState(const FString& Command) const {
    return ACS_Failed;
}

bool UASTransition_BlueprintBase::CheckCommand(const FString& Command) const {
    return false;
}

UASTransition_BlueprintBase::UASTransition_BlueprintBase() {
}

