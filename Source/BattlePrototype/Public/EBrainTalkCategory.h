#pragma once
#include "CoreMinimal.h"
#include "EBrainTalkCategory.generated.h"

UENUM(BlueprintType)
enum class EBrainTalkCategory : uint8 {
    Main,
    Sub,
    Battle,
    Zako,
    Boss,
    BrainField,
    Tutorial,
    Kizuna,
    Map,
    Gimmick,
    Other,
    Debug,
    Max,
};

