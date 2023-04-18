#include "CharacterPhysicalSurfaceActionSoundResource.h"

class USoundAtomCue;

bool UCharacterPhysicalSurfaceActionSoundResource::UnloadAsset() {
    return false;
}

bool UCharacterPhysicalSurfaceActionSoundResource::LoadAsset(const FCharacterPhysicalSurfaceActionSound& ActionSound) {
    return false;
}

bool UCharacterPhysicalSurfaceActionSoundResource::IsLoaded() {
    return false;
}

USoundAtomCue* UCharacterPhysicalSurfaceActionSoundResource::GetResource(EGamePhysicalSurfaceType SurfaceType, ECharacterPhysicalActionType ActionType) {
    return NULL;
}

UCharacterPhysicalSurfaceActionSoundResource::UCharacterPhysicalSurfaceActionSoundResource() {
    this->ResourceList.AddDefaulted(26);
}

