#pragma once
#include "CoreMinimal.h"
#include "ESystemSaveDataCommonFlag.generated.h"

UENUM(BlueprintType)
enum class ESystemSaveDataCommonFlag : uint8 {
    ExNewGame_Release_Message_Reading,
    EndContents_Release_Message_Reading,
    ExNewGame_Load_FirstMessage_Reading,
    Max,
};

