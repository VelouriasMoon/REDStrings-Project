#pragma once
#include "CoreMinimal.h"
#include "BlockEndOverlapSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBlockEndOverlapSignature, AActor*, OverlappedActor, AActor*, OtherActor);

