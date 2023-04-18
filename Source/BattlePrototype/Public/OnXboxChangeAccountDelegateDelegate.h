#pragma once
#include "CoreMinimal.h"
#include "OnXboxChangeAccountDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnXboxChangeAccountDelegate, const FString&, PrevAccountId, const FString&, NowAccountId);

