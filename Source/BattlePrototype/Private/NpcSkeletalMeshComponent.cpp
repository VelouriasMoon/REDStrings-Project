#include "NpcSkeletalMeshComponent.h"

class AActor;
class USkeletalMeshComponent;

void UNpcSkeletalMeshComponent::SetVectorParameterValue(FName ParameterName, FVector ParameterValue) {
}

void UNpcSkeletalMeshComponent::SetVector4ParameterValue(FName ParameterName, FLinearColor ParameterValue) {
}

void UNpcSkeletalMeshComponent::SetVector4ArrayParameterValue(const TArray<FName>& ParameterNames, const TArray<FLinearColor>& ParameterValues) {
}

void UNpcSkeletalMeshComponent::SetUseAttachParentBounds(bool IsUse) {
}

void UNpcSkeletalMeshComponent::SetupLanding(float Height) {
}

void UNpcSkeletalMeshComponent::Setup(AActor* Owner, int32 InNpcMeshDataTableID, USkeletalMeshComponent* InBody, USkeletalMeshComponent* InBodyLower, USkeletalMeshComponent* InFace, USkeletalMeshComponent* InHair, TArray<USkeletalMeshComponent*>& InParts) {
}

void UNpcSkeletalMeshComponent::SetScalarParameterValue(FName ParameterName, float ParameterValue) {
}

void UNpcSkeletalMeshComponent::SetScalarArrayParameterValue(const TArray<FName>& ParameterNames, const TArray<float>& ParameterValues) {
}

void UNpcSkeletalMeshComponent::SetMaterialBaseToAmbSkin(float Value) {
}

void UNpcSkeletalMeshComponent::SetMaterialAmbToBaseSkin(float Value) {
}

void UNpcSkeletalMeshComponent::SetHideOverlap(bool bHide, bool bOneFrame) {
}

void UNpcSkeletalMeshComponent::ResetMesh(int32 InNpcMeshDataTableID) {
}

void UNpcSkeletalMeshComponent::ResetMaterial(int32 InNpcMaterialDataTableID) {
}

void UNpcSkeletalMeshComponent::GetValidSkeletalMeshComponents(TArray<USkeletalMeshComponent*>& MeshComps) {
}

ENpcMeshSkeletonType UNpcSkeletalMeshComponent::GetSkeletonType() const {
    return ENpcMeshSkeletonType::Man;
}

FString UNpcSkeletalMeshComponent::GetSkeletonName() const {
    return TEXT("");
}

USkeletalMeshComponent* UNpcSkeletalMeshComponent::GetRootComponent() {
    return NULL;
}

int32 UNpcSkeletalMeshComponent::GetPartsMaxNum() {
    return 0;
}

USkeletalMeshComponent* UNpcSkeletalMeshComponent::GetAnimationComponent() {
    return NULL;
}

void UNpcSkeletalMeshComponent::BeginPlaySetup() {
}

UNpcSkeletalMeshComponent::UNpcSkeletalMeshComponent() {
    this->bBeginPlaySetup = false;
    this->NpcMeshDataTableID = 0;
    this->NpcMaterialDataTableID = 0;
    this->bOptimizeMergeMesh = false;
    this->Body = NULL;
    this->BodyLower = NULL;
    this->Face = NULL;
    this->Hair = NULL;
    this->SkeletonType = ENpcMeshSkeletonType::Man;
}

