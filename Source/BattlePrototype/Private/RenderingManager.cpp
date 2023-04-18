#include "RenderingManager.h"
#include "RenderingManagerCoreComponent.h"

ARenderingManager::ARenderingManager() {
    this->CoreComponent = CreateDefaultSubobject<URenderingManagerCoreComponent>(TEXT("CoreComponent"));
}

