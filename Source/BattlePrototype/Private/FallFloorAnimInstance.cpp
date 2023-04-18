#include "FallFloorAnimInstance.h"

UFallFloorAnimInstance::UFallFloorAnimInstance() {
    this->IsBreakAll = false;
    this->IsRemovedAnyBlock = false;
    this->BoneScales.AddDefaulted(9);
}

