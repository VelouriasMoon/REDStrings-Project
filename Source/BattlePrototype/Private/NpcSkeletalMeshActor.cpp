#include "NpcSkeletalMeshActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "NpcSkeletalMeshComponent.h"
#include "RSCapsuleComponent.h"

void ANpcSkeletalMeshActor::SetVectorParameterValue(FName ParameterName, FVector ParameterValue) {
}

void ANpcSkeletalMeshActor::SetVector4ParameterValue(FName ParameterName, FLinearColor ParameterValue) {
}

void ANpcSkeletalMeshActor::SetVector4ArrayParameterValue(const TArray<FName>& ParameterNames, const TArray<FLinearColor>& ParameterValues) {
}

void ANpcSkeletalMeshActor::SetUseShaderBoneID(bool bUse) {
}

void ANpcSkeletalMeshActor::SetScalarParameterValue(FName ParameterName, float ParameterValue) {
}

void ANpcSkeletalMeshActor::SetScalarArrayParameterValue(const TArray<FName>& ParameterNames, const TArray<float>& ParameterValues) {
}

void ANpcSkeletalMeshActor::SetRenderLayer(uint8 NewRenderLayer) {
}

void ANpcSkeletalMeshActor::SetNpcTickInterval(float Value) {
}

void ANpcSkeletalMeshActor::SetNpcTickEnabled(bool Enabled) {
}

void ANpcSkeletalMeshActor::SetLightChannnel(bool Channel0, bool Channel1, bool Channel2) {
}

void ANpcSkeletalMeshActor::SetInfiniteBounds(bool Enable) {
}

void ANpcSkeletalMeshActor::SetHideOverlap(bool bHide, bool bOneFrame) {
}

void ANpcSkeletalMeshActor::SetForcedLOD(int32 Level) {
}

void ANpcSkeletalMeshActor::ResetMeshes(int32 MeshDataTableID, int32 MaterialDataTableID) {
}

void ANpcSkeletalMeshActor::RefreshMesh() {
}

void ANpcSkeletalMeshActor::PresentEventStart() {
}

void ANpcSkeletalMeshActor::PresentEventEnd() {
}

void ANpcSkeletalMeshActor::GetValidSkeletalMeshComponents(TArray<USkeletalMeshComponent*>& MeshComps) {
}

UNpcSkeletalMeshComponent* ANpcSkeletalMeshActor::GetSkeletalMesh() {
    return NULL;
}

USkeletalMeshComponent* ANpcSkeletalMeshActor::GetSkeletalFace() {
    return NULL;
}

USkeletalMeshComponent* ANpcSkeletalMeshActor::GetSkeletalBody() {
    return NULL;
}

ANpcSkeletalMeshActor::ANpcSkeletalMeshActor() {
    this->CharacterCapsuleComponent = CreateDefaultSubobject<URSCapsuleComponent>(TEXT("CharacterHitComponent"));
    this->NpcMeshDataTableID = 0;
    this->NpcMaterialDataTableID = 0;
    this->BPOverrideMaterialID = false;
    this->HideOverlapInterpolateSeconds = 1.00f;
    this->ForcedLOD = 0;
    this->SkeletalMesh = CreateDefaultSubobject<UNpcSkeletalMeshComponent>(TEXT("NpcSkeletalMesh"));
    this->SkeletalBody = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("NpcSkeletalBody"));
    this->SkeletalBodyLower = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("NpcSkeletalBodyLower"));
    this->SkeletalFace = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("NpcSkeletalFace"));
    this->SkeletalHair = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("NpcSkeletalHair"));
    this->SkeletalParts.AddDefaulted(5);
}

