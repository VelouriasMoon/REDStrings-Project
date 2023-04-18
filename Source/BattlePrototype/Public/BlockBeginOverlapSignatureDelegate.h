#pragma once
#include "CoreMinimal.h"
#include "BlockBeginOverlapSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBlockBeginOverlapSignature, AActor*, OverlappedActor, AActor*, OtherActor);

