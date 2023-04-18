#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Sound/AudioVolume.h"
#include "Engine/EngineTypes.h"
#include "BSPBlockVolumeBeginOverlapSignatureDelegate.h"
#include "BSPBlockVolumeEndOverlapSignatureDelegate.h"
#include "BSPBlockVolumeHitSignatureDelegate.h"
#include "BSPBlockVolume.generated.h"

class AActor;
class ABSPPortalBase;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ABSPBlockVolume : public AAudioVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBSPBlockVolumeBeginOverlapSignature OnBSPVolumeBeginOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBSPBlockVolumeEndOverlapSignature OnBSPVolumeEndOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBSPBlockVolumeHitSignature OnBSPVolumeHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABSPPortalBase*> Portals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurSoundAttenuationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSoundAttenuationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundSettingInterporateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalDistanceFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateID;
    
    ABSPBlockVolume();
    UFUNCTION(BlueprintCallable)
    void UpdateSoundAttenuation(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceFromPlayer(float Distance);
    
    UFUNCTION(BlueprintCallable)
    void ResetAttenuation();
    
    UFUNCTION(BlueprintCallable)
    void PrepareUpdateSoundAttenuation();
    
    UFUNCTION(BlueprintCallable)
    void OnActorHitFunc(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEndOverlapFunc(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlapFunc(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInVolume(FVector Point, float SphereRadius) const;
    
};

