#pragma once
#include "CoreMinimal.h"
#include "EBrainTalkEmFile.generated.h"

UENUM(BlueprintType)
enum class EBrainTalkEmFile : uint8 {
    BrainTalkEm_Boss1,
    BrainTalkEm_Boss2,
    BrainTalkEm_Boss3,
    BrainTalkEm_Boss4,
    BrainTalkEm_Boss5,
    BrainTalkEm_Boss6,
    BrainTalkEm_Boss7,
    BrainTalkEm_ZakoGeneral,
    BrainTalkEm_ZakoIndiv1,
    BrainTalkEm_ZakoIndiv2,
    BrainTalkEm_ZakoIndiv3,
    BrainTalkEm_ZakoIndiv4,
    Max,
};

