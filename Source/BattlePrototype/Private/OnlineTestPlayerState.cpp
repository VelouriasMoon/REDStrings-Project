#include "OnlineTestPlayerState.h"
#include "Net/UnrealNetwork.h"

void AOnlineTestPlayerState::SetData_Implementation(FOnlineTestData Value) {
}
bool AOnlineTestPlayerState::SetData_Validate(FOnlineTestData Value) {
    return true;
}

void AOnlineTestPlayerState::OnRep_SetTestData() {
}

void AOnlineTestPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOnlineTestPlayerState, TestData);
}

AOnlineTestPlayerState::AOnlineTestPlayerState() {
}

