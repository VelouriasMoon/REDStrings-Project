#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Engine/EngineTypes.h"
#include "BSPBlockVolumeHitSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FBSPBlockVolumeHitSignature, AActor*, SelfActor, AActor*, OtherActor, FVector, NormalImpulse, const FHitResult&, Hit);

