#pragma once
#include "CoreMinimal.h"
#include "EDebuggingPage.h"
#include "OnDebuggingChangePageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDebuggingChangePage, EDebuggingPage, Page);

