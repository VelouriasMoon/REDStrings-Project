#pragma once
#include "CoreMinimal.h"
#include "RedArrangeItemOnRebirthDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRedArrangeItemOnRebirth, const FString&, ID);

