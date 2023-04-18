#include "EventAssetPoolComponent.h"

class UEventAsset;

bool UEventAssetPoolComponent::UnloadAsset(int32 HandleId) {
    return false;
}

void UEventAssetPoolComponent::UnloadAll() {
}

UEventAsset* UEventAssetPoolComponent::LoadAsset(const FString& Path, bool Async) {
    return NULL;
}

bool UEventAssetPoolComponent::IsLoadedAll() const {
    return false;
}

bool UEventAssetPoolComponent::IsLoaded(int32 HandleId) const {
    return false;
}

UEventAsset* UEventAssetPoolComponent::GetHandle(int32 HandleId) {
    return NULL;
}

UEventAssetPoolComponent::UEventAssetPoolComponent() {
}

