#pragma once
#include "CoreMinimal.h"
#include "OnXboxReconnectAccountDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnXboxReconnectAccountDelegate, const FString&, AccountId);

