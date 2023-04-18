#pragma once
#include "CoreMinimal.h"
#include "EUINoticeMessageCallType.h"
#include "OnChangeNoticeUiStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeNoticeUiState, EUINoticeMessageCallType, senderType, FName, datatableId);

