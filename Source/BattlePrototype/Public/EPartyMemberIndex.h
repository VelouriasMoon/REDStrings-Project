#pragma once
#include "CoreMinimal.h"
#include "EPartyMemberIndex.generated.h"

UENUM(BlueprintType)
enum class EPartyMemberIndex : uint8 {
    Main,
    Left,
    Right,
};

