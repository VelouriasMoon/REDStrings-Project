#include "NormalCaptureComponent.h"

class UAnimSequence;
class USkeletalMeshComponent;
class UTexture2D;

void UNormalCaptureComponent::WriteBoneDataFromAnim(int32 StartPixelX, int32 CharacterIndex, USkeletalMeshComponent* SkeletalMeshComponent, UAnimSequence* AnimSequence, float AnimTime) {
}

void UNormalCaptureComponent::WriteBoneData(int32 StartPixelX, int32 CharacterIndex, USkeletalMeshComponent* SkeletalMeshComponent) {
}

void UNormalCaptureComponent::InitializeTexture(int32 TextureSizeW, int32 TextureSizeH) {
}

UTexture2D* UNormalCaptureComponent::GetTexture() {
    return NULL;
}

void UNormalCaptureComponent::FinalizeTexture() {
}

UNormalCaptureComponent::UNormalCaptureComponent() {
    this->bInitialize = false;
    this->TargetTexture = NULL;
}

