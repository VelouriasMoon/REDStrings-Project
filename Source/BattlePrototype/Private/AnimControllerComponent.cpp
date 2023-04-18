#include "AnimControllerComponent.h"

class AActor;
class UAnimControllerComponent;
class UObject;

void UAnimControllerComponent::RequestTumbleWakeup_Implementation() {
}

void UAnimControllerComponent::RequestTumble_Implementation() {
}

void UAnimControllerComponent::RequestFaintWakeup_Implementation() {
}

void UAnimControllerComponent::RequestFaint_Implementation() {
}

void UAnimControllerComponent::RequestDamageFlyWakeup_Implementation() {
}

void UAnimControllerComponent::RequestDamageFly_Implementation() {
}

void UAnimControllerComponent::RequestDamage_Implementation(HCDamageKind damageKind, float StiffenSec, float HitStopSec, float HitStopRate, FRotator Rot) {
}

void UAnimControllerComponent::ReceiveNotifySuperArmor(UObject* Notify, int32 ResistStagger, bool bBegin) {
}

void UAnimControllerComponent::ReceiveNotifyDirectionControl(UObject* Notify, bool bBegin, float RotateSpeed, bool bUseSocket, FName SocketName) {
}

bool UAnimControllerComponent::IsUseSocketDirectionControl() const {
    return false;
}

bool UAnimControllerComponent::IsEnableDirectionControl() const {
    return false;
}

bool UAnimControllerComponent::IsAnimTumbleDowning_Implementation() const {
    return false;
}

bool UAnimControllerComponent::IsAnimTumble_Implementation() const {
    return false;
}

bool UAnimControllerComponent::IsAnimFaintDowning_Implementation() const {
    return false;
}

bool UAnimControllerComponent::IsAnimFaint_Implementation() const {
    return false;
}

bool UAnimControllerComponent::IsAnimDamageFlyRise_Implementation() const {
    return false;
}

bool UAnimControllerComponent::IsAnimDamageFlyLanding_Implementation() const {
    return false;
}

bool UAnimControllerComponent::IsAnimDamageFly_Implementation() const {
    return false;
}

int32 UAnimControllerComponent::GetResistStagger() const {
    return 0;
}

FName UAnimControllerComponent::GetDirectionControlSocketName() const {
    return NAME_None;
}

float UAnimControllerComponent::GetDirectionControllRotateSpeed() const {
    return 0.0f;
}

UAnimControllerComponent* UAnimControllerComponent::GetAnimControllerComponentFromActor(AActor* Actor) {
    return NULL;
}

UAnimControllerComponent::UAnimControllerComponent() {
}

