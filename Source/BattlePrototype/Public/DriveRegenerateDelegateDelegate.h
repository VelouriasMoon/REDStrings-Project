#pragma once
#include "CoreMinimal.h"
#include "DriveRegenerateDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDriveRegenerateDelegate, float, RegenerateHP);

