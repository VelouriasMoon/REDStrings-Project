#include "ASCharacterBase.h"
#include "Net/UnrealNetwork.h"

void AASCharacterBase::ServerStateChange_Implementation(int32 MachineIndex, int32 PreviousState, int32 NextState) {
}
bool AASCharacterBase::ServerStateChange_Validate(int32 MachineIndex, int32 PreviousState, int32 NextState) {
    return true;
}

void AASCharacterBase::SendAnimCommand(const FString& Command, bool Force) {
}


void AASCharacterBase::OnRep_ReplicateState() {
}

void AASCharacterBase::JumpMachineState(const FString& MachinName, const FString& StateName) {
}

bool AASCharacterBase::HasAnimTag(FName Tag) const {
    return false;
}

TArray<FName> AASCharacterBase::GetAnimTags() const {
    return TArray<FName>();
}

void AASCharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AASCharacterBase, ReplicateState);
}

AASCharacterBase::AASCharacterBase() {
}

