#include "RSFrameGrabberActor.h"
#include "RSFrameGrabberComponent.h"

ARSFrameGrabberActor::ARSFrameGrabberActor() {
    this->FrameGrabberComponent = CreateDefaultSubobject<URSFrameGrabberComponent>(TEXT("FrameGrabberComponent"));
}

