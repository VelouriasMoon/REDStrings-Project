#pragma once
#include "CoreMinimal.h"
#include "EEventPlMaterialType.generated.h"

UENUM(BlueprintType)
enum class EEventPlMaterialType : uint8 {
    All,
    offF,
    offB,
    offFB,
    offO,
    offFO,
    offBO,
    offFBO,
    offG,
    offFG,
    offBG,
    offFBG,
    offOG,
    offFOG,
    offBOG,
    offFBOG,
};

