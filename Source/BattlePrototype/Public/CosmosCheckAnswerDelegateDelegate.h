#pragma once
#include "CoreMinimal.h"
#include "CosmosCheckAnswerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FCosmosCheckAnswerDelegate, const bool, bCommunicationSuccess, const bool, bCorrect);

