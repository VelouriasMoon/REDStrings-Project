#pragma once
#include "CoreMinimal.h"
#include "EDspBus.generated.h"

UENUM(BlueprintType)
enum class EDspBus : uint8 {
    MasterOut,
    psy,
    pitchdown,
    hit_accel,
    motion_accel,
    bgm_accel,
    reverb,
    justdodge,
};

