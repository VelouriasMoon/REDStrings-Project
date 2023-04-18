#pragma once
#include "CoreMinimal.h"
#include "EMsgViewerDataType.generated.h"

UENUM(BlueprintType)
enum class EMsgViewerDataType : uint8 {
    MsgViewerMessage,
    MsgViewerText,
};

