#include "NpcTownPeopleBase.h"

class UActorComponent;

void ANpcTownPeopleBase::SetupGround() {
}

void ANpcTownPeopleBase::SetLookAtPlayer(bool IsLookAt) {
}

void ANpcTownPeopleBase::SetCulling(bool Culling) {
}

UActorComponent* ANpcTownPeopleBase::GetLookAtComponent_Implementation() const {
    return NULL;
}

float ANpcTownPeopleBase::GetHeadHeight() {
    return 0.0f;
}

bool ANpcTownPeopleBase::CheckCulling() {
    return false;
}

ANpcTownPeopleBase::ANpcTownPeopleBase() {
    this->AnimClass = NULL;
    this->FirstAnimationKind = ENpcAnimationKind::NPCANIM_IDLE;
    this->IsLookAtPlayer = false;
    this->IconOffsetDataInfos.AddDefaulted(3);
    this->IsCullingMode = false;
    this->IsUseTick = true;
}

