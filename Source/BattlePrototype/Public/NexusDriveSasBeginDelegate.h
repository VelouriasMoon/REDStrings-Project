#pragma once
#include "CoreMinimal.h"
#include "E_SASKindNative.h"
#include "NexusDriveSasBeginDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNexusDriveSasBegin, E_SASKindNative, SasKind);

