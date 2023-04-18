#pragma once
#include "CoreMinimal.h"
#include "EChangeAreaStatus.h"
#include "OnChangeAreaLoadStatusDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeAreaLoadStatus, EChangeAreaStatus, Status, bool, IsChangeLocation);

