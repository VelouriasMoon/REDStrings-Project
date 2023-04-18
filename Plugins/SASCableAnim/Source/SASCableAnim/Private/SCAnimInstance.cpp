#include "SCAnimInstance.h"

void USCAnimInstance::Update(float DeltaTime) {
}

void USCAnimInstance::SetSASCodeSocketWorldLocations(const TMap<FName, FTransform>& locations) {
}

void USCAnimInstance::SaveToBeforeFrameSocketLocations() {
}

void USCAnimInstance::Init() {
}

USCAnimInstance::USCAnimInstance() {
    this->physicsIdlingSec_ = -1.00f;
    this->animDataAsset_ = NULL;
}

