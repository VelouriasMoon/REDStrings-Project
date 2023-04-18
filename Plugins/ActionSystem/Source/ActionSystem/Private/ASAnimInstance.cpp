#include "ASAnimInstance.h"

class UASAnimNotify_StateChange;
class UASStateMachine;

void UASAnimInstance::SetDynamicSubMachine(const FString& AnimNodeName, const FString& StateName, const UASStateMachine* StateMachineAsset) {
}

void UASAnimInstance::SendCommand(const FString& Command, const bool bForce) {
}


void UASAnimInstance::JumpMachineState(const FString& MachinName, const FString& StateName) {
}

void UASAnimInstance::JumpDamageState(TEnumAsByte<EDamageState> State) {
}

bool UASAnimInstance::IsHitShift() {
    return false;
}

bool UASAnimInstance::HasTag(const FName& Tag) const {
    return false;
}

void UASAnimInstance::AnimNotify_StateChange(UASAnimNotify_StateChange* Notify) {
}

UASAnimInstance::UASAnimInstance() {
    this->DamageStateMachine = TEXT("StateMachine");
    this->DamageState = TEXT("Damage");
}

