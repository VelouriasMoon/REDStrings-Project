#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "PlayerStuckDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerStuckDelegate, FVector, ImpactLocation);

