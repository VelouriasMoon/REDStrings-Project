#pragma once
#include "CoreMinimal.h"
#include "EMainContentsAnim.generated.h"

UENUM(BlueprintType)
enum class EMainContentsAnim : uint8 {
    Default,
    DefaultNone,
    In,
    Out,
    DefaultView,
    ChangeView,
    ChangeDefault,
    InfoWindow,
    InfoWindowIn,
    InfoWindowOut,
};

