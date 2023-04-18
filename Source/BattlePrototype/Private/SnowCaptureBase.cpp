#include "SnowCaptureBase.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "RSSceneCaptureComponent2D.h"


void ASnowCaptureBase::RegistShowOnlyActorComponent() {
}

void ASnowCaptureBase::CreateSnowMaterialInstance() {
}

void ASnowCaptureBase::CreateRenderTargets() {
}

ASnowCaptureBase::ASnowCaptureBase() {
    this->rootComponent_ = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));
    this->sceneCaptureComponent_ = CreateDefaultSubobject<URSSceneCaptureComponent2D>(TEXT("URSSceneCaptureComponent2D"));
    this->simpleMeshComponentCenter_ = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UStaticMeshComponentCenter"));
    this->simpleMeshComponentLeft_ = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UStaticMeshComponentLeft"));
    this->simpleMeshComponentRight_ = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UStaticMeshComponentRight"));
    this->simpleMeshFootComponentCenter_ = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UStaticMeshFootComponentCenter"));
    this->simpleMeshFootComponentLeft_ = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UStaticMeshFootComponentLeft"));
    this->simpleMeshFootComponentRight_ = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UStaticMeshFootComponentRight"));
    this->simpleBodyMeshComponentCenter_ = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UStaticBodyMeshComponentCenter"));
    this->simpleBodyMeshComponentLeft_ = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UStaticBodyMeshComponentLeft"));
    this->simpleBodyMeshComponentRight_ = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UStaticBodyMeshComponentRight"));
    this->depthMaterialBase_ = NULL;
    this->addDepthValue_ = 0.00f;
    this->textureSize_ = 512;
    this->blurLevel_ = 0;
    this->useBlurBeforeFrameTex_ = false;
    this->blurSpeedMulti_ = 1.00f;
    this->beforeCaptureDecayValue_ = 0.00f;
    this->useSimpleMesh_ = false;
    this->useBothFeetSimpleMesh_ = false;
    this->simpleMesh_ = NULL;
    this->simpleBodyMesh_ = NULL;
    this->playerData_ = NULL;
    this->isOddFrame_ = false;
    this->mpcSnowCapture_ = NULL;
}

