#pragma once
#include "CoreMinimal.h"
#include "EBrainFieldEndType.h"
#include "EDBrainFieldBattleEndNativeEventDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEDBrainFieldBattleEndNativeEvent, EBrainFieldEndType, EndType);

