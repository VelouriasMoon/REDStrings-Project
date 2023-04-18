#include "TeleportableWallBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ATeleportableWallBase::ATeleportableWallBase() {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->IconPosition = CreateDefaultSubobject<USceneComponent>(TEXT("IconPosition"));
    this->ShowComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ShowHitComponent"));
}

