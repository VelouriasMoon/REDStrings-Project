#include "EnemyGroundCheckComponent.h"

class USkeletalMeshComponent;

void UEnemyGroundCheckComponent::SetRotationToUpVector(USkeletalMeshComponent* MeshComp, float interpSpeed, FVector UpVector) {
}

void UEnemyGroundCheckComponent::SetRotation(USkeletalMeshComponent* MeshComp, float interpSpeed) {
}

void UEnemyGroundCheckComponent::SetRotateMesh(USkeletalMeshComponent* MeshComp, float interpSpeed, float angleLimit, bool endFit) {
}

void UEnemyGroundCheckComponent::SetIntervalTime(float newIntervalTime) {
}

void UEnemyGroundCheckComponent::SetCheckPos(FVector Position) {
}

void UEnemyGroundCheckComponent::InitSetting(bool multipleChecks, float checkHeight, float CapsuleRadius) {
}

FVector UEnemyGroundCheckComponent::GetUpVector() const {
    return FVector{};
}

FRotator UEnemyGroundCheckComponent::GetCalcRotator() const {
    return FRotator{};
}

void UEnemyGroundCheckComponent::EndGroundCheck() {
}

FRotator UEnemyGroundCheckComponent::CalcRotationToUpVector(float OffsetYaw, FVector forwardVector, FTransform Transform, FRotator baseRot, float interpSpeed, FVector UpVector) {
    return FRotator{};
}

FRotator UEnemyGroundCheckComponent::CalcRotation(FRotator baseRot, float interpSpeed) {
    return FRotator{};
}

void UEnemyGroundCheckComponent::CalcRotateRotToMesh(USkeletalMeshComponent* MeshComp, float OffsetYaw, float interpSpeed, float angleLimit, bool endFit) {
}

void UEnemyGroundCheckComponent::CalcRotateRotMesh(USkeletalMeshComponent* MeshComp, float OffsetYaw, float interpSpeed, float angleLimit, bool endFit) {
}

void UEnemyGroundCheckComponent::CalcRotateRot(float OffsetYaw, FVector forwardVector, FTransform Transform, FVector baseUpVector, FRotator baseRot, float interpSpeed, float angleLimit, bool endFit) {
}

void UEnemyGroundCheckComponent::CalcRotateMesh(USkeletalMeshComponent* MeshComp, float interpSpeed, float angleLimit, bool endFit) {
}

void UEnemyGroundCheckComponent::BeginGroundCheck() {
}

UEnemyGroundCheckComponent::UEnemyGroundCheckComponent() {
}

