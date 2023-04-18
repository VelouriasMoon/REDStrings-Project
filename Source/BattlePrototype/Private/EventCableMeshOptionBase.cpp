#include "EventCableMeshOptionBase.h"


bool AEventCableMeshOptionBase::Initialize() {
    return false;
}


void AEventCableMeshOptionBase::CalcSASCodeSocketWorldTransforms(const TArray<FName>& SocketNames, TMap<FName, FTransform>& outSocketLocations) {
}

FTransform AEventCableMeshOptionBase::CalcSASCodeSocketWorldTransform(FName SocketName) {
    return FTransform{};
}


AEventCableMeshOptionBase::AEventCableMeshOptionBase() {
    this->parentSkeletalMesh_ = NULL;
}

