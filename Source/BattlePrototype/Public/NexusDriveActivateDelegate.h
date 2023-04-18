#pragma once
#include "CoreMinimal.h"
#include "NexusDriveActivateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNexusDriveActivate, bool, bActivate);

