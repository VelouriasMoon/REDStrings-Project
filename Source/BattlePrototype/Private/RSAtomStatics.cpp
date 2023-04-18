#include "RSAtomStatics.h"
#include "Templates/SubclassOf.h"

class UObject;
class URSAtomComponentBase;
class USceneComponent;
class USoundAtomCue;
class USoundAttenuation;
class USoundConcurrency;

URSAtomComponentBase* URSAtomStatics::SpawnSoundAttachedRS(TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bAutoActivate, UObject* Creator, EFilterCallbackType filterCallbackType) {
    return NULL;
}

URSAtomComponentBase* URSAtomStatics::SpawnSoundAttachedLoadedSheetRS(const UObject* WorldContextObject, TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bAutoActivate, UObject* Creator, EFilterCallbackType filterCallbackType) {
    return NULL;
}

URSAtomComponentBase* URSAtomStatics::SpawnSoundAtLocationRS(const UObject* WorldContextObject, TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bAutoActivate, UObject* Creator, EFilterCallbackType filterCallbackType) {
    return NULL;
}

URSAtomComponentBase* URSAtomStatics::SpawnSoundAtLocationLoadedSheetRS(const UObject* WorldContextObject, TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bAutoActivate, UObject* Creator, EFilterCallbackType filterCallbackType) {
    return NULL;
}

URSAtomComponentBase* URSAtomStatics::SpawnSound2DRS(const UObject* WorldContextObject, TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, float PitchMultiplier, float StartTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool bAutoActivate, UObject* Creator, EFilterCallbackType filterCallbackType) {
    return NULL;
}

void URSAtomStatics::SetNonPlayerCueSheetVolumeParam(const float Volume) {
}

void URSAtomStatics::SetIsCueSheetVolumeEnable(const bool Flag) {
}

void URSAtomStatics::SetCueSheetVolume(const FString& SheetName, const float Volume) {
}

void URSAtomStatics::RemoveCueSheetVolume(const FString& SheetName) {
}

void URSAtomStatics::RemoveAllCueSheetVolume() {
}

URSAtomComponentBase* URSAtomStatics::PlaySoundAttachedRS(TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, UObject* Creator, EFilterCallbackType filterCallbackType) {
    return NULL;
}

void URSAtomStatics::PlaySoundAtLocationRS(UObject* WorldContextObject, TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, UObject* Creator, EFilterCallbackType filterCallbackType) {
}

void URSAtomStatics::PlayOneShotSoundAtLocationRS(UObject* WorldContextObject, TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, FVector Location, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, UObject* Creator, EFilterCallbackType filterCallbackType) {
}

void URSAtomStatics::PauseAudioOutputRS(bool bPause) {
}

float URSAtomStatics::GetNonPlayerCueSheetVolumeParam() {
    return 0.0f;
}

float URSAtomStatics::GetCueSheetVolume(const FString& SheetName, const bool isForceGet) {
    return 0.0f;
}

URSAtomStatics::URSAtomStatics() {
}

