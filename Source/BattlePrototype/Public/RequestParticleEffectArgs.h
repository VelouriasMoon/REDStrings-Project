#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
//-FallbackName=Rotator
//-FallbackName=Vector
#include "RequestParticleEffectArgs.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class USceneComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URequestParticleEffectArgs : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _CustomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* _MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* _PSTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector _LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator _RotationOffset;
    
public:
    URequestParticleEffectArgs();
    UFUNCTION(BlueprintCallable)
    UParticleSystemComponent* StartParticleEffect();
    
    UFUNCTION(BlueprintCallable)
    void Setup(FName CustomName, USceneComponent* MeshComponent, UParticleSystem* PSTemplate, FName SocketName, FVector LocationOffset, FRotator RotationOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EqualsCustomName(FName Name) const;
    
};

