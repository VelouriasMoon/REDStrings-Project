#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Engine/EngineTypes.h"
#include "BlockHitSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FBlockHitSignature, AActor*, SelfActor, AActor*, OtherActor, FVector, NormalImpulse, const FHitResult&, Hit);

