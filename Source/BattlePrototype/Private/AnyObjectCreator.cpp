#include "AnyObjectCreator.h"

UAnyObjectCreator::UAnyObjectCreator() {
    this->SpawnClass = NULL;
    this->SpawnObject = NULL;
    this->bSuccessConstruct = false;
    this->LoadedObject = NULL;
}

