#include "FreeCameraSpectatorPawn.h"
#include "Camera/CameraComponent.h"

AFreeCameraSpectatorPawn::AFreeCameraSpectatorPawn() {
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent0"));
    this->SpeedScale = 1.00f;
    this->InitialMaxSpeed = 1200.00f;
    this->InitialAccel = 4000.00f;
    this->InitialDecel = 12000.00f;
}

