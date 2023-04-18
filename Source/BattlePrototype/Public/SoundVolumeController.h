#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESoundCategory.h"
#include "SoundVolumeSetting.h"
#include "SoundVolumeController.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API USoundVolumeController : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MasterVolume;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundVolumeSetting m_SoundVolumeSetting[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsFadeExitting;
    
public:
    USoundVolumeController();
    UFUNCTION(BlueprintCallable)
    void SetResumeFromMuteAll();
    
    UFUNCTION(BlueprintCallable)
    void SetRestertFadeAll();
    
    UFUNCTION(BlueprintCallable)
    void SetMuteAll();
    
    UFUNCTION(BlueprintCallable)
    void SetInGameVolumeByCategoryName(ESoundCategory Category, float DestVol);
    
    UFUNCTION(BlueprintCallable)
    void SetInGameVolumeAll(float DestVol);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeByCategoryName(ESoundCategory Category, float FadeTime, float DestVol);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeAllCategory(float FadeTime, float DestVol);
    
    UFUNCTION(BlueprintCallable)
    void SetExitFadeAll();
    
    UFUNCTION(BlueprintCallable)
    void SetConfigVolumeByCategoryName(ESoundCategory Category, float DestVol);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
    UFUNCTION(BlueprintCallable)
    float _GetPassedTimeByCategoryName(ESoundCategory Category);
    
    UFUNCTION(BlueprintCallable)
    float _GetNowVolumeByCategoryName(ESoundCategory Category);
    
    UFUNCTION(BlueprintCallable)
    bool _GetIsTick();
    
    UFUNCTION(BlueprintCallable)
    bool _GetIsFadeByCategoryName(ESoundCategory Category);
    
    UFUNCTION(BlueprintCallable)
    float _GetInGameVolumeByCategoryName(ESoundCategory Category);
    
    UFUNCTION(BlueprintCallable)
    float _GetFadeTimeByCategoryName(ESoundCategory Category);
    
    UFUNCTION(BlueprintCallable)
    float _GetDestVolumeByCategoryName(ESoundCategory Category);
    
    UFUNCTION(BlueprintCallable)
    float _GetConfigVolumeByCategoryName(ESoundCategory Category);
    
    UFUNCTION(BlueprintCallable)
    float _GetAcfVolumeByCategoryName(ESoundCategory Category);
    
};

