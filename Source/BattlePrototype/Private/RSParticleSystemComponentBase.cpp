#include "RSParticleSystemComponentBase.h"

class UMaterialInstanceDynamic;

bool URSParticleSystemComponentBase::UseStageSetting_Native() {
    return false;
}

bool URSParticleSystemComponentBase::UseForceLOD() const {
    return false;
}



void URSParticleSystemComponentBase::SetLocalTimeDilation(float Dilation) {
}

void URSParticleSystemComponentBase::SetHideDebuggingInfoScreen(bool Hide) {
}

void URSParticleSystemComponentBase::SetForceLOD(int32 InLODLevel) {
}

void URSParticleSystemComponentBase::SetEnableDistanceCulling(bool UseCulling) {
}

void URSParticleSystemComponentBase::SetDilationOwner(ESequencerDilationOwner InDilationOwner) {
}

void URSParticleSystemComponentBase::SetCulling(bool InCulling) {
}

void URSParticleSystemComponentBase::SetAttachedOption(bool InAttachLocationX, bool InAttachLocationY, bool InAttachLocationZ, bool InAttachRotationX, bool InAttachRotationY, bool InAttachRotationZ, bool InAttachScaleX, bool InAttachScaleY, bool InAttachScaleZ, ERSParticleSystemAttachRotationOffMode InAttachRotationOffMode) {
}

void URSParticleSystemComponentBase::SetAllEmitterEnable(bool bNewEnableState) {
}

void URSParticleSystemComponentBase::RestartParticle() {
}

void URSParticleSystemComponentBase::ResetParticleBP() {
}


void URSParticleSystemComponentBase::PlayCheckFlags_Implementation() {
}

bool URSParticleSystemComponentBase::IsHideDebuggingInfoScreen() const {
    return false;
}

bool URSParticleSystemComponentBase::IsEnableDistanceCulling() const {
    return false;
}

bool URSParticleSystemComponentBase::IsCulling() const {
    return false;
}

bool URSParticleSystemComponentBase::IsAutoDestroy() const {
    return false;
}

void URSParticleSystemComponentBase::Initialize_Implementation() {
}

bool URSParticleSystemComponentBase::HasTranslucencyOrAdditiveMaterial() {
    return false;
}

bool URSParticleSystemComponentBase::HasTranslucencyMaterial() {
    return false;
}

int32 URSParticleSystemComponentBase::GetMaterialIndexFromEmitterName(FName EmitterName) {
    return 0;
}

int32 URSParticleSystemComponentBase::GetForceLOD() const {
    return 0;
}

FName URSParticleSystemComponentBase::GetEmitterName(int32 Index) {
    return NAME_None;
}

TArray<UMaterialInstanceDynamic*> URSParticleSystemComponentBase::GetDynamicMaterialInstanceALL() {
    return TArray<UMaterialInstanceDynamic*>();
}

void URSParticleSystemComponentBase::GetAttachedOptionScale(bool& OutAttachScaleX, bool& OutAttachScaleY, bool& OutAttachScaleZ) const {
}

void URSParticleSystemComponentBase::GetAttachedOptionRotation(bool& OutAttachRotationX, bool& OutAttachRotationY, bool& OutAttachRotationZ) const {
}

void URSParticleSystemComponentBase::GetAttachedOptionLocation(bool& OutAttachLocationX, bool& OutAttachLocationY, bool& OutAttachLocationZ) const {
}

URSParticleSystemComponentBase::URSParticleSystemComponentBase() {
    this->CreatorActor = NULL;
    this->TrailTime = 0.00f;
    this->isApplyStageSetting = true;
}

