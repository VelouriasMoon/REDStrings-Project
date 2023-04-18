#pragma once
#include "CoreMinimal.h"
#include "PlayerBrainFieldUpdateDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerBrainFieldUpdateDelegate, float, DeltaSeconds);

