#include "SplineLooperBase.h"

class AActor;
class USplineComponent;

void ASplineLooperBase::Update(float DeltaSeconds) {
}

void ASplineLooperBase::SetupParameters(USplineComponent* InSpawnSpline, const TArray<AActor*>& InSplineActors, const TArray<float>& InInitialSplineLocations, FTransform InAdditonalTransform, float InSpeed, float InDirectionRotationSpeed, bool bInRotateAlongSpline, bool bInFlipToSpeedDirection, bool bInUpdateScale, bool bInUseScaleToSpeedRotation) {
}

ASplineLooperBase::ASplineLooperBase() {
    this->SpawnSplineNv = NULL;
}

