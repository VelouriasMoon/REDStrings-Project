#include "JumpAreaBase.h"

bool AJumpAreaBase::IsAcceptableJumpArea_Implementation() {
    return false;
}

AJumpAreaBase::AJumpAreaBase() {
    this->LocationNo = 0;
    this->AreaNo = 0;
    this->PortalNo = 0;
    this->UseSelectNextAreaFunction = false;
    this->LocationNoJumpTo = 0;
    this->AreaNoJumpTo = 0;
    this->PortalNoJumpTo = 1;
    this->IsOpenWorldMap = false;
    this->ToDetailSubAreaName = TEXT("Invalid");
}

