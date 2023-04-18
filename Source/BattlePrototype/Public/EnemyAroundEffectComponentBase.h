#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyAroundEffectComponentBase.generated.h"

class AActor;
class URSParticleSystemComponentBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UEnemyAroundEffectComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbUseEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCommonRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAttachRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSParticleSystemComponentBase* mEffectHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mVertSurfaceParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mVertSurfaceParameterCommonRateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mVertSurfaceParameterAttachRateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseMultiEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> VertSurfaceParameterCommonRateNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EmitterNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> EmitterEnableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFadeDeitherValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDelayFadeDeitherFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEndWeakHideEffect;
    
    UEnemyAroundEffectComponentBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnregisterCameraDitherParticleHandle_FromNative(AActor* Owner, URSParticleSystemComponentBase* EffectHandle);
    
    UFUNCTION(BlueprintCallable)
    bool StartAroundWeakEffect_Native(int32 emitterIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    URSParticleSystemComponentBase* SpawnEmitter_FromNative(USkeletalMeshComponent* TargetMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleEffect_Native(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeDeitherValue(float DeitherValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectParameter();
    
    UFUNCTION(BlueprintCallable)
    void SetEffectParam_Native(float newCommonRate, float newAttachRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterCameraDitherParticleHandle_FromNative(AActor* Owner, URSParticleSystemComponentBase* AroundWeakEffect);
    
    UFUNCTION(BlueprintCallable)
    bool IsVisibleEffect_Native(int32 emitterIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseMultiEmitter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseEffect_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableAllEmitter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableAllEmitter();
    
    UFUNCTION(BlueprintCallable)
    void Initialize(bool UseEffect, float CommonRate, float AttachRate, bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void HiddenEffect_Native(bool NewHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEmitterLastIndex();
    
    UFUNCTION(BlueprintCallable)
    bool EndAroundWeakEffect_Native(int32 emitterIndex);
    
    UFUNCTION(BlueprintCallable)
    void DelaySetFadeDeitherValue();
    
};

