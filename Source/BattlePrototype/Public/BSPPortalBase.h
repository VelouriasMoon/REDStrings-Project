#pragma once
#include "CoreMinimal.h"
#include "RSActorSystemBase.h"
#include "BSPPortalBase.generated.h"

class ABSPBlockVolume;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ABSPPortalBase : public ARSActorSystemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABSPBlockVolume*> NearVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttenuationBaseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceAttenuationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalDistanceFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateID;
    
    ABSPPortalBase();
    UFUNCTION(BlueprintCallable)
    void SetDistanceFromPlayer(float Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalAttenuationRate() const;
    
    UFUNCTION(BlueprintCallable)
    void CheckAndSetUpdateID(int32 ID, bool& IsFirstTime);
    
    UFUNCTION(BlueprintCallable)
    void AddNearVolume(ABSPBlockVolume* BlockVolume);
    
};

