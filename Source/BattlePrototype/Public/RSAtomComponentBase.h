#pragma once
#include "CoreMinimal.h"
#include "AtomComponent.h"
#include "EFilterCallbackType.h"
#include "ESoundActionOnFadeOutEnd.h"
#include "ESoundFadeState.h"
#include "OnEndPlayAtomDelegate.h"
#include "RSAtomComponentBase.generated.h"

class AActor;
class UObject;
class USoundAtomCue;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSAtomComponentBase : public UAtomComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CreatorActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCalcSIWAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSoundVolumeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundFadeState mFadeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundActionOnFadeOutEnd mActionOnFadeOutEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFadeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFadeVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFadeStartVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFadeFinishVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSIWAttenuationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mSkipAtSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndPlayAtom OnEndPlayAtom;
    
    URSAtomComponentBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateVolume();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopSound(float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetSIWAttenuationRate(float AttenuationRate);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeParam(float FadeTime, float FadeFinishVolume);
    
    UFUNCTION(BlueprintCallable)
    void RSFadeOut(float FadeTime, float FadeVolume, ESoundActionOnFadeOutEnd actionOnFadeOutEnd);
    
    UFUNCTION(BlueprintCallable)
    void RSFadeIn(float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable)
    void ResumeSound(float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void PlaySoundToPad(const UObject* WorldContextObject, USoundAtomCue* NewSound, float StartTime, float FadeTime, float FadeVolume, EFilterCallbackType filterCallbackType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void PlaySound(const UObject* WorldContextObject, USoundAtomCue* NewSound, float StartTime, float FadeTime, float FadeVolume, EFilterCallbackType filterCallbackType);
    
    UFUNCTION(BlueprintCallable)
    void PauseSound(float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    bool GetAisacByName(const FString& ControlName, float& Value);
    
    UFUNCTION(BlueprintCallable)
    void Fade(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFade(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void _OnEndPlayAtom();
    
};

