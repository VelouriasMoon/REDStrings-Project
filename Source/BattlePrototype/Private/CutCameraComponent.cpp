#include "CutCameraComponent.h"

class UDataTable;
class UMeshComponent;

void UCutCameraComponent::Setup(UDataTable* DataTable) {
}

bool UCutCameraComponent::IsUseCutCamera() const {
    return false;
}

void UCutCameraComponent::DebugDisableCutCamera(bool bSet) {
}

void UCutCameraComponent::ChangeCameraRequest(FName ParameterName, bool bEnd, bool bPitchSet, float Pitch, UMeshComponent* Mesh) {
}

void UCutCameraComponent::CameraBlendTimeUpdate() {
}

UCutCameraComponent::UCutCameraComponent() {
    this->_OwnerOldCustomDilation = 1.00f;
}

