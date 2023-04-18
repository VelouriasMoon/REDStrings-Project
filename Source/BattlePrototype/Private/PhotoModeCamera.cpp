#include "PhotoModeCamera.h"
#include "Components/CapsuleComponent.h"

class AActor;
class UPrimitiveComponent;

void APhotoModeCamera::ResetRollAngle() {
}

void APhotoModeCamera::ResetFov() {
}

void APhotoModeCamera::ResetCamera() {
}

void APhotoModeCamera::OnEndDitherOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APhotoModeCamera::OnBeginDitherOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


float APhotoModeCamera::GetCameraRollAngleMin() {
    return 0.0f;
}

float APhotoModeCamera::GetCameraRollAngleMax() {
    return 0.0f;
}

float APhotoModeCamera::GetCameraRollAngle() {
    return 0.0f;
}

float APhotoModeCamera::GetCameraFovMin() {
    return 0.0f;
}

float APhotoModeCamera::GetCameraFovMax() {
    return 0.0f;
}

float APhotoModeCamera::GetCameraFov() {
    return 0.0f;
}

void APhotoModeCamera::EndPhotoCamera() {
}



void APhotoModeCamera::DebugUseDebugParameter(bool bSet, float CheckAngle, float DitherAngle, float DistMin, float DistDefault, float DistMax, FName SocketName) {
}

void APhotoModeCamera::DebugDrawDirDitherInfo(bool bSet) {
}

void APhotoModeCamera::DebugDisableOverlapDither(bool bSet) {
}

void APhotoModeCamera::DebugDisableDirDither(bool bSet) {
}

void APhotoModeCamera::DebugDirDitherForceCheck(bool bUnder, bool bSpine) {
}

void APhotoModeCamera::BeginPhotoCamera() {
}

void APhotoModeCamera::AddCameraRollAngle(float addValue) {
}

void APhotoModeCamera::AddCameraFov(float addValue) {
}

APhotoModeCamera::APhotoModeCamera() {
    this->MAX_SPEED_H = 500.00f;
    this->ACCELERATION_H = 1500.00f;
    this->MAX_SPEED_V = 300.00f;
    this->ACCELERATION_V = 1500.00f;
    this->MAX_ROTATE_SPEED = 80.00f;
    this->ACCELERATION_ROTATE = 300.00f;
    this->MAX_ANGLE_V = 50.00f;
    this->ROTATE_SPEED_ROLL = 1.00f;
    this->MAX_ROTATE_ROLL = 90.00f;
    this->MAX_MOVE_RANGE = 1500.00f;
    this->MIN_FOV = 25.00f;
    this->MAX_FOV = 120.00f;
    this->FOV_ADD_VALUE = 1.00f;
    this->RANGE_LIMIT_SLIDE_ANGLE = 30.00f;
    this->BACKGROUND_SLIDE_ANGLE = 15.00f;
    this->BACKGROUND_SLIDE_OFFSET = 1.00f;
    this->BACKGROUND_STEPUP_HEIGHT = 15.00f;
    this->DitherCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DitherCapsuleComponent"));
    this->HumanDitherCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HumanDitherCapsuleComponent"));
    this->DITHER_INTERP_TIME = 0.00f;
    this->DIR_DITHER_CHECK_RANGE_OFFSET = 1500.00f;
    this->DIR_DITHER_CHECK_SCREEN_OFFSET_LEFT = 100.00f;
    this->DIR_DITHER_CHECK_SCREEN_OFFSET_RIGHT = 100.00f;
    this->DIR_DITHER_CHECK_SCREEN_OFFSET_TOP = 500.00f;
    this->DIR_DITHER_CHECK_SCREEN_OFFSET_BOTTOM = 300.00f;
    this->DirDitherDataTable = NULL;
}

