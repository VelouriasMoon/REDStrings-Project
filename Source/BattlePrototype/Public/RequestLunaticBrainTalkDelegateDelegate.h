#pragma once
#include "CoreMinimal.h"
#include "EPlayerBrainFieldDanger.h"
#include "RequestLunaticBrainTalkDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRequestLunaticBrainTalkDelegate, EPlayerBrainFieldDanger, DangerLV, bool, bFirstBrainField);

