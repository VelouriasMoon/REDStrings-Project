#include "CopyPlayerAnimInstance.h"

class URSPlayerAnimInstance;

void UCopyPlayerAnimInstance::SetupFootIK(URSPlayerAnimInstance* InOriginalAnimInstance, float InFloorAngle, float InCapsuleHeight) {
}

UCopyPlayerAnimInstance::UCopyPlayerAnimInstance() {
    this->bUseMontage = false;
    this->FootIKBlendRate = 0.00f;
    this->FootIKMaxHeight = 30.00f;
    this->_MeshOffset = 0.00f;
}

