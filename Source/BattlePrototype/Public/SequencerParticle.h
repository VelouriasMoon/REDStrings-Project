#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoolVector.h"
#include "ERSParticleSystemAttachRotationOffMode.h"
#include "ESequencerDilationOwner.h"
#include "SequencerParticle.generated.h"

class UActorComponent;
class URSParticleSystemComponentBase;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ASequencerParticle : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarmupTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolVector AttachSocketLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolVector AttachSocketRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSParticleSystemAttachRotationOffMode AttachSocketRotationOffMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolVector AttachSocketScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESequencerDilationOwner DilationOwner;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSParticleSystemComponentBase* ParticleSystemComponent;
    
public:
    ASequencerParticle();
    UFUNCTION(BlueprintCallable)
    void SetupAttachInstanceParameter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActivated(UActorComponent* Component, bool bReset);
    
};

