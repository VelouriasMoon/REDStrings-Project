#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraShake.h"
#include "RSCameraShake.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API URSCameraShake : public UCameraShake {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoEffectGlobalTimeDilation;
    
    URSCameraShake();
};

