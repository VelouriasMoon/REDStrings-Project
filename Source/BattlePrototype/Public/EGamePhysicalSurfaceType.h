#pragma once
#include "CoreMinimal.h"
#include "EGamePhysicalSurfaceType.generated.h"

UENUM(BlueprintType)
enum class EGamePhysicalSurfaceType : uint8 {
    Default,
    Dummy01,
    Stone,
    Metal_Hard,
    Metal_Board,
    Metal_Net,
    Metal_Box,
    Metal_Stick,
    Plastic,
    Marble,
    Water,
    Water_Deep,
    Water_StrongViscosity,
    Rubber,
    Snow,
    Ice,
    Ground,
    Grass,
    Wood_Dry,
    Wood_Wet,
    Rubble,
    Electric,
    Projection,
    Fire,
    Concrete,
    Fabric,
    MAX,
};

