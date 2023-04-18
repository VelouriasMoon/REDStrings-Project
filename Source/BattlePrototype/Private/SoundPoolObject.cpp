#include "SoundPoolObject.h"

class URSAtomComponentBase;

URSAtomComponentBase* USoundPoolObject::Get() {
    return NULL;
}

USoundPoolObject::USoundPoolObject() {
    this->Component = NULL;
    this->Used = false;
}

