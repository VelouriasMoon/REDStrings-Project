#pragma once
#include "CoreMinimal.h"
#include "BSPBlockVolumeEndOverlapSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBSPBlockVolumeEndOverlapSignature, AActor*, OverlappedActor, AActor*, OtherActor);

