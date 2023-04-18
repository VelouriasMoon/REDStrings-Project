#include "RSTitleAnimInstance.h"

void URSTitleAnimInstance::SetRequestAnimKind(ETitleAnime Type) {
}

bool URSTitleAnimInstance::IsExistRequest() const {
    return false;
}

ETitleAnime URSTitleAnimInstance::GetNowAnimKind() const {
    return ETitleAnime::Default_Idle;
}

URSTitleAnimInstance::URSTitleAnimInstance() {
    this->NowAnimKind = ETitleAnime::Default_Idle;
    this->RequestAnimKind = ETitleAnime::Default_Idle;
}

