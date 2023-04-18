#include "AttackComponentBase.h"
#include "Templates/SubclassOf.h"

class AActor;
class UAttackComponentBase;
class UAttackInputComponent;
class UPlayerAnimControllerComponent;

void UAttackComponentBase::SpawnSASVisionActor(TSubclassOf<AActor> ActorClass, FName locationTagName, bool bFollow) {
}

void UAttackComponentBase::SetAttackInputKind_Implementation(RSAttackInputKind::Type kind) {
}

void UAttackComponentBase::SetAttacking(bool bAttacking, bool bAddComboCount) {
}





void UAttackComponentBase::OnChangeAnimKind(PlayerAnimKind NewKind, PlayerAnimKind OldKind) {
}

bool UAttackComponentBase::IsAttacking_Implementation() const {
    return false;
}

bool UAttackComponentBase::IsAttackCombo() {
    return false;
}


UPlayerAnimControllerComponent* UAttackComponentBase::GetOwnerAnimCon() const {
    return NULL;
}



TEnumAsByte<RSAttackInputKind::Type> UAttackComponentBase::GetAttackInputKind() const {
    return RSAttackInputKind::Attack1;
}

UAttackInputComponent* UAttackComponentBase::GetAttackInputComponent() const {
    return NULL;
}

UAttackComponentBase* UAttackComponentBase::FindAttackingComponent(AActor* Actor) {
    return NULL;
}

UAttackComponentBase* UAttackComponentBase::FindAttackComponentBySASVisionActor(AActor* Actor, TSubclassOf<AActor> ActorClass) {
    return NULL;
}

void UAttackComponentBase::DisappearSASVisionActor() {
}

void UAttackComponentBase::DestroySASVisionActor() {
}

void UAttackComponentBase::ClearInputAll() {
}



void UAttackComponentBase::AddComboCount() {
}

UAttackComponentBase::UAttackComponentBase() {
    this->_animCon = NULL;
}

