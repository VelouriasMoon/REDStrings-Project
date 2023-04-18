#pragma once
#include "CoreMinimal.h"
#include "OnXboxFirstConnectDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnXboxFirstConnectDelegate, const FString&, AccountId);

