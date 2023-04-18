#pragma once
#include "CoreMinimal.h"
#include "TutoMoviePlayType.generated.h"

UENUM(BlueprintType)
enum class TutoMoviePlayType : uint8 {
    Invalid,
    Play,
    Stop,
};

