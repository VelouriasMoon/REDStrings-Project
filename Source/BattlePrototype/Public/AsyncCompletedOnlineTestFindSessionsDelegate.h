#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "AsyncCompletedOnlineTestFindSessionsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncCompletedOnlineTestFindSessions, const TArray<FBlueprintSessionResult>&, Result);

