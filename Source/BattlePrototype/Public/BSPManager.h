#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Engine/EngineTypes.h"
#include "BlockBeginOverlapSignatureDelegate.h"
#include "BlockEndOverlapSignatureDelegate.h"
#include "BlockHitSignatureDelegate.h"
#include "ManagerInterface.h"
#include "RSActorSystemBase.h"
#include "BSPManager.generated.h"

class AActor;
class ABSPBlockVolume;
class ABSPPortalBase;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ABSPManager : public ARSActorSystemBase, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlockBeginOverlapSignature OnBlockBeginOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlockEndOverlapSignature OnBlockEndOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlockHitSignature OnBlockHit;
    
    ABSPManager();
    UFUNCTION(BlueprintCallable)
    void UpdateBSPAttenuation_Native(const float DeltaSeconds, const bool isPlayerInBlock, TArray<ABSPBlockVolume*> areaBlocks, TArray<ABSPBlockVolume*> BlockWithPlayer, const int32 BlockUpdateID, const float MaxSoundDistance);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAllAtomBSPAttenuation_Native();
    
    UFUNCTION(BlueprintCallable)
    void OnBlockHitFunc(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnBlockEndOverlapFunc(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBlockBeginOverlapFunc(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    ABSPBlockVolume* IsPosInAnyBlock_Native(TArray<ABSPBlockVolume*> areaBlocks, FVector Pos);
    
    UFUNCTION(BlueprintCallable)
    void GetSoundAttenuationRate_Native(TArray<ABSPBlockVolume*> areaBlocks, FVector Pos, bool isPlayerInBlock, float& AttenuationRate, ABSPBlockVolume*& bLock);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSoundAttenuationRate_Call(FVector Pos, float& AttenuationRate);
    
    UFUNCTION(BlueprintCallable)
    void CalcBSPAttenuationFirstFromPlayer_Native(ABSPBlockVolume* pFromBSPVolume, TArray<ABSPPortalBase*> Portals, const FVector BasePos, const int32 BlockUpdateID, const float MaxSoundDistance);
    
    
    // Fix for true pure virtual functions not being implemented
};

