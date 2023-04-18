#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETrgEffMode.h"
#include "EVibSndMode.h"
#include "EVibSndPrio.h"
#include "ManagerInterface.h"
#include "TrgEffParam.h"
#include "TriggerEffectManager.generated.h"

class UForceFeedbackEffect;
class UMeshComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ATriggerEffectManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_directShotPsyObj;
    
public:
    ATriggerEffectManager();
    UFUNCTION(BlueprintCallable)
    void UpdateTriggerEffect();
    
    UFUNCTION(BlueprintCallable)
    void UnloadHDB(const FString& GroupName);
    
    UFUNCTION(BlueprintCallable)
    void Unload(const FString& GroupName);
    
    UFUNCTION(BlueprintCallable)
    void StopTriggerEffect(int32 lr, float lingeringTime);
    
    UFUNCTION(BlueprintCallable)
    void StopPadEffectName(const FString& Filename, float sec);
    
    UFUNCTION(BlueprintCallable)
    void StopPadEffect(float sec);
    
    UFUNCTION(BlueprintCallable)
    void StopEmulateCompatibleVibration(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void SetTriggerEffectOff(int32 lr);
    
    UFUNCTION(BlueprintCallable)
    void SetTriggerEffect2(ETrgEffMode m0, uint8 v00, uint8 v01, uint8 v02, ETrgEffMode m1, uint8 v10, uint8 v11, uint8 v12);
    
    UFUNCTION(BlueprintCallable)
    void SetTriggerEffect(const FTrgEffParam& L, const FTrgEffParam& R, bool leftInitFlag, bool rightInitFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomFrequencyVibration(int32 lr, uint8 Pos, uint8 amp, uint8 minFre, uint8 maxFre, bool isReleaseEnhancements);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectVolumeName(const FString& Filename, float wavvol, float vibvol, float sec);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectVolume(float wavvol, float vibvol, float sec);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectStrengthVolume(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectOuterVibrationMagnification(float mag);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectMasterVolume(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectMapGimmickVolume(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectLocationVolume(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectDirectShotVolume(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectCompatibleVolume(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectCompatibleModeSmallVolume(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectCompatibleModeMasterVolume(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectCompatibleModeLargeVolume(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectCompatibleMode2Volume(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectCompatibleMode2SmallVolume(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectCompatibleMode2SmallVibAfterglow(float frameNum);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectCompatibleMode2MinRotRateOfSmall(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectCompatibleMode2MinRotRateOfLarge(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectCompatibleMode2MaxRotRateOfSmall(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectCompatibleMode2MaxRotRateOfLarge(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectCompatibleMode2LargeVolume(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectCompatibleMode2LargeVibAfterglow(float frameNum);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectBrainFieldVolume(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetPadEffectBrainCrashVolume(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCompatibleMode2Enabled(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCompatibleVibrationMode(bool isCompatibleVibMode);
    
    UFUNCTION(BlueprintCallable)
    void ResumePadEffect();
    
    UFUNCTION(BlueprintCallable)
    void RegistTargetMeshComponent(UMeshComponent* Mesh, FName TargetSocketName);
    
    UFUNCTION(BlueprintCallable)
    void RegistDirectShotPsyObj(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void PlayPadEffectV01(const FString& Filename, float wavvol, float vibvol, bool roopFlag, EVibSndPrio svprio, EVibSndMode svmode, AActor* sndowner, UMeshComponent* sndownerMesh, FName sndownerMeshSocketName, bool isDistanceAttenuation);
    
    UFUNCTION(BlueprintCallable)
    void PlayPadEffect(const FString& Filename, float wavvol, float vibvol, bool roopFlag, EVibSndPrio svprio, EVibSndMode svmode, AActor* sndowner, UMeshComponent* sndownerMesh, FName sndownerMeshSocketName, bool isDistanceAttenuation);
    
    UFUNCTION(BlueprintCallable)
    void PlayHaptics(const FString& Filename, EVibSndMode svmode, AActor* sndowner);
    
    UFUNCTION(BlueprintCallable)
    void PlayEmulateCompatibleVibration(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
    
    UFUNCTION(BlueprintCallable)
    void PausePadEffect();
    
    UFUNCTION(BlueprintCallable)
    void LoadHDB(const FString& GroupName, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void Load(const FString& GroupName, const FString& Filename, EVibSndPrio prio);
    
    UFUNCTION(BlueprintCallable)
    bool IsTriggerInputStatus(int32 lr);
    
    UFUNCTION(BlueprintCallable)
    bool IsTriggerEffectStopped(int32 lr);
    
    UFUNCTION(BlueprintCallable)
    bool IsTriggerEffectOff(int32 lr);
    
    UFUNCTION(BlueprintCallable)
    bool IsPadEffectPlaying();
    
    UFUNCTION(BlueprintCallable)
    void IncorporateOffModeIntoTriggerEffect(bool isOffMode);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreCompatibleVibration(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void EraseTargetMeshComponent();
    
    UFUNCTION(BlueprintCallable)
    void EraseDirectShotPsyObj();
    
    UFUNCTION(BlueprintCallable)
    void ClearTriggerEffect();
    
    UFUNCTION(BlueprintCallable)
    void ChangePanRatioOfPadEffect(float padPanRatio);
    
    
    // Fix for true pure virtual functions not being implemented
};

