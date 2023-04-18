#include "CharacterDatatableAccessorComponent.h"

class AActor;
class UCharacterDatatableAccessorComponent;

void UCharacterDatatableAccessorComponent::SetAttackCalcInfo(const FAttackCalcInfo& AttackCalcInfo) {
}

void UCharacterDatatableAccessorComponent::InheritAttackCalcInfo(AActor* Parent, AActor* child) {
}

FCharactersParameterTable UCharacterDatatableAccessorComponent::GetParamTable_Implementation() const {
    return FCharactersParameterTable{};
}

FCharactersParameterBasic UCharacterDatatableAccessorComponent::GetParamBasic_Implementation() const {
    return FCharactersParameterBasic{};
}

FDamageCalcInfo UCharacterDatatableAccessorComponent::GetDamageCalcInfo_Implementation() const {
    return FDamageCalcInfo{};
}

UCharacterDatatableAccessorComponent* UCharacterDatatableAccessorComponent::GetCharacterDatatableAccessorComponent(AActor* Actor) {
    return NULL;
}

FAttackCalcInfo UCharacterDatatableAccessorComponent::GetAttackCalcInfo_Implementation() const {
    return FAttackCalcInfo{};
}

UCharacterDatatableAccessorComponent::UCharacterDatatableAccessorComponent() {
}

