#pragma once
#include "CoreMinimal.h"
#include "EUINoticeMessageCallType.h"
#include "OnChangeNoticeUiRemoveStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeNoticeUiRemoveState, EUINoticeMessageCallType, senderType, FName, datatableId);

