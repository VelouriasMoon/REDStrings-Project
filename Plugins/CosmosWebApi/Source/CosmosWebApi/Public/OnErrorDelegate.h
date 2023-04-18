#pragma once
#include "CoreMinimal.h"
#include "OnErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnError, int32, code, const FString&, errmsg);

