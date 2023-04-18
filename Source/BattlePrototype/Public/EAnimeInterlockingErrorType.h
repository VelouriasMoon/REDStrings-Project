#pragma once
#include "CoreMinimal.h"
#include "EAnimeInterlockingErrorType.generated.h"

UENUM(BlueprintType)
enum class EAnimeInterlockingErrorType : uint8 {
    None,
    TimeOut,
    Maintenance,
    Other,
};

