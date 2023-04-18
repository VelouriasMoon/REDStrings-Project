#pragma once
#include "CoreMinimal.h"
#include "CosmosGetTrackingNumDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCosmosGetTrackingNumDelegate, const FString&, trackingNum);

