#include "EventAsset.h"

class UObject;

void UEventAsset::Release() {
}

void UEventAsset::OnFinishLoad() {
}

bool UEventAsset::IsLoaded() const {
    return false;
}

UObject* UEventAsset::GetAsset() const {
    return NULL;
}

UEventAsset::UEventAsset() {
    this->ID = -1;
    this->Asset = NULL;
}

