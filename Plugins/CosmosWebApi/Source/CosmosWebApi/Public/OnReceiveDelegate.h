#pragma once
#include "CoreMinimal.h"
#include "OnReceiveDelegate.generated.h"

class UNetMessage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceive, UNetMessage*, Data);

