#pragma once
#include "CoreMinimal.h"
#include "CheatCommandListenerDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCheatCommandListenerDelegate, const FName&, commandName, const FName&, argName);

