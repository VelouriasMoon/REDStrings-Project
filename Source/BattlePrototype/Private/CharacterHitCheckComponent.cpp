#include "CharacterHitCheckComponent.h"

class ARSCharacterBase;
class UCapsuleComponent;

void UCharacterHitCheckComponent::UnregisterHitCheck(UCapsuleComponent* Capsule0, UCapsuleComponent* Capsule1) {
}

void UCharacterHitCheckComponent::SetEnable(bool bEnable) {
}

void UCharacterHitCheckComponent::RegisterHitCheck(UCapsuleComponent* Capsule0, UCapsuleComponent* Capsule1) {
}

bool UCharacterHitCheckComponent::IsRegisteredAny() const {
    return false;
}

ARSCharacterBase* UCharacterHitCheckComponent::GetRegisteredHitCharacter(int32 Index) const {
    return NULL;
}

int32 UCharacterHitCheckComponent::GetRegisteredCount() const {
    return 0;
}

UCharacterHitCheckComponent::UCharacterHitCheckComponent() {
}

