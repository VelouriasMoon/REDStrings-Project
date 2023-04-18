#pragma once
#include "CoreMinimal.h"
#include "DriveEndDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDriveEndDelegate, bool, bInterruption, bool, bLocationChange);

