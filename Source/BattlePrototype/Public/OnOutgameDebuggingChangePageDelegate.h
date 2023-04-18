#pragma once
#include "CoreMinimal.h"
#include "EOutgameDebuggingPage.h"
#include "OnOutgameDebuggingChangePageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOutgameDebuggingChangePage, EOutgameDebuggingPage, Page);

