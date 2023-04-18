#pragma once
#include "CoreMinimal.h"
#include "EStoreSeqCapStatus.generated.h"

UENUM(BlueprintType)
enum class EStoreSeqCapStatus : uint8 {
    None,
    WaitFadeOut,
    WaitStoreSeq,
    EndFade,
};

