#pragma once
#include "CoreMinimal.h"
#include "ChangePsychicComboLevelDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangePsychicComboLevelDelegate, int32, PsychicComboLevel);

