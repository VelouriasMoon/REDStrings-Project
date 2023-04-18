#include "CharacterPhysicalSurfaceActionEffectResource.h"

class UParticleSystem;

bool UCharacterPhysicalSurfaceActionEffectResource::UnloadAsset() {
    return false;
}

bool UCharacterPhysicalSurfaceActionEffectResource::LoadAsset(const FCharacterPhysicalSurfaceActionEffect& ActionEffect) {
    return false;
}

bool UCharacterPhysicalSurfaceActionEffectResource::IsLoaded() {
    return false;
}

UParticleSystem* UCharacterPhysicalSurfaceActionEffectResource::GetResource(EGamePhysicalSurfaceType SurfaceType, ECharacterPhysicalActionType ActionType) {
    return NULL;
}

UCharacterPhysicalSurfaceActionEffectResource::UCharacterPhysicalSurfaceActionEffectResource() {
    this->ResourceList.AddDefaulted(26);
}

