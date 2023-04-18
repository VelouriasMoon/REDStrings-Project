#include "ItemCaptureStaticMeshBase.h"
#include "Components/StaticMeshComponent.h"
#include "Templates/SubclassOf.h"

class AItemCaptureStaticMeshBase;
class UObject;

bool AItemCaptureStaticMeshBase::GenerateStaticMesh(const UObject* WorldContextObject, TSubclassOf<AItemCaptureStaticMeshBase> bpClassType, const FString& meshPath) {
    return false;
}

AItemCaptureStaticMeshBase::AItemCaptureStaticMeshBase() {
    this->bpClass = NULL;
    this->m_rootComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootStaticMeshComp"));
    this->m_staticMesh = NULL;
}

