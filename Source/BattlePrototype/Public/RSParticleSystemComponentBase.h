#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "ERSParticleSystemAttachRotationOffMode.h"
#include "ESequencerDilationOwner.h"
#include "RSParticleSystemComponentBase.generated.h"

class AActor;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSParticleSystemComponentBase : public UParticleSystemComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CreatorActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrailTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isApplyStageSetting;
    
    URSParticleSystemComponentBase();
    UFUNCTION(BlueprintCallable)
    bool UseStageSetting_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseForceLOD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopParticleImplements();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAndHideParticleImplements();
    
    UFUNCTION(BlueprintCallable)
    void SetLocalTimeDilation(float Dilation);
    
    UFUNCTION(BlueprintCallable)
    void SetHideDebuggingInfoScreen(bool Hide);
    
    UFUNCTION(BlueprintCallable)
    void SetForceLOD(int32 InLODLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableDistanceCulling(bool UseCulling);
    
    UFUNCTION(BlueprintCallable)
    void SetDilationOwner(ESequencerDilationOwner InDilationOwner);
    
    UFUNCTION(BlueprintCallable)
    void SetCulling(bool InCulling);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachedOption(bool InAttachLocationX, bool InAttachLocationY, bool InAttachLocationZ, bool InAttachRotationX, bool InAttachRotationY, bool InAttachRotationZ, bool InAttachScaleX, bool InAttachScaleY, bool InAttachScaleZ, ERSParticleSystemAttachRotationOffMode InAttachRotationOffMode);
    
    UFUNCTION(BlueprintCallable)
    void SetAllEmitterEnable(bool bNewEnableState);
    
    UFUNCTION(BlueprintCallable)
    void RestartParticle();
    
    UFUNCTION(BlueprintCallable)
    void ResetParticleBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayParticleImplements();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayCheckFlags();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHideDebuggingInfoScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDistanceCulling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCulling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoDestroy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    bool HasTranslucencyOrAdditiveMaterial();
    
    UFUNCTION(BlueprintCallable)
    bool HasTranslucencyMaterial();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaterialIndexFromEmitterName(FName EmitterName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetForceLOD() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetEmitterName(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    TArray<UMaterialInstanceDynamic*> GetDynamicMaterialInstanceALL();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAttachedOptionScale(bool& OutAttachScaleX, bool& OutAttachScaleY, bool& OutAttachScaleZ) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAttachedOptionRotation(bool& OutAttachRotationX, bool& OutAttachRotationY, bool& OutAttachRotationZ) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAttachedOptionLocation(bool& OutAttachLocationX, bool& OutAttachLocationY, bool& OutAttachLocationZ) const;
    
};

