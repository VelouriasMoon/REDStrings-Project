#pragma once
#include "CoreMinimal.h"
#include "EBattleSimulatorPublicationCategory.generated.h"

UENUM(BlueprintType)
enum class EBattleSimulatorPublicationCategory : uint8 {
    Boss,
    Special,
    Easy,
    Normal,
    Hard,
    Num,
};

