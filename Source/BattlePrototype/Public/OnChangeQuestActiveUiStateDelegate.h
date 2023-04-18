#pragma once
#include "CoreMinimal.h"
#include "OnChangeQuestActiveUiStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeQuestActiveUiState, FName, datatableId);

