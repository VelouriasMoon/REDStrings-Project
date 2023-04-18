#pragma once
#include "CoreMinimal.h"
#include "PlayerWalkRunStateKind.generated.h"

UENUM(BlueprintType)
enum class PlayerWalkRunStateKind : uint8 {
    Idle,
    Start,
    Loop,
    End,
    Turn,
};

