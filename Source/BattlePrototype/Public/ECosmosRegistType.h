#pragma once
#include "CoreMinimal.h"
#include "ECosmosRegistType.generated.h"

UENUM(BlueprintType)
enum class ECosmosRegistType : uint8 {
    Invalid,
    AlreadyRegist,
    NewRegist,
    NewTitleRegist,
    Max,
};

