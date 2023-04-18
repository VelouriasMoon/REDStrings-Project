#pragma once
#include "CoreMinimal.h"
#include "EDebuggingPage.generated.h"

UENUM(BlueprintType)
enum class EDebuggingPage : uint8 {
    System,
    UI,
    Battle,
    Player,
    Party,
    Enemy,
    Scene,
    Render,
    Sound,
    Event,
    Ajito,
    Max,
};

