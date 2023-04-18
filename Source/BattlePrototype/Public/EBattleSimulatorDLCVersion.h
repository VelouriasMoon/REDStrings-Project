#pragma once
#include "CoreMinimal.h"
#include "EBattleSimulatorDLCVersion.generated.h"

UENUM(BlueprintType)
enum class EBattleSimulatorDLCVersion : uint8 {
    DLC1Free,
    DLC1Paid,
    DLC2Free,
    DLC2Paid,
    DLC3Free,
    DLC3Paid,
};

