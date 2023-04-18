#include "PsychicObjectManagerAsyncComponent.h"

class AActor;

void UPsychicObjectManagerAsyncComponent::UpdatePlayerPos() {
}

void UPsychicObjectManagerAsyncComponent::TickControlTickAsync() {
}

void UPsychicObjectManagerAsyncComponent::TickControlPrevAsync() {
}

void UPsychicObjectManagerAsyncComponent::SetTickReference(const FString& refName, bool Flag) {
}

void UPsychicObjectManagerAsyncComponent::SetTickControlParameter(float activeDistance, int32 actorNumPerFrame, int32 changeNumPerFrame) {
}

void UPsychicObjectManagerAsyncComponent::SetTickControlEnable(bool Flag) {
}

void UPsychicObjectManagerAsyncComponent::SetTickControlBrainField(bool Flag) {
}

void UPsychicObjectManagerAsyncComponent::SetRenderCheckEnable(bool Flag) {
}

void UPsychicObjectManagerAsyncComponent::SetRenderCheckActor(bool Flag, AActor* pActor) {
}

void UPsychicObjectManagerAsyncComponent::RenderCheckTickAsync() {
}

void UPsychicObjectManagerAsyncComponent::RenderCheckPrevAsync() {
}

int32 UPsychicObjectManagerAsyncComponent::GetRenderCheckActorListLen() {
    return 0;
}

AActor* UPsychicObjectManagerAsyncComponent::GetRenderCheckActor(int32 Index) {
    return NULL;
}

UPsychicObjectManagerAsyncComponent::UPsychicObjectManagerAsyncComponent() {
    this->bAsyncTack = true;
    this->bTickControlEnable = false;
    this->bSimulateControl = true;
    this->bTickControlPrevAsync = false;
    this->bTickControlTickAsync = false;
    this->TickControlDistanceSq = 0.00f;
    this->TickControlActorNum = -1.00f;
    this->TickControlChangeNum = -1;
    this->bBrainField = false;
    this->ActorNum = -1;
    this->ActorIndex = -1;
    this->bRenderCheckEnable = true;
    this->bRenderCheckPrevAsync = false;
    this->bRenderCheckTickAsync = false;
    this->bDebugPrintTickControl = false;
}

