#include "LibraryCharaData.h"

bool ULibraryCharaData::LoadDataAsset(const FString& Path, const FString& openDataPathM, const FString& openDataPathF) {
    return false;
}

ULibraryCharaData::ULibraryCharaData() {
    this->Asset = NULL;
    this->openDataM = NULL;
    this->openDataF = NULL;
}

