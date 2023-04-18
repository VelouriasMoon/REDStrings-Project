#include "EventSplineMovePoint.h"
#include "Components/SplineComponent.h"

AEventSplineMovePoint::AEventSplineMovePoint() {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
}

