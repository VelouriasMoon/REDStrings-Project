#include "RSParticleSystemManager.h"

class UCharacterPhysicalSurfaceActionEffectResource;
class UParticleSystem;
class UParticleSystemComponent;
class URSParticleSystemComponentBase;

void ARSParticleSystemManager::UnregisterSeeThroughParticle(URSParticleSystemComponentBase* Particle) {
}

void ARSParticleSystemManager::UnregisterComponentAll() {
}

void ARSParticleSystemManager::UnregisterComponent(URSParticleSystemComponentBase* Component) {
}

bool ARSParticleSystemManager::UnloadFootStep(FName nameId) {
    return false;
}

void ARSParticleSystemManager::StartCheckBackgroundCull(FVector CheckLocation, bool OneFrameUpdate) {
}

void ARSParticleSystemManager::SetSeeThroughRate(float Rate) {
}

void ARSParticleSystemManager::SetDebugBackgroundInformation(bool bDebug) {
}

void ARSParticleSystemManager::SetBackgroundParameter(const FParticleSystemBackGroundParameter& Parameter) {
}

void ARSParticleSystemManager::ResetDebrisMaterial(UParticleSystemComponent* PSystem) {
}

void ARSParticleSystemManager::RemoveBackGroundParticle(URSParticleSystemComponentBase* EffectBG) {
}

void ARSParticleSystemManager::RegisterSeeThroughParticle(URSParticleSystemComponentBase* Particle) {
}

void ARSParticleSystemManager::RegisterComponent(URSParticleSystemComponentBase* Component) {
}

void ARSParticleSystemManager::PlayHitDamage(const FHitDamageInfo& Info) {
}

void ARSParticleSystemManager::ParticleOnSystemFinished(UParticleSystemComponent* pPSC) {
}

UCharacterPhysicalSurfaceActionEffectResource* ARSParticleSystemManager::LoadFootStep(FName nameId) {
    return NULL;
}

UParticleSystem* ARSParticleSystemManager::GetGeneralPhysicalSurfaceActionResource(const EGamePhysicalSurfaceType PhysicsType, FName ActionType) {
    return NULL;
}

void ARSParticleSystemManager::EventOnSystemFinishedSeeThroughParticle(UParticleSystemComponent* PSystem) {
}

void ARSParticleSystemManager::DumpManagedParticles() const {
}

void ARSParticleSystemManager::DumpBackgroundCellList() {
}

void ARSParticleSystemManager::DeactivateAllParticles() {
}

void ARSParticleSystemManager::CullEffectAtStaticEvent(FVector CameraLocation) {
}

void ARSParticleSystemManager::ClearBackGroundParticle() {
}

void ARSParticleSystemManager::AddBackGroundParticle(URSParticleSystemComponentBase* EffectBG) {
}

void ARSParticleSystemManager::ActivateAllParticles(bool isReset) {
}

ARSParticleSystemManager::ARSParticleSystemManager() {
    this->FootStepDataTable = NULL;
    this->SeeThroughRate = 0.00f;
    this->CullDistanceBG = -1.00f;
    this->ManageHitEffectNum = 6;
    this->bManageEffectStopEndTrail = false;
}

