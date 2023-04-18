#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "DamageParticle.h"
#include "EGamePhysicalSurfaceType.h"
#include "GeneralPhysicalSurfaceActionEffectResourceArray.h"
#include "HitDamageInfo.h"
#include "HitParticle.h"
#include "ManagerInterface.h"
#include "ParticleSystemBackGroundParameter.h"
#include "SpecialDamageParticle.h"
#include "RSParticleSystemManager.generated.h"

class ACullDistanceEffectBackgroundVolume;
class UCharacterPhysicalSurfaceActionEffectResource;
class UDataTable;
class UParticleComponentListManager;
class UParticleSystem;
class UParticleSystemComponent;
class URSParticleSystemComponentBase;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ARSParticleSystemManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FootStepDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UCharacterPhysicalSurfaceActionEffectResource*> MapFootStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGeneralPhysicalSurfaceActionEffectResourceArray> MapGeneralPhysicalActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSParticleSystemComponentBase*> Components;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitParticle> HitParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageParticle> DamageParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialDamageParticle> SpecialDamageParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleComponentListManager*> ParticleComponentListManagers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UParticleComponentListManager*> m_AnimNotifyParticleCompListMngMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeeThroughRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACullDistanceEffectBackgroundVolume*> CullDistanceBGVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullDistanceBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ManageHitEffectNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManageEffectStopEndTrail;
    
private:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<URSParticleSystemComponentBase>> PlayHitEffectManageList;
    
public:
    ARSParticleSystemManager();
    UFUNCTION(BlueprintCallable)
    void UnregisterSeeThroughParticle(URSParticleSystemComponentBase* Particle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterComponentAll();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterComponent(URSParticleSystemComponentBase* Component);
    
    UFUNCTION(BlueprintCallable)
    bool UnloadFootStep(FName nameId);
    
    UFUNCTION(BlueprintCallable)
    void StartCheckBackgroundCull(FVector CheckLocation, bool OneFrameUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetSeeThroughRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugBackgroundInformation(bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundParameter(const FParticleSystemBackGroundParameter& Parameter);
    
    UFUNCTION(BlueprintCallable)
    void ResetDebrisMaterial(UParticleSystemComponent* PSystem);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveBackGroundParticle(URSParticleSystemComponentBase* EffectBG);
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterSeeThroughParticle(URSParticleSystemComponentBase* Particle);
    
    UFUNCTION(BlueprintCallable)
    void RegisterComponent(URSParticleSystemComponentBase* Component);
    
    UFUNCTION(BlueprintCallable)
    void PlayHitDamage(const FHitDamageInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void ParticleOnSystemFinished(UParticleSystemComponent* pPSC);
    
    UFUNCTION(BlueprintCallable)
    UCharacterPhysicalSurfaceActionEffectResource* LoadFootStep(FName nameId);
    
    UFUNCTION(BlueprintCallable)
    UParticleSystem* GetGeneralPhysicalSurfaceActionResource(const EGamePhysicalSurfaceType PhysicsType, FName ActionType);
    
    UFUNCTION(BlueprintCallable)
    void EventOnSystemFinishedSeeThroughParticle(UParticleSystemComponent* PSystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DumpManagedParticles() const;
    
    UFUNCTION(BlueprintCallable)
    void DumpBackgroundCellList();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAllParticles();
    
    UFUNCTION(BlueprintCallable)
    void CullEffectAtStaticEvent(FVector CameraLocation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearBackGroundParticle();
    
    UFUNCTION(BlueprintCallable)
    void AddBackGroundParticle(URSParticleSystemComponentBase* EffectBG);
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateAllParticles(bool isReset);
    
    
    // Fix for true pure virtual functions not being implemented
};

