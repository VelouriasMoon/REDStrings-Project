#pragma once
#include "CoreMinimal.h"
#include "LIBRARY_FLAG.generated.h"

UENUM(BlueprintType)
enum LIBRARY_FLAG {
    Invalid,
    Open,
    READ,
    NEW = 0x4,
};

