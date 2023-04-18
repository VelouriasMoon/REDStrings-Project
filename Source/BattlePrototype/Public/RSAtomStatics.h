#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "EFilterCallbackType.h"
#include "Templates/SubclassOf.h"
#include "RSAtomStatics.generated.h"

class UObject;
class URSAtomComponentBase;
class USceneComponent;
class USoundAtomCue;
class USoundAttenuation;
class USoundConcurrency;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSAtomStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSAtomStatics();
    UFUNCTION(BlueprintCallable)
    static URSAtomComponentBase* SpawnSoundAttachedRS(TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bAutoActivate, UObject* Creator, EFilterCallbackType filterCallbackType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URSAtomComponentBase* SpawnSoundAttachedLoadedSheetRS(const UObject* WorldContextObject, TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bAutoActivate, UObject* Creator, EFilterCallbackType filterCallbackType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URSAtomComponentBase* SpawnSoundAtLocationRS(const UObject* WorldContextObject, TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bAutoActivate, UObject* Creator, EFilterCallbackType filterCallbackType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URSAtomComponentBase* SpawnSoundAtLocationLoadedSheetRS(const UObject* WorldContextObject, TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bAutoActivate, UObject* Creator, EFilterCallbackType filterCallbackType);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static URSAtomComponentBase* SpawnSound2DRS(const UObject* WorldContextObject, TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, float PitchMultiplier, float StartTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool bAutoActivate, UObject* Creator, EFilterCallbackType filterCallbackType);
    
    UFUNCTION(BlueprintCallable)
    static void SetNonPlayerCueSheetVolumeParam(const float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsCueSheetVolumeEnable(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetCueSheetVolume(const FString& SheetName, const float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveCueSheetVolume(const FString& SheetName);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAllCueSheetVolume();
    
    UFUNCTION(BlueprintCallable)
    static URSAtomComponentBase* PlaySoundAttachedRS(TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, UObject* Creator, EFilterCallbackType filterCallbackType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlaySoundAtLocationRS(UObject* WorldContextObject, TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, UObject* Creator, EFilterCallbackType filterCallbackType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayOneShotSoundAtLocationRS(UObject* WorldContextObject, TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, FVector Location, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, UObject* Creator, EFilterCallbackType filterCallbackType);
    
    UFUNCTION(BlueprintCallable)
    static void PauseAudioOutputRS(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    static float GetNonPlayerCueSheetVolumeParam();
    
    UFUNCTION(BlueprintCallable)
    static float GetCueSheetVolume(const FString& SheetName, const bool isForceGet);
    
};

