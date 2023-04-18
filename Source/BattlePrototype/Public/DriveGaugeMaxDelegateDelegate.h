#pragma once
#include "CoreMinimal.h"
#include "ENotifyDriveEvent.h"
#include "DriveGaugeMaxDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDriveGaugeMaxDelegate, ENotifyDriveEvent, reason);

