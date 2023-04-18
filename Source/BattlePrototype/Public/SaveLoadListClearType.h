#pragma once
#include "CoreMinimal.h"
#include "SaveLoadListClearType.generated.h"

UENUM(BlueprintType)
enum class SaveLoadListClearType : uint8 {
    KasaneClear,
    YuitoClear,
    AllClear,
};

