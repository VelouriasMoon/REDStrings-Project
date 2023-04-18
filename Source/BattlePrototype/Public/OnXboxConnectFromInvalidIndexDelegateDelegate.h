#pragma once
#include "CoreMinimal.h"
#include "OnXboxConnectFromInvalidIndexDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnXboxConnectFromInvalidIndexDelegate, int32, ControllerId, const FString&, AccountId);

