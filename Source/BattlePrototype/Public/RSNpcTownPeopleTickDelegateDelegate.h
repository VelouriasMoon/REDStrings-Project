#pragma once
#include "CoreMinimal.h"
#include "RSNpcTownPeopleTickDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSNpcTownPeopleTickDelegate, float, DeltaSeconds);

