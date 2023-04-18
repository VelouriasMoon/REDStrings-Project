#include "SASVisionComponent.h"

class AActor;
class USASVisionComponent;
class USkeletalMeshComponent;

void USASVisionComponent::StartDisappear() {
}


USASVisionComponent* USASVisionComponent::GetSASVisionComponent(AActor* Actor) {
    return NULL;
}

USkeletalMeshComponent* USASVisionComponent::GetMainMesh() const {
    return NULL;
}

AActor* USASVisionComponent::GetMainActor() const {
    return NULL;
}

USASVisionComponent::USASVisionComponent() {
    this->_maskActorClass = NULL;
    this->_curveMaskAppearLocation = NULL;
    this->_curveMaskDisappearLocation = NULL;
    this->_curveMaskRotation = NULL;
    this->_curveMaskScale = NULL;
    this->_bDebugDispMask = false;
    this->_meshShakeSpanShort = 0.01f;
    this->_meshShakeSpanLongMin = 0.30f;
    this->_meshShakeSpanLongMax = 0.50f;
    this->_meshShakeSmallContinueMin = 3;
    this->_meshShakeSmallContinueMax = 10;
    this->_bShakeLinear = false;
}

