#pragma once
#include "CoreMinimal.h"
#include "RSCharacterBaseTickDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSCharacterBaseTickDelegate, float, DeltaSeconds);
