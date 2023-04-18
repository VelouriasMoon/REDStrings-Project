#pragma once
#include "CoreMinimal.h"
#include "DriveSetDriveGaugeDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDriveSetDriveGaugeDelegate, float, GaugeRate);

