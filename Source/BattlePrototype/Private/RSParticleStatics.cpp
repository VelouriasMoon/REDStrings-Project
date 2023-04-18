#include "RSParticleStatics.h"
#include "Templates/SubclassOf.h"

class UObject;
class UParticleSystem;
class URSParticleSystemComponentBase;
class USceneComponent;

void URSParticleStatics::StartEmitterForSpawnedComponent(URSParticleSystemComponentBase* pPSC, const UObject* WorldContextObject, UParticleSystem* EmitterTemplate, FVector SpawnLocation, FRotator SpawnRotation, FVector SpawnScale, const bool isActiveSystem, const UObject* Creator, ESequencerDilationOwner DilationOwner) {
}

void URSParticleStatics::SpawnEmitterAttachedNoReturnComponent(TSubclassOf<URSParticleSystemComponentBase> ComponentClass, UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, const bool isActiveSystem, bool bAutoDestroy, const UObject* Creator, bool bForceConnectWorld, URSParticleSystemComponentBase* pTurnUsePSC, ESequencerDilationOwner DilationOwner) {
}

URSParticleSystemComponentBase* URSParticleStatics::SpawnEmitterAttached(TSubclassOf<URSParticleSystemComponentBase> ComponentClass, UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, const bool isActiveSystem, bool bAutoDestroy, const UObject* Creator, bool bForceConnectWorld, URSParticleSystemComponentBase* pTurnUsePSC, bool bAttachLocationOnly, ESequencerDilationOwner DilationOwner) {
    return NULL;
}

URSParticleSystemComponentBase* URSParticleStatics::SpawnEmitterAtLocationOptional(const UObject* WorldContextObject, TSubclassOf<URSParticleSystemComponentBase> ComponentClass, UParticleSystem* EmitterTemplate, const TArray<FParticleSysParam>& InstanceParameters, FVector Location, FRotator Rotation, FVector Scale, const bool isActiveSystem, bool bAutoDestroy, const UObject* Creator, ESequencerDilationOwner DilationOwner) {
    return NULL;
}

void URSParticleStatics::SpawnEmitterAtLocationNoReturnComponent(const UObject* WorldContextObject, TSubclassOf<URSParticleSystemComponentBase> ComponentClass, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, const bool isActiveSystem, bool bAutoDestroy, const UObject* Creator, ESequencerDilationOwner DilationOwner) {
}

URSParticleSystemComponentBase* URSParticleStatics::SpawnEmitterAtLocation(const UObject* WorldContextObject, TSubclassOf<URSParticleSystemComponentBase> ComponentClass, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, const bool isActiveSystem, bool bAutoDestroy, const UObject* Creator, ESequencerDilationOwner DilationOwner) {
    return NULL;
}

void URSParticleStatics::SpawnEmitteDeactiveSystem(URSParticleSystemComponentBase* PSC) {
}

URSParticleStatics::URSParticleStatics() {
}

