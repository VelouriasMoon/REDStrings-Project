#pragma once
#include "CoreMinimal.h"
#include "EPartyJoinStatus.generated.h"

UENUM(BlueprintType)
enum class EPartyJoinStatus : uint8 {
    NotJoin,
    Join,
    Remove,
    TempRemove,
};

