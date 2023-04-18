#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "ESequencerDilationOwner.h"
#include "Templates/SubclassOf.h"
#include "RSParticleStatics.generated.h"

class UObject;
class UParticleSystem;
class URSParticleSystemComponentBase;
class USceneComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSParticleStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSParticleStatics();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartEmitterForSpawnedComponent(URSParticleSystemComponentBase* pPSC, const UObject* WorldContextObject, UParticleSystem* EmitterTemplate, FVector SpawnLocation, FRotator SpawnRotation, FVector SpawnScale, const bool isActiveSystem, const UObject* Creator, ESequencerDilationOwner DilationOwner);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnEmitterAttachedNoReturnComponent(TSubclassOf<URSParticleSystemComponentBase> ComponentClass, UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, const bool isActiveSystem, bool bAutoDestroy, const UObject* Creator, bool bForceConnectWorld, URSParticleSystemComponentBase* pTurnUsePSC, ESequencerDilationOwner DilationOwner);
    
    UFUNCTION(BlueprintCallable)
    static URSParticleSystemComponentBase* SpawnEmitterAttached(TSubclassOf<URSParticleSystemComponentBase> ComponentClass, UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, const bool isActiveSystem, bool bAutoDestroy, const UObject* Creator, bool bForceConnectWorld, URSParticleSystemComponentBase* pTurnUsePSC, bool bAttachLocationOnly, ESequencerDilationOwner DilationOwner);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URSParticleSystemComponentBase* SpawnEmitterAtLocationOptional(const UObject* WorldContextObject, TSubclassOf<URSParticleSystemComponentBase> ComponentClass, UParticleSystem* EmitterTemplate, const TArray<FParticleSysParam>& InstanceParameters, FVector Location, FRotator Rotation, FVector Scale, const bool isActiveSystem, bool bAutoDestroy, const UObject* Creator, ESequencerDilationOwner DilationOwner);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEmitterAtLocationNoReturnComponent(const UObject* WorldContextObject, TSubclassOf<URSParticleSystemComponentBase> ComponentClass, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, const bool isActiveSystem, bool bAutoDestroy, const UObject* Creator, ESequencerDilationOwner DilationOwner);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URSParticleSystemComponentBase* SpawnEmitterAtLocation(const UObject* WorldContextObject, TSubclassOf<URSParticleSystemComponentBase> ComponentClass, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, const bool isActiveSystem, bool bAutoDestroy, const UObject* Creator, ESequencerDilationOwner DilationOwner);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnEmitteDeactiveSystem(URSParticleSystemComponentBase* PSC);
    
};

