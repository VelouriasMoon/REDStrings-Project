#include "RSClassFinder.h"
#include "Templates/SubclassOf.h"

class AActor;

void URSClassFinder::SetNextAsset(FName ClassName, FName AssetName) {
}

TSubclassOf<AActor> URSClassFinder::GetClass() const {
    return NULL;
}

URSClassFinder::URSClassFinder() {
    this->SpawnClass = NULL;
}

