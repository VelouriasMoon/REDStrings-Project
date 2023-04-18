#pragma once
#include "CoreMinimal.h"
#include "BSPBlockVolumeBeginOverlapSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBSPBlockVolumeBeginOverlapSignature, AActor*, OverlappedActor, AActor*, OtherActor);

