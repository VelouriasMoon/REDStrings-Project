#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "DropItemParticleName.h"
#include "DropItemStateName.h"
#include "DropItem.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class URSParticleSystemComponentBase;
class USoundAtomCue;
class USphereComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADropItem : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName itemNameID_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 itemNum_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCoreDrop_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float dropSpeedBase_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float dropAddSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddSpeedValue_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float becomeCanGettingItemTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float dropDownSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSParticleSystemComponentBase* dropParticleComponent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSParticleSystemComponentBase* acquiredParticleComponent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSParticleSystemComponentBase* getParticleComponent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float takenDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float takenAndDestroyDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* takenSphereComponent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* adsorptionSphereComponent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float adsorptionSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector adsorptionVector_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DropItemStateName nowState_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector targetPos_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDispersionMove_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 activeTickCounter_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 registNum_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* getSound_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* AddItemSeCue;
    
public:
    ADropItem();
    UFUNCTION(BlueprintCallable)
    void SwitchTickAtBeforeRenderInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetUseParticle(DropItemParticleName dpName);
    
    UFUNCTION(BlueprintCallable)
    void SetOtherParticle(UParticleSystem* dropParticle, UParticleSystem* aquParticle, UParticleSystem* getParticle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMeshVisibleAndActive(bool IsVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetItemState(DropItemStateName NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetItemDataNum(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetItemDataID(FName sId);
    
    UFUNCTION(BlueprintCallable)
    void SetDropParticle();
    
    UFUNCTION(BlueprintCallable)
    void SetAutoTakenFlag(bool bAuto);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayGetSound();
    
    UFUNCTION(BlueprintCallable)
    void PlayAddItemSound();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetParticleFinished(UParticleSystemComponent* PSystem);
    
    UFUNCTION(BlueprintCallable)
    void DropDown(float dropSpeed);
    
    UFUNCTION(BlueprintCallable)
    void DoAdsorption(float dTime);
    
    UFUNCTION(BlueprintCallable)
    void DoActiveAcquiredParticle();
    
    UFUNCTION(BlueprintCallable)
    void DestroyThisItem();
    
    UFUNCTION(BlueprintCallable)
    float ComputeAndGetDropDownSpeed(float Time);
    
    UFUNCTION(BlueprintCallable)
    void ComputeAdsorptionVector(FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void BindGetItem();
    
};

