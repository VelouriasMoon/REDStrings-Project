#include "BSPBlockBase.h"
#include "Components/BrushComponent.h"

ABSPBlockBase::ABSPBlockBase() {
    this->BrushComponent = CreateDefaultSubobject<UBrushComponent>(TEXT("BrushComponent0"));
}

