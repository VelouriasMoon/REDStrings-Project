#include "TeamComponent.h"

class AActor;
class UTeamComponent;

bool UTeamComponent::IsRival(const UTeamComponent* Opponent) const {
    return false;
}

bool UTeamComponent::IsPlayer() const {
    return false;
}

bool UTeamComponent::IsMob() const {
    return false;
}

bool UTeamComponent::IsFriend(const UTeamComponent* Opponent) const {
    return false;
}

bool UTeamComponent::IsEnemy() const {
    return false;
}

UTeamComponent* UTeamComponent::GetTeamComponentFromActor(AActor* Actor) {
    return NULL;
}

void UTeamComponent::CopyTeamParameterFrom(UTeamComponent* Other) {
}

void UTeamComponent::CopyTeamParameterBetweenActor(AActor* From, AActor* To) {
}

UTeamComponent::UTeamComponent() {
    this->OwnKind = TeamKind::Player;
}

