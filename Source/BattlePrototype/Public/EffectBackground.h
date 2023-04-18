#pragma once
#include "CoreMinimal.h"
#include "RSActorBackgroundBase.h"
#include "EffectBackground.generated.h"

class AActor;
class UCameraComponent;
class URSParticleSystemComponentBase;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AEffectBackground : public ARSActorBackgroundBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSParticleSystemComponentBase* ParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> playEventName_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> stopEventName_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCameraDither_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DitherDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DitherSpeed_;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* cameraComp_;
    
public:
    AEffectBackground();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopParticleImplements();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAndHideParticleImplements();
    
    UFUNCTION(BlueprintCallable)
    void SetupUseAttachment();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetDitherValue(float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProtectedDetachParticle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProtectedAttachParticle(AActor* Parent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayParticleImplements();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEffectAttachUse() const;
    
};

