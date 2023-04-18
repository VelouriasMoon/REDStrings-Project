#pragma once
#include "CoreMinimal.h"
#include "ChangeLevelDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeLevelDelegate, int32, Level);

