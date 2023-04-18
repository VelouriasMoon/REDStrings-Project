#include "DamagePropertyMediatorComponent.h"

class AActor;
class UDamagePropertyMediatorComponent;
class UPrimitiveComponent;

void UDamagePropertyMediatorComponent::SetHitZeroEffectSE(const FName& ClaimantName, const FHitZeroEffectAndSE& effectSE) {
}

void UDamagePropertyMediatorComponent::SetDamageRate(const FName& ClaimantName, float DamageRate) {
}

void UDamagePropertyMediatorComponent::SetDamageCollisionDisable(const FName& ClaimantName) {
}

void UDamagePropertyMediatorComponent::SetCacheCollisionType(int32 Index, TEnumAsByte<ECollisionEnabled::Type> Type) {
}

void UDamagePropertyMediatorComponent::SetBlowRate(const FName& ClaimantName, float BlowRate) {
}

FHitZeroEffectAndSE UDamagePropertyMediatorComponent::GetTotalHitZeroEffectSE() const {
    return FHitZeroEffectAndSE{};
}

UDamagePropertyMediatorComponent* UDamagePropertyMediatorComponent::GetDamagePropertyMediatorComponentFromActor(AActor* Actor) {
    return NULL;
}

int32 UDamagePropertyMediatorComponent::GetCacheCollisionTypeNum() {
    return 0;
}

int32 UDamagePropertyMediatorComponent::GetCacheCollisionTypeIndex(UPrimitiveComponent* pPrimitive) {
    return 0;
}

TEnumAsByte<ECollisionEnabled::Type> UDamagePropertyMediatorComponent::GetCacheCollisionType(int32 Index) {
    return ECollisionEnabled::NoCollision;
}

void UDamagePropertyMediatorComponent::ClearHitZeroEffectSE(const FName& ClaimantName) {
}

void UDamagePropertyMediatorComponent::ClearDamageRate(const FName& ClaimantName) {
}

void UDamagePropertyMediatorComponent::ClearDamageCollisionDisable(const FName& ClaimantName) {
}

void UDamagePropertyMediatorComponent::ClearBlowRate(const FName& ClaimantName) {
}

float UDamagePropertyMediatorComponent::CalcTotalDamageRate() const {
    return 0.0f;
}

float UDamagePropertyMediatorComponent::CalcTotalBlowRate() const {
    return 0.0f;
}

UDamagePropertyMediatorComponent::UDamagePropertyMediatorComponent() {
}

