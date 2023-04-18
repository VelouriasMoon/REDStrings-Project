#pragma once
#include "CoreMinimal.h"
#include "EFrameGrabType.generated.h"

UENUM(BlueprintType)
enum class EFrameGrabType : uint8 {
    Screen,
    PostRender3D,
};

