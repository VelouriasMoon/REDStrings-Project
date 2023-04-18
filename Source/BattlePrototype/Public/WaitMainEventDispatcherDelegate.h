#pragma once
#include "CoreMinimal.h"
#include "WaitMainEventDispatcherDelegate.generated.h"

class AMainEventLatentActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FWaitMainEventDispatcher, AMainEventLatentActor*, latenter);

