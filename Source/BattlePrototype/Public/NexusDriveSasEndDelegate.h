#pragma once
#include "CoreMinimal.h"
#include "E_SASKindNative.h"
#include "NexusDriveSasEndDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNexusDriveSasEnd, E_SASKindNative, SasKind);

