#pragma once
#include "CoreMinimal.h"
#include "ECheckAccountFlag.generated.h"

UENUM(BlueprintType)
enum class ECheckAccountFlag : uint8 {
    SaveLoad,
    Movie,
    Suspend,
    Loading,
    BackToTitle,
    SubMenuFading,
    PersistentLevelReload,
};

