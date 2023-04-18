#pragma once
#include "CoreMinimal.h"
#include "OnXboxCuttingAccountDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnXboxCuttingAccountDelegate, const FString&, AccountId);

