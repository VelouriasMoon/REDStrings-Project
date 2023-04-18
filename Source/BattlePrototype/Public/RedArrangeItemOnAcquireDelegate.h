#pragma once
#include "CoreMinimal.h"
#include "RedArrangeItemOnAcquireDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRedArrangeItemOnAcquire, const FString&, ID);

